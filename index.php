<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 03/12/2015
 * Time: 22:59
 */
include_once "model/model.inc";
include_once "view/view.inc";

headertype();
vericaStausInicial();
footer();

$CONECT = mysqli_connect(HOST, USER, PASS, DB);
//  mysqli_select_db($CONECT);
if(!$CONECT){
    echo"Could not connect: ".mysqli_error();
    echo "Error: Unable to connect to MySQL." . PHP_EOL;
    echo "Debugging errno: " . mysqli_connect_errno() . PHP_EOL;
    echo "Debugging error: " . mysqli_connect_error() . PHP_EOL;
}

