Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t2.inf", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("showLogin", 
		"URL=https://guriensino.unipampa.edu.br/guri/ptl/sistema/showLogin", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/lock.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/novo_user.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=66", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("SID=AAbgfalmIv2F9oL-WrM_OIBdGqzkoHB-uFkTVbv2Fh1y05FH3-W-1dTe9tRWMLX5wplgHA.; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=Adivmafu6QE9kjJXP; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=A1mHUq9yh-s2A-va2; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=lXrSVif8FgGGmZUR/AOKMY9oM3gbvPVhhw; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=ziTGrh3nimdpTNII/Aek96XtLLnIJ09Q-t; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI7jm5SynWlDtgahhmkPAP1itaehfX9-W7ueUjLUw0hFpR70QNEK2bcwdMWTxoeUYc9nP9JXldLhA6YzwIz6LEbchrDQ6V8NFzxDn8DYnLP9Xc34I4uXTdjoHMQA3VQ-SXfC90JLiXNSvwWbnWkKxjouLMwcUA; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=doritos|lso|mail|o.mail.google.com|o.myaccount.google.com|o.notifications.google.com|o.smartlock.google.com|s.BR|s.blogger|s.youtube|ss|youtube:AAbgfajeAtUJvYFqk-IZpzvu9-sh_a3IYn3VWAG7vMAmD1ERxftxR0Bh3vm6ahUUDCD1Gg.; DOMAIN=accounts.google.com");

	web_add_cookie("OGP=-19005936:; DOMAIN=accounts.google.com");

	web_add_cookie("OGPC=19005936-1:19006965-1:19007018-1:; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:7s92gCrnHqbDeuvRKZ2QVZohhPGcQ9gltfo8o4uv9bLUsXbxB3ciAwWZnnQOESQBpJK2LWNy4hV-2uleWHDLh-yA0ebPKQ:YpEN-UFTATCOfnJx; DOMAIN=accounts.google.com");

	web_add_cookie("NID=134=ZyaOVdJhholZxrueUXUD6cTEDgjk9ljqZYBM_doqaqbfrY69f6mGV6sZK3L4DDNyX4c9HGmPa-4B9wRaGKoPR36RFuaCqmD64u86IvH-24IJpqmeIj_cIR6AU3imaDJxgqXY85K6govzFXjQHV62NNWemOrXROHFlIvcqluWVAegLuvuaGmR0raj6DhnHp9UTPLuVaxmqIzg3mOfpXuBzxeV8FflyvLEyTFtmKk7umwjhOmr1BtZOGLZz7nM-mYhh4j5EBOuCrE; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2018-7-13-18; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AEfoLeaHRBsa9VDaakj5yGiCGmF5HUTVfCVfiezzskfB4vqGCZUSkCNJTk0hch2GV_5dIUjcQUJy; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumAccountReconcilor,counter:0,load_time_ms:822&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_cookie("OpenIdConnect.nonce.webapp.PgLcLa7Wbh6tamGxQeCQ2wSMiyyy%2Fh2sOyS2niXuKKo%3D=eEZQY1QyaThFa3Iyc3plY09aN251NVh5N1ZCaW56X0JWbDB0UlpmYmxZaE5TUG9yMmxsN1NSVWhvVnNSTzZnR25IUTZZLWp3SUxLLS1hWmcxQ2pXaGVqMklLSm56SHVPUEdtbERWeUVrRzJPM2M4Q2tiOFRNNko5X29ZZVNPTmk5WkQyWXNNM1RQb05GNGJhTkc3cEtrQmYzMmNRY2lONkxHb3o1UmFQWE1jVGZsbm5zSkVlYUh0NWRfa01vYThjbktZd0ZpcUZHLTNmWkRtYkF4VHVqM09lZE1PODZpSHdaTDU5Z0JjalZFWQ%3D%3D; DOMAIN=app.tmetric.com");

	web_add_cookie("OpenIdConnect.nonce.webapp.3%2FmEn27NvX%2BBT7kbjEeZ6S0rhguNMY4%2FSopYIwWf8k8%3D=MFVxVVBfTGxQM0dlMS1GcHhMNEhMVGViUExUMHR0VVlFQ3pYbk1QMFQ1QzNYcmY2bExUSnRDYjlXWXZid1JzUklPOXU1TU5jNGk5dGdnakRnNXAwOE8xUWlHM0dlY29kc3NESl9TX1dCN1hYSmttMWRXNllabV91TWdnWFd0OXJWNThCQ0pkcXF0QUtiSS12SmdGdk5UUmJ0MUliYmtZaG54OXBtZTQ5WFowcVE5bUJSVDh5UTh4ZzFUcUJEQ0xuc1JEWnNvODQtR19pUjA5a3hSQTJVaFJIeERRZGpEcmNrcHJNUlJDVC1rQQ%3D%3D; DOMAIN=app.tmetric.com");

	web_add_cookie("OpenIdConnect.nonce.webapp.lNAnks0St1r8O8qI8xC47ocPE8ugOBBA%2FW%2FqKuMA8Jc%3D=UWFqUE9Kd0lKV05XNWctcFhKYjlQNGNvcWVQNVVYN3V2eGZQQWlYWkRkRkQ3SndJekUwcTBhcWVkLTdlQ1dLLUU2RFZ4bXdhTHZXZ3dtSjY2LUlKaDlkbTNLSnhyeGRoSUVaUVlIUVdYdXljSS1EMG1TUGY5S1VNQV8xbVpsazlYek54cU11V2syQ3I4TnJJS2lFOXNZMTVZR19hVXZ4UFhRNThWbzM5UGRFWUZDb2g1eEdTUUJMYzhCZEdncDduakdROGJmOGotX3R0S0Z6VGJ2WDlESFRXWTVQMUpQc3FGazZQQk56SUpRUQ%3D%3D; DOMAIN=app.tmetric.com");

	web_url("version", 
		"URL=https://app.tmetric.com/api/version", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=pt&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("erp.contrast=0; DOMAIN=guriensino.unipampa.edu.br");

	web_url("version_2", 
		"URL=https://app.tmetric.com/api/version", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://guriensino.unipampa.edu.br/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	web_custom_request("query", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xAD*\\x89\\x9F\\xCD\\xAF\\xAA\\xED#-\\xF3m\\x95Y$#-(K-\\x89$#-\\x9Ed\\x90M$#-\\xFF\\x03\\x14\\xB9$\\x14", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(14);

	web_url("listarEdicoesAtivas", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/evento/listarEdicoesAtivas", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/ptl/sistema/showLogin", 
		"Snapshot=t10.inf", 
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

	lr_think_time(20);

	web_link("SIEPE_Teste - SIEPE_Teste by Dionatã", 
		"Text=SIEPE_Teste - SIEPE_Teste by Dionatã", 
		"Snapshot=t11.inf", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_eeeeee_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_dots-small_65_bcbdbc_2x2.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-hard_100_f6f6f6_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		LAST);

	web_custom_request("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19_TV\\xE2\\x03\\x13\\xEF|#-\\xA8\\xF1$~$#-\\xAB\\xF5\\x0C\\x8D$#-3\\x05c\\xFE$#-\\xFB\\xF9\\x18\\x1B$#-\\xF7\\x9Cs\\x1A$\\x14", 
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
		"Snapshot=t13.inf", 
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
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=txtEventoSel", "Value=SIEPE_Teste / SIEPE_Teste by Dionatã", ENDITEM, 
		"Name=txtPerfil", "Value=par", ENDITEM, 
		"Name=txtEmail", "Value=mauriciosescobar@gmail.com", ENDITEM, 
		"Name=txtSenha", "Value=123456", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("painelParticipante", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/painel/painelParticipante/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/evento/selecionaPerfil/362", 
		"Snapshot=t15.inf", 
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

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(24);

	web_link("Submeter meus Trabalhos", 
		"Text=Submeter meus Trabalhos", 
		"Snapshot=t16.inf", 
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

	web_url("submeteTrabalho", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/listarTrabalhos/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/idioma_esp_24.png", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/idioma_bra_24.png", ENDITEM, 
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
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=idioma", "Value=pt", ENDITEM, 
		LAST);

	web_submit_data("buscarModalidadeAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/evento/buscarModalidadeAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=categoria", "Value=1|283", ENDITEM, 
		LAST);

	web_submit_data("buscarProgramaAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/evento/buscarProgramaAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=categoria", "Value=1|283", ENDITEM, 
		LAST);

	web_submit_data("buscarAreaAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/evento/buscarAreaAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=modalidade", "Value=6|223", ENDITEM, 
		LAST);

	web_submit_data("buscarModalidadesResumoExpAjax", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/buscarModalidadesResumoExpAjax/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=modalidade", "Value=6", ENDITEM, 
		LAST);

	web_submit_data("undefined", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/buscarAreaInferiorAjaxEdicao/undefined", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=areaSuperior", "Value=4", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("pesquisaOrientador", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/pesquisaOrientador/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	lr_think_time(4);

	web_submit_data("resultadoPesquisaOrientador", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/resultadoPesquisaOrientador/", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=nome", "Value=maicon", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://guriensino.unipampa.edu.br");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(16);

	web_custom_request("isLogado_2", 
		"URL=https://guriensino.unipampa.edu.br/guri/ptl/sistema/isLogado", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("salvarSubmissao", 
		"Action=https://guriensino.unipampa.edu.br/guri/evt/participante/salvarSubmissao", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=txtId", "Value=", ENDITEM, 
		"Name=txtAutor1", "Value=Mauricio Escobar", ENDITEM, 
		"Name=txtCategoria", "Value=1|283", ENDITEM, 
		"Name=txtModalidade", "Value=6|223", ENDITEM, 
		"Name=txtIdAreaSup", "Value=4", ENDITEM, 
		"Name=txtIdArea", "Value=15", ENDITEM, 
		"Name=txtIdPrograma", "Value=", ENDITEM, 
		"Name=txtNumProjeto", "Value=123456789", ENDITEM, 
		"Name=flParecer", "Value=S", ENDITEM, 
		"Name=nrParecer", "Value=123456789", ENDITEM, 
		"Name=txtTitulo", "Value=TESTE TESTE TESTE TESTE TESTE TESTE", ENDITEM, 
		"Name=w_count_titulo", "Value=6", ENDITEM, 
		"Name=txtPalavras", "Value=TESTE TESTE TESTE TESTE TESTE TESTE", ENDITEM, 
		"Name=txtResumo", "Value=teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste "
		"teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste teste ", ENDITEM, 
		"Name=txtContadorValue", "Value=6370", ENDITEM, 
		"Name=w_count", "Value=105", ENDITEM, 
		"Name=txtEtapa", "Value=1", ENDITEM, 
		"Name=txtArquivo[]", "Value=MauricioEscobar-ResumodapalestraPlets.pdf", "File=Yes", ENDITEM, 
		"Name=txtResExpandido[]", "Value=", "File=Yes", ENDITEM, 
		"Name=txtServidor", "Value=S", ENDITEM, 
		"Name=txtNome1", "Value=Maicon Bernardino Da Silveira", ENDITEM, 
		"Name=txtEmail1", "Value=maiconbernardino@unipampa.edu.br", ENDITEM, 
		"Name=txtTitulo1", "Value=Docente", ENDITEM, 
		"Name=txtNome2", "Value=Mauricio Escobar", ENDITEM, 
		"Name=txtCpf", "Value=009.182.750-75", ENDITEM, 
		"Name=txtEmail2", "Value=mauriciosescobar@gmail.com", ENDITEM, 
		"Name=txtTitulo2", "Value=Aluno de graduação", ENDITEM, 
		"Name=txtNormas", "Value=on", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("listarTrabalhos", 
		"URL=https://guriensino.unipampa.edu.br/guri/evt/participante/listarTrabalhos", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://guriensino.unipampa.edu.br/guri/evt/participante/submeteTrabalho/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/guri/public/themes/moder//imgs/marcador-lista.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/busca.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_menu.css", ENDITEM, 
		"Url=/guri/public/themes/moder//imgs/diagonals_3.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/themes/moder//css/estilo_admin.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_flat_75_ffffff_40x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-bg_highlight-soft_15_5f8168_1x100.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_ffffff_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=/guri/public/js/jquery-ui-1.9.0/css/custom-theme/images/ui-icons_cc0000_256x240.png", "Referer=https://guriensino.unipampa.edu.br/guri/public/js/jquery-ui-1.9.0/css/custom-theme/jquery-ui-1.8.18.custom.css", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNjYuMC4zMzU5LjEzORonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAIaAhgM7WpDXCIEIAEgAigGGicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAy9xswJIgQgASACKAMaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAKGgIYDLO5K0UiBCABIAIoARopCAUQARobCg0IBRAGGAEiAzAwMTABEOHYBBoCGAzaRtXbIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDAvAQaAhgMQ1sJpCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQtAMaAhgMVjx7jSIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQ78cEGgIYDIPt4B8iBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEMHDAxoCGAzOpVdeIgQgASACKAEaKAgBEAgaGg"
		"oNCAEQCBgBIgMwMDEwBBCFEhoCGAyUcNwMIgQgASACKAQaJwgKEAgaGQoNCAoQCBgBIgMwMDEwARAFGgIYDDLK3j8iBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEIYQGgIYDGLsADQiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	return 0;
}