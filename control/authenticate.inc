<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 12/12/2015
 * Time: 06:31
 *
 */
/////////////
///Funчуo responsavel por valida se o endereчo e senha
///encontran-se na tabela alunos e retonar um valor boleano.
////////////
function auth($email, $senha){
   $sqlUser = "SELECT * FROM 'alunos' WHERE id='$email' AND senha='$senha'";
    $cox = abrirConexao();

    if($request = mysqli_query($cox, $sqlUser)){
        $rows = mysqli_num_rows($request);
        if($rows == 0) {
            return true;
        }
        else{
            return false;
        }
        if (mysqli_connect_errno())
        {
            echo "falha ao carrega o MySQL: " . mysqli_connect_error();
        }

    }
    fechaConexao($cox);

}

function issetEmaileSenha(){
    if(isset($_POST['email']) && isset($_POST['senha'])){
        return true;

    }else{
        return false;
    }
}