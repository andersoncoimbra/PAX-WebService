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
    printf('
<form method="post">
    <input type="email" placeholder="Digite seu E-mail" required name="email"/><br>
    <input type="password" placeholder="Sua Senha" name="senha"/><br>
    <input  type="submit" value="Logar"/><br>
    <p> <a href="?cadastro" >Ainda não sou cadastrado</a></p>
    </form>
    ');

}