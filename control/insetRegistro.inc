<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 05/12/2015
 * Time: 20:34
 */
require_once "model/model.inc";


function cadastrarAluno($nome, $email, $senha){
    $query = "INSERT INTO alunos VALUES (NULL, '$nome','','$email','$senha')";
    $com = new mysqli('localhost', 'root', '', 'pax');
    if(!$com) {
        echo "Error: Unable to connect to MySQL." . PHP_EOL;
        echo "Debugging errno: " . mysqli_connect_errno() . PHP_EOL;
        echo "Debugging error: " . mysqli_connect_error() . PHP_EOL;
    }
    $link = mysqli_query($com, $query);

    var_dump($link);

if(mysqli_affected_rows($com) == 1){     echo 'cadastrado com sucesso';}
    //echo STATUSCONEX;

    mysqli_close($com);
}