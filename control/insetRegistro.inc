<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 05/12/2015
 * Time: 20:34
 */

function cadastrarAluno($nome, $email, $senha){
    $query = "INSERT INTO alunos VALUES (NULL, '$nome','$email','$senha')";


}