
import scala.concurrent.duration._

import io.gatling.core.Predef._
import io.gatling.http.Predef._
import io.gatling.jdbc.Predef._

class TesteComSubmissão extends Simulation {

	val httpProtocol = http
		.baseURL("https://guriensino.unipampa.edu.br")
		.inferHtmlResources(BlackList(""".*\.js""", """.*\.css""", """.*\.gif""", """.*\.jpeg""", """.*\.jpg""", """.*\.ico""", """.*\.woff""", """.*\.(t|o)tf""", """.*\.png"""), WhiteList())
		.acceptHeader("*/*")
		.acceptEncodingHeader("gzip, deflate")
		.acceptLanguageHeader("en-US,en;q=0.9,pt-BR;q=0.8,pt;q=0.7")
		.userAgentHeader("Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/67.0.3396.99 Safari/537.36")

	val headers_0 = Map(
		"Accept" -> "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
		"Upgrade-Insecure-Requests" -> "1")

	val headers_1 = Map(
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"X-Requested-With" -> "XMLHttpRequest")

	val headers_2 = Map(
		"Accept" -> "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
		"Content-Type" -> "multipart/form-data; boundary=----WebKitFormBoundaryqOrPhml7MllB8LJh",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"Upgrade-Insecure-Requests" -> "1")

	val headers_6 = Map(
		"Content-Type" -> "application/x-www-form-urlencoded; charset=UTF-8",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"X-Requested-With" -> "XMLHttpRequest")

	val headers_13 = Map(
		"Accept" -> "text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8",
		"Content-Type" -> "multipart/form-data; boundary=----WebKitFormBoundary7XC8nJiDd3n9k28m",
		"Origin" -> "https://guriensino.unipampa.edu.br",
		"Upgrade-Insecure-Requests" -> "1")

    val uri1 = "guriensino.unipampa.edu.br"
    val uri2 = "https://fonts.googleapis.com/css"

    val feeder = csv("teste500completo.csv").queue

	val scn = scenario("Teste Com Submissão de 500 usuários")
		.exec(http("Página do evento")
			.get("/guri/evt/evento/selecionaPerfil/362")
			.headers(headers_0))
		.pause(5)
		.feed(feeder)
		.exec(http("Login")
			.post("/guri/ptl/sistema/isLogado")
			.headers(headers_1)
			.resources(http("Sistema verifica perfil")
			.post("/guri/evt/painel/verificaPerfil/")
			.headers(headers_2)
			.body(ElFileBody("TesteComSubmissão_0002_request.txt")),
            http("Redireciona para o painel de participante após efetuar login")
			.get("/guri/evt/painel/painelParticipante/")
			.headers(headers_0)))
		.pause(5)
		.exec(http("Página de trabalhos")
			.get("/guri/evt/participante/listarTrabalhos/")
			.headers(headers_0))
		.pause(5)
		.exec(http("Link para submissão de trabalho")
			.get("/guri/evt/participante/submeteTrabalho/")
			.headers(headers_0))
		.pause(5)
		.exec(http("Seleção de botão radio idioma")
			.post("/guri/ptl/sistema/setaIdiomaSessionAjax/")
			.headers(headers_6)
			.formParam("idioma", "pt"))
		.pause(5)
		.exec(http("Seleciona categoria")
			.post("/guri/evt/evento/buscarProgramaAjax/")
			.headers(headers_6)
			.formParam("categoria", "1|283")
			.resources(http("Busca modalidade")
			.post("/guri/evt/evento/buscarModalidadeAjax/")
			.headers(headers_6),
            http("Seleciona modalidade")
			.post("/guri/evt/evento/buscarAreaAjax/")
			.headers(headers_6)
			.formParam("modalidade", "6|223"),
            http("Seleciona area")
			.post("/guri/evt/participante/buscarModalidadesResumoExpAjax/")
			.headers(headers_6)
			.formParam("modalidade", "6"),
            http("Seleciona sub-area")
			.post("/guri/evt/participante/buscarAreaInferiorAjaxEdicao/undefined")
			.headers(headers_6)
			.formParam("areaSuperior", "4")))
		.pause(25)
		.exec(http("Verifica login")
			.post("/guri/ptl/sistema/isLogado")
			.headers(headers_1)
			.resources(http("Link para salvar submissão")
			.post("/guri/evt/participante/salvarSubmissao")
			.headers(headers_13)
			.body(ElFileBody("TesteComSubmissão_0013_request.txt")),
            http("Redirecionamento para página de trabalhos")
			.get("/guri/evt/participante/listarTrabalhos")
			.headers(headers_0)))

	setUp(scn.inject(rampUsers(500) over (600 seconds))).protocols(httpProtocol)
}