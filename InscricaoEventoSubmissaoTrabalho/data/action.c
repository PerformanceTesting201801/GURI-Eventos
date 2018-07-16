Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t15.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t16.inf", 
		LAST);

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=pt&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("OpenIdConnect.nonce.webapp.5sYWEfC2nm39pl5Xsp9PkX2eoMZQSTscuLCX%2BIuebgo%3D=MGJWLWlDcXVMcWthT1dhbjRMWXdOdGtnUExna1FGNzJDbGZhbzJMQlQ1Z2hEeDdhVEh3MmZVTnI0dGdnZUJoUm5yZDlhV05PVndyekR6QXNqTWU3ZDBVeE5rUk85MGd4WlRuejFVa1pRR3Y1WHZpMkdXcmJ1YW9nblhMZUlxeDUxY05IRk4tOE1QQk9QZGFKSjNwSFM0VXltRkUzMWxLYWduNk1kSWJodzBCaUlhT2pvUkhiRFd3aUsyWEdfbGdLZnlXSk41VTBGbnNxWHdqbmE5R2hPYUwzVDVTTkJmdExPYl9wRTNiazN1WQ%3D%3D; DOMAIN=app.tmetric.com");

	web_url("version", 
		"URL=https://app.tmetric.com/api/version", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

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

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=66", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_url("version_2", 
		"URL=https://app.tmetric.com/api/version", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
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

	web_add_cookie("GAPS=1:sBRrFacqlZeGoXN9vLRGczdEAxSLApVZ-js-59SBnt66AkiN54nRKZutekMrWAkh0JmdCG0CjRFbwEYzcLiCB7cK-FF0GA:WCT96g1CSSq1G4od; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2018-7-14-21; DOMAIN=accounts.google.com");

	web_add_cookie("NID=134=ix7W63Hkg2nTG5MEzhks2boUs2pi3-ZS2lr7jMIyKk1TU1FPlp3JD3jPZJ6Kte5iWCXpE4uOIeH9AAYvoVsFhOyVSy9yL5YUA5t_w1wDKMkcI0dBZ-DClG-YpiaEa_6Kb5Be-pUNdJOmc4S_wei8U-mD_xQ9_uB0_1nfv3oMRtsmh27ARCkC0QI236kjnR_NXzAXI5Ef4T_qphzR8Kw_UEWmeGS7rr_h_1NfLNqKI8g4jtmgvBTtXnaxpUiYAhEjAZu6Xa1uniI; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AEfoLebv-xLu0Q-uO_5AcRB7VJmI_PuPnmfDg2V94lsf0yZHxZYNm_rSfkr91zs-S0Z4kxKDAVd4; DOMAIN=accounts.google.com");

	web_add_cookie("erp.contrast=0; DOMAIN=guriensino.unipampa.edu.br");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumAccountReconcilor,counter:0,load_time_ms:640&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"Body= ", 
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
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xAD*\\x89\\x9F\\xCD\\xAF\\xAA\\xED#-\\xF3m\\x95Y$#-(K-\\x89$#-\\x9Ed\\x90M$#-\\xFF\\x03\\x14\\xB9$\\x14", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(5);

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

	web_custom_request("query_2", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t26.inf", 
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
		"Name=txtEmail", "Value=arolla@terra.com.br", ENDITEM, 
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

	web_custom_request("query_3", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xBE\\x93Jz\\x9F\\x1C\\x94\\xFC#-\\xAB\\xF5\\x0C\\x8D$#-3\\x05c\\xFE$#-\\xFB\\xF9\\x18\\x1B$#-\\xF7\\x9Cs\\x1A$\\x14", 
		LAST);

	web_custom_request("query_4", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xB7*\\xCC\\x8E\\xEF\\xD1\\x19t#-\\xA8\\xF1$~$#-\\xC9\\x81\\x96+$#-\r\\xBD\\xA1\\xFB$#-\\x87S \\xC2$#-\\x81\\xFB6\\xD9$#-\\x9C\\x91w\\x94$#-\\xB3\t\\x9A\\xB2$#-\\x8B|\\x15\t$\\x14", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(5);

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
		"Name=idParticipante", "Value=14852", ENDITEM, 
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

	web_custom_request("query_5", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19#\\xEB\\xF13h\\xAD\\x0E\\xDC#-\\xC9\\x81\\x96+$#-\r\\xBD\\xA1\\xFB$#-\\x87S \\xC2$#-\\x81\\xFB6\\xD9$#-\\x9C\\x91w\\x94$#-\\xB3\t\\x9A\\xB2$#-\\x8B|\\x15\t$\\x14", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(8);

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

	web_custom_request("query_6", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\xC0\\xC8\\xD7\\xF5+\\xC023#-\\xA8\\xF1$~$#-\\xBA5\\xBC\\xF9$#-\\xD3\\x9B\"\\xF7$#-L\\x00@\\x97$#-\r\\xBD\\xA1\\xFB$#-#S\\xA1\\x85$#-!\\xD7@\\x1B$#-S\\xD3\\xEC\\x83$#-\\xE8\\xFF\\\\xD6$#-x@\\x10Z$#-Oc\\xFE\\xC3$#-\\xA6@7\\x9F$#-\\x8E=\\xCA\\xFF$#-\\x8EoSK$#-E\\x05HS$#-\\xE0A8s$#-\\xDBW\\xAD4$#-\\x0B\\xCBd\\x90$#-7\\x97~\\x1B$#-\\x99\\x0E\\xB1O$#-\\x8F:\\xBF\\x11$#-\\x8D!/\\xD7$#-\\x90w#\\x98$#-\\x18P\\xC4\\xCC$\\x14", 
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

	web_custom_request("query_7", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\x02QQ~\\x9Fr\\xE9\\xC7#-\\xA8\\xF1$~$#-\\xBA5\\xBC\\xF9$#-\\xD3\\x9B\"\\xF7$#-L\\x00@\\x97$#-\r\\xBD\\xA1\\xFB$#-#S\\xA1\\x85$#-!\\xD7@\\x1B$#-S\\xD3\\xEC\\x83$#-\\xE8\\xFF\\\\xD6$#-x@\\x10Z$#-Oc\\xFE\\xC3$#-\\xA6@7\\x9F$#-\\x8E=\\xCA\\xFF$#-\\x8EoSK$#-E\\x05HS$#-\\xE0A8s$#-\\xDBW\\xAD4$#-\\x0B\\xCBd\\x90$#-7\\x97~\\x1B$#-\\x99\\x0E\\xB1O$#-\\x8F:\\xBF\\x11$#-\\x8D!/\\xD7$#-\\x90w#\\x98$#-\\x18P\\xC4\\xCC$#-Ac}L$\\x14", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINNjYuMC4zMzU5LjEzORonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAIaAhgM7WpDXCIEIAEgAigGGicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAy9xswJIgQgASACKAMaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAKGgIYDLO5K0UiBCABIAIoARopCAUQARobCg0IBRAGGAEiAzAwMTABEK_aBBoCGAwl-mkRIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARCIvgQaAhgM0KsNsCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQtgMaAhgM0ZNE9SIEIAEgAigBGikIARABGhsKDQgBEAYYASIDMDAxMAEQrckEGgIYDDklv_oiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEI3FAxoCGAykJNPbIgQgASACKAEaKAgBEAgaGg"
		"oNCAEQCBgBIgMwMDEwBBCREhoCGAyXTt5NIgQgASACKAQaJwgKEAgaGQoNCAoQCBgBIgMwMDEwARAFGgIYDDLK3j8iBCABIAIoARooCA0QARoaCg0IDRAGGAEiAzAwMTABEI0QGgIYDNjU900iBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
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
		"Name=txtAutor1", "Value= Angela da Rocha Rolla", ENDITEM, 
		"Name=txtCategoria", "Value=1|283", ENDITEM, 
		"Name=txtModalidade", "Value=6|223", ENDITEM, 
		"Name=txtIdAreaSup", "Value=4", ENDITEM, 
		"Name=txtIdArea", "Value=15", ENDITEM, 
		"Name=txtIdPrograma", "Value=", ENDITEM, 
		"Name=txtNumProjeto", "Value=123456789", ENDITEM, 
		"Name=flParecer", "Value=N", ENDITEM, 
		"Name=nrParecer", "Value=", ENDITEM, 
		"Name=txtTitulo", "Value=TESTEMAU AGORA", ENDITEM, 
		"Name=w_count_titulo", "Value=2", ENDITEM, 
		"Name=txtPalavras", "Value=testemau agora", ENDITEM, 
		"Name=txtResumo", "Value=testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau "
		"agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora testemau agora ", ENDITEM, 
		"Name=txtContadorValue", "Value=6235", ENDITEM, 
		"Name=w_count", "Value=102", ENDITEM, 
		"Name=txtEtapa", "Value=1", ENDITEM, 
		"Name=txtArquivo[]", "Value=MauricioEscobar-ResumodapalestraPlets.pdf", "File=Yes", ENDITEM, 
		"Name=txtResExpandido[]", "Value=", "File=Yes", ENDITEM, 
		"Name=txtServidor", "Value=S", ENDITEM, 
		"Name=txtNome1", "Value=Maicon Bernardino Da Silveira", ENDITEM, 
		"Name=txtEmail1", "Value=maiconbernardino@unipampa.edu.br", ENDITEM, 
		"Name=txtTitulo1", "Value=Docente", ENDITEM, 
		"Name=txtNome2", "Value= Angela da Rocha Rolla", ENDITEM, 
		"Name=txtCpf", "Value=192.340.230-72", ENDITEM, 
		"Name=txtEmail2", "Value=arolla@terra.com.br", ENDITEM, 
		"Name=txtTitulo2", "Value=Aluno de graduação", ENDITEM, 
		"Name=txtNormas", "Value=on", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_custom_request("query_8", 
		"URL=https://clients1.google.com/tbproxy/af/query?client=Google%20Chrome", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/proto", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		"EncType=text/proto", 
		"BodyBinary=\n\\x176.1.1715.1442/en (GGLL)\\x13\\x19\\x14\\x16E\\xADR/Al#-\\xBA5\\xBC\\xF9$#-\\xD3\\x9B\"\\xF7$#-L\\x00@\\x97$#-\r\\xBD\\xA1\\xFB$#-#S\\xA1\\x85$#-!\\xD7@\\x1B$#-S\\xD3\\xEC\\x83$#-\\xE8\\xFF\\\\xD6$#-x@\\x10Z$#-Oc\\xFE\\xC3$#-\\xA6@7\\x9F$#-\\x8E=\\xCA\\xFF$#-\\x8EoSK$#-E\\x05HS$#-\\xE0A8s$#-\\xDBW\\xAD4$#-\\x0B\\xCBd\\x90$#-7\\x97~\\x1B$#-\\x99\\x0E\\xB1O$#-\\x8F:\\xBF\\x11$#-\\x8D!/\\xD7$#-\\x90w#\\x98$#-\\x18P\\xC4\\xCC$\\x14", 
		LAST);

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