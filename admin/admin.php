<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 09/12/2015
 * Time: 01:25
 */
function admin(){
    echo "Area de Administração<br>";

    if(issetEmaileSenha()) {
        if(auth($_POST['email'],$_POST['senha'])){
        allAlunos();}
        else{
            echo 'Acesso não autorizado';
        }
    }else{
        login();
    }
}

