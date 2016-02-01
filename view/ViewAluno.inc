<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 31/01/2016
 * Time: 23:01
 */

function ViewAluno(){
    if(auth($_POST['email'], $_POST['senha'])) {
        echo "Tela do aluno <br>";
        echo 'Email : ' . $_POST['email'];
        echo '<br> Senha : ' . $_POST['senha'];
    }else{
        echo 'Acesso negado';
    }
}