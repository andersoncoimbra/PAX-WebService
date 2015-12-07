<?php
define('HOST','localhost');
define('USER','root');
define('DB','pax');
define('PASS','');



$CONECT = mysqli_connect(HOST, USER, PASS, DB);
   // mysqli_select_db($CONECT);


///////////////////
//// STATUS DA CONEXÃO SETADO NA CONSTANTE STATUSCONEX
//////////////////
if($CONECT){define('STATUSCONEX','Conectado Com sucesso');}else{define('STATUSCONEX','Não Conectado Com sucesso');}


