<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 09/12/2015
 * Time: 02:07
 */

include_once 'consultaAlunos.inc';
include_once 'createTable.php';
include_once 'insetRegistro.inc';
include_once 'authenticate.inc';

function vericaStausInicial(){
/////////////
// CONTROLES
////////////
    if(isset($_GET['id'])){
        dashboard();
    }
    elseif(isset($_GET['cadastro']) || isset($_GET['cadastra']) ) {
        cadastro();
    }
    elseif(isset($_GET['admin'])) {
        admin();
    }else{
        if(issetEmaileSenha()){
            ViewAluno();
        }
        else{
        login();}
    }}