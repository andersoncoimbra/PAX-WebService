<?php
/**
 * Created by PhpStorm.
 * User: Anderson
 * Date: 09/12/2015
 * Time: 02:04
 */

function allAlunos(){

    if(isset($_GET['admin']) && isset($_GET['allAlunos']) ) {
        $link = abrirConexao();

        $query = "SELECT * FROM `alunos` ";


        if($request = mysqli_query($link, $query))
        {$linhas = 1;
            $rows = mysqli_num_rows($request);
            if($rows > 0){
                echo "<table><thead><tr><th>ID</th><th>Aluno</th><th>Escola</th><th>E-mail</th></tr></thead>";
                while($assoc = mysqli_fetch_assoc($request))
                {
                    echo    "<tbody><tr><td>".$assoc['id']."</td><td>".$assoc['nome']."</td><td>".$assoc['escola']."</td><td>".$assoc['email']."</td></tr></tbody>";
                }
                echo "</table><br></div>";


            }else{echo "Deu alguma coisa errado";}
        }
        mysqli_close($link);
    }



}






