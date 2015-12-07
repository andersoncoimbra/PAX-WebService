<?php
define('HOST','localhost');
define('USER','root');
define('DB','pax');
define('PASS','');



$CONECT = mysqli_connect(HOST, USER, PASS, DB);
  //  mysqli_select_db($CONECT);
if(!$CONECT){
 echo"Could not connect: ".mysqli_error();
    echo "Error: Unable to connect to MySQL." . PHP_EOL;
    echo "Debugging errno: " . mysqli_connect_errno() . PHP_EOL;
    echo "Debugging error: " . mysqli_connect_error() . PHP_EOL;
}




///////////////////
//// STATUS DA CONEXÃO SETADO NA CONSTANTE STATUSCONEX
//////////////////
//if($CONECT){define('STATUSCONEX','Conectado Com sucesso');}else{define('STATUSCONEX','Não Conectado Com sucesso');}





