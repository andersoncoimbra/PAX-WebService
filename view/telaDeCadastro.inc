<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 04/12/2015
 * Time: 23:46
 */
include "model/model.inc";
include "control/insetRegistro.inc";
function cadastro(){

if(isset($_GET['cadastro'])) {
?>
<form method="get" action="?cadastra">
    <label for="nome">Nome </label><input type="text" name="cadNome"><br>
    <label for="email">E-mail</label><input type="text" name="cadEmail"><br>
    <label for="senha">Senha </label><input type="text" name="cadSenha"><br>
    <label for="repitir">Repitir Senha </label><input type="text" name="cadRepiti"><br>
    <input type="submit" value="Cadastrar" name="cadastra">
</form>

<?php
}
    if (isset($_GET['cadastra']) && @$_GET['cadastra'] == 'Cadastrar'){
        $query = new query();
        $query->cadastrarAluno($_GET['cadNome'],$_GET['cadEmail'],$_GET['cadSenha']);

    }
}
?>