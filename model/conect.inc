<?php
define('HOST','localhost');
define('USER','root');
define('DB','pax');
define('PASS','');


/*
$CONECT = mysqli_connect(HOST, USER, PASS, DB);
  //  mysqli_select_db($CONECT);
$STRING = "Teste de variavel dentro de conect.inc";
if(!$CONECT){
 echo"Could not connect: ".mysqli_error();
    echo "Error: Unable to connect to MySQL." . PHP_EOL;
    echo "Debugging errno: " . mysqli_connect_errno() . PHP_EOL;
    echo "Debugging error: " . mysqli_connect_error() . PHP_EOL;
}*/
//////////////////////
/// Abrir conex�o com o banco de dados maysql
/////////////////////
function abrirConexao(){

    $com = new mysqli(HOST, USER, PASS, DB);
    if(!$com) {
        echo "Error: Unable to connect to MySQL." . PHP_EOL;
        echo "Debugging errno: " . mysqli_connect_errno() . PHP_EOL;
        echo "Debugging error: " . mysqli_connect_error() . PHP_EOL;

        exit;
    }
    return $com;
}
//////////////////////
/// Fecha conex�o com o banco de dados maysql
/////////////////////
function fechaConexao($conexao)
{
    if($conexao){
    mysqli_close($conexao);}
}

///////////////////
//// STATUS DA CONEX�O SETADO NA CONSTANTE STATUSCONEX
//////////////////
//if($CONECT){define('STATUSCONEX','Conectado Com sucesso');}else{define('STATUSCONEX','N�o Conectado Com sucesso');}





