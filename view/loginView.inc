<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 04/12/2015
 * Time: 02:29
 */
///////////////////
// VEREFICA O PARAMETRO DE ACESSO E DEFINE PREVILEGIOS
//////////////////
function login(){
if(isset($_GET['id'])){echo "lOGADO";}else{echo 'Não logado';}}