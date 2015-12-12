<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 09/12/2015
 * Time: 01:25
 */
function admin(){
    echo "Area de Administração";

    if(auth($_GET['admin'])) {
        allAlunos();
    }
}

