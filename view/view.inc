<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 04/12/2015
 * Time: 02:28
 */
include "loginView.inc";
include "layout.inc";
include "telaDeCadastro.inc";
include 'dashboard.inc';


function vericaStausInicial(){

if(isset($_GET['id'])){
    dashboard();
}
elseif(isset($_GET['cadastro']) || isset($_GET['cadastra']) ) {
    cadastro();
}else{
    login();
}}