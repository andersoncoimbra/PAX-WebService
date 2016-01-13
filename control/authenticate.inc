<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 12/12/2015
 * Time: 06:31
 *
 */
/////////////
///Função responsavel por valida se o endereço e senha
///encontran-se na tabela alunos e retonar um valor boleano.
////////////
function auth($email, $senha){
   $sqlUser = "SELECT * FROM alunos WHERE id='".$email."' AND senha='".$senha."'";

    if($request = mysqli_query(abrirConexao(), $sqlUser)){
        $rows = mysqli_num_rows($request);
        if($rows > 0) {
            return true;
        }
        else{
            return false;
        }
    }

}