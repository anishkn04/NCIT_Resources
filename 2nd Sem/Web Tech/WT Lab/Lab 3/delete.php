<?php
include "connect.php";
if(isset($_GET['id'])){
    $user_id = $_GET['id'];

    $del_sql = "
        DELETE FROM `products` WHERE `id` = '$user_id'
    ";

    $del_query = mysqli_query($conn, $del_sql);
    if(!$del_query){
        die("Unable to delete data!");
    }else{
        echo("Deleted Succesfully!");
        header("Location: ./data.php");
    }
}else{echo("Something went wrong!");}

?>