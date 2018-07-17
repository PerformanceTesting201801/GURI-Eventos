
import scala.concurrent.duration._

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.jdbc.Predef._
import org.slf4j.Logger
import org.slf4j.LoggerFactory


class TesteInscricao extends Simulation {

	


	val httpProtocol = http
		.baseURL("https://guriensino.unipampa.edu.br")
		.inferHtmlResources(BlackList(""".*\.js""", """.*\.css""", """.*\.gif""", """.*\.jpeg""", """.*\.jpg""", """.*\.ico""", """.*\.woff""", """.*\.(t|o)tf""", """.*\.png"""), WhiteList())
		.acceptHeader("text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8")
		.acceptEncodingHeader("gzip, deflate")
		.acceptLanguageHeader("en-US,en;q=0.9,pt-BR;q=0.8,pt;q=0.7")
		.userAgentHeader("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.99 Safari/537.36")	

		

	val headers_0 = Map("Upgrade-Insecure-Requests" -> "1")

	val headers_1 = Map(
		"Accept" -> "*/*",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"X-Requested-With" -> "XMLHttpRequest")

	val headers_2 = Map(
		"Content-Type" -> "multipart/form-data; boundary=----WebKitFormBoundaryBCXMX0A8jO4BXAUl",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"Upgrade-Insecure-Requests" -> "1")

	val headers_4 = Map(
		"Accept" -> "application/json, text/javascript, */*; q=0.01",
		"X-Requested-With" -> "XMLHttpRequest")

	val headers_6 = Map(
		"Accept" -> "*/*",
		"Content-Type" -> "application/x-www-form-urlencoded; charset=UTF-8",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"X-Requested-With" -> "XMLHttpRequest")

	val headers_8 = Map(
		"Content-Type" -> "multipart/form-data; boundary=----WebKitFormBoundaryiuen90XTjfmCNLCn",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"Upgrade-Insecure-Requests" -> "1")

    val uri1 = "guriensino.unipampa.edu.br"
    val uri2 = "https://fonts.googleapis.com/css"

    val feeder = csv("teste5.csv").queue

	val scn = scenario("Teste com inscrição de 500 usuários")
		.exec(http("Página do Evento")
			.get("/guri/evt/evento/selecionaPerfil/362")
			.headers(headers_0))
		.pause(10)
		.feed(feeder)
		.exec(http("Login")
			.post("/guri/ptl/sistema/isLogado")
			.headers(headers_1)
			.resources(http("Resposta do servidor com relação ao tipo de perfil")
			.post("/guri/evt/painel/verificaPerfil/")
			.headers(headers_2)
			.body(ElFileBody("Teste3_0002_request.txt")),
            http("Redireciona para o painel de participante após efetuar login")
			.get("/guri/evt/painel/painelParticipante/")
			.headers(headers_0).check(currentLocation.is("https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento")))) // neste momento estou no /novoInscricaoEvento
		.pause(10)
		.exec(http("Link para nova inscrição")
			.get("/guri/evt/participante/novoInscricaoEvento")
			.headers(headers_0).check(currentLocation.is("https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento")))
		.pause(10)
		.exec(http("Busca termo 'unipampa'")
			.get("/guri/evt/instituicao/getInstituicaoAjax/?term=unipampa")
			.headers(headers_1))
		.pause(10)
		.exec(http("Seleciona nome de universidade")
			.post("/guri/evt/participante/testeInternoAjax/")
			.headers(headers_6))
		.pause(10)
		.exec(http("Sistema verifica se existe login")
			.post("/guri/ptl/sistema/isLogado")
			.headers(headers_1)
			.resources(http("Link para submeter inscrição no evento")
			.post("/guri/evt/participante/salvarInscricaoEvento")
			.headers(headers_8)
			.body(ElFileBody("Teste3_0008_request.txt"))))
			.pause(10)
        .exec(http("Redirecionamento para painel do paarticipante")
			.get("/guri/evt/painel/painelParticipante/")
			.headers(headers_0).check(currentLocation.is("https://guriensino.unipampa.edu.br/guri/evt/painel/painelParticipante/")))
		 
	setUp(scn.inject(rampUsers(5) over (5 seconds))).protocols(httpProtocol)
}