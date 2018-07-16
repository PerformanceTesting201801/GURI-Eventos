Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");
 
	
	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("showLogin", 
		"URL=https://guriensino.unipampa.edu.br/guri/ptl/sistema/showLogin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/novo_user.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/lock.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		LAST);


	web_url("listarEdicoesAtivas", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/evento/listarEdicoesAtivas/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/ptl/sistema/showLogin", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(6);

	web_link("SIEPE_Teste - SIEPE_Teste by Dionatã", 
		"Text=SIEPE_Teste - SIEPE_Teste by Dionatã", 
		"Snapshot=t25.inf", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_eeeeee_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_dots-small_65_bcbdbc_2x2.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_f6f6f6_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);


	web_add_auto_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("isLogado", 
		"URL=https://guriensino.unipampa.edu.br/guri/ptl/sistema/isLogado", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/evento/selecionaPerfil/362", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");  

	web_submit_data("verificaPerfil",
		"Action=https://guriensino.unipampa.edu.br/guri/evt/painel/verificaPerfil/",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/evento/selecionaPerfil/362",
		"Snapshot=t28.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=txtEventoSel", "Value=SIEPE_Teste / SIEPE_Teste by Dionatã", ENDITEM,
		"Name=txtPerfil", "Value=par", ENDITEM,
		"Name=txtEmail", "Value={Email}", ENDITEM,
		"Name=txtSenha", "Value=123456", ENDITEM,
		LAST);  

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("painelParticipante", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/painel/painelParticipante/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/evento/selecionaPerfil/362", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_f6f6f6_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_eeeeee_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_dots-small_65_bcbdbc_2x2.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	

	web_url("getInstituicaoAjax", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/instituicao/getInstituicaoAjax/?term=uni", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("getInstituicaoAjax_2", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/instituicao/getInstituicaoAjax/?term=unipampa", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_submit_data("testeInternoAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/testeInternoAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=modalidade", "Value=424", ENDITEM, 
		LAST);

	web_custom_request("isLogado_2", 
		"URL=https://guriensino.unipampa.edu.br/guri/ptl/sistema/isLogado", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("salvarInscricaoEvento",
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/salvarInscricaoEvento",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento",
		"Snapshot=t36.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=txtId", "Value=", ENDITEM,
		"Name=txtNomeInstituicao", "Value=Universidade Federal do Pampa", ENDITEM,
		"Name=txtIdInstituicao", "Value=1", ENDITEM,
		"Name=txtModalidade", "Value=424", ENDITEM,
		"Name=txtDepartamento", "Value=", ENDITEM,
		"Name=txtCurso", "Value=", ENDITEM,
		"Name=txtCampus", "Value=CAMPUS ALEGRETE", ENDITEM,
		"Name=txtQual", "Value=Aluno de graduação", ENDITEM,
		"Name=txtExigeInterprete", "Value=N", ENDITEM,
		"Name=txtNormas", "Value=on", ENDITEM,
		"Name=idParticipante", "Value={Codigo}", ENDITEM,
		"Name=idEventoEdicao", "Value=362", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("painelParticipante_2", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/painel/painelParticipante/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/novoInscricaoEvento", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);


	web_url("listarTrabalhos", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/listarTrabalhos/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/painel/painelParticipante/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("submeteTrabalho", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/listarTrabalhos/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/idioma_bra_24.png", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/idioma_esp_24.png", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_dots-small_65_bcbdbc_2x2.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_eeeeee_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_f6f6f6_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("setaIdiomaSessionAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/ptl/sistema/setaIdiomaSessionAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=idioma", "Value=pt", ENDITEM, 
		LAST);

	lr_think_time(5);

	web_submit_data("buscarModalidadeAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/evento/buscarModalidadeAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=categoria", "Value=1|283", ENDITEM, 
		LAST);

	web_submit_data("buscarProgramaAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/evento/buscarProgramaAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=categoria", "Value=1|283", ENDITEM, 
		LAST);

	web_submit_data("buscarAreaAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/evento/buscarAreaAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=modalidade", "Value=6|223", ENDITEM, 
		LAST);

	web_submit_data("buscarModalidadesResumoExpAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/buscarModalidadesResumoExpAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=modalidade", "Value=6", ENDITEM, 
		LAST);

	web_submit_data("undefined", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/buscarAreaInferiorAjaxEdicao/undefined", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=areaSuperior", "Value=4", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(108);

	web_custom_request("pesquisaOrientador", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/pesquisaOrientador/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

	web_submit_data("resultadoPesquisaOrientador", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/resultadoPesquisaOrientador/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=nome", "Value=maicon", ENDITEM, 
		LAST);

	lr_think_time(40);

	web_custom_request("isLogado_3", 
		"URL=https://guriensino.unipampa.edu.br/guri/ptl/sistema/isLogado", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("salvarSubmissao",
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/salvarSubmissao",
		"Method=POST",
		"EncType=multipart/form-data",
		"RecContentType=text/html",
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/",
		"Snapshot=t52.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=txtId", "Value=", ENDITEM,
		"Name=txtAutor1", "Value={Nome}", ENDITEM,
		"Name=txtCategoria", "Value=1|283", ENDITEM,
		"Name=txtModalidade", "Value=6|223", ENDITEM,
		"Name=txtIdAreaSup", "Value=4", ENDITEM,
		"Name=txtIdArea", "Value=15", ENDITEM,
		"Name=txtIdPrograma", "Value=", ENDITEM,
		"Name=txtNumProjeto", "Value=123456789", ENDITEM,
		"Name=flParecer", "Value=N", ENDITEM,
		"Name=nrParecer", "Value=", ENDITEM,
		"Name=txtTitulo", "Value=POG XGH", ENDITEM,
		"Name=w_count_titulo", "Value=2", ENDITEM,
		"Name=txtPalavras", "Value=testemau denovo", ENDITEM,
		"Name=txtResumo", "Value=testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora ", ENDITEM,
		"Name=txtContadorValue", "Value=6235", ENDITEM,
		"Name=w_count", "Value=102", ENDITEM,
		"Name=txtEtapa", "Value=1", ENDITEM,
		"Name=txtArquivo[]", "Value=MauricioEscobar-ResumodapalestraPlets.pdf", "File=yes", ENDITEM,
		"Name=txtResExpandido[]", "Value=", "File=yes", ENDITEM,
		"Name=txtServidor", "Value=S", ENDITEM,
		"Name=txtNome1", "Value=Maicon Bernardino Da Silveira", ENDITEM,
		"Name=txtEmail1", "Value=maiconbernardino@unipampa.edu.br", ENDITEM,
		"Name=txtTitulo1", "Value=Docente", ENDITEM,
		"Name=txtNome2", "Value={Nome}", ENDITEM,
		"Name=txtCpf", "Value={CPF}", ENDITEM,
		"Name=txtEmail2", "Value={Email}", ENDITEM,
		"Name=txtTitulo2", "Value=Aluno de graduação", ENDITEM,
		"Name=txtNormas", "Value=on", ENDITEM,
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Upgrade-Insecure-Requests",
		"1");

	web_url("listarTrabalhos_2", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/listarTrabalhos", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	return 0;
}