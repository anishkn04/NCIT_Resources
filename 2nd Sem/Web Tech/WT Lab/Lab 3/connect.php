<?php
$server = "localhost";
$user = "root";
$pass = "";
$db = "market";

$conn = mysqli_connect($server, $user, $pass);

$sql = "CREATE DATABASE IF NOT EXISTS market";
$create_query = mysqli_query($conn, $sql);

$conn = mysqli_connect($server, $user, $pass, $db);
if(!$create_query || !$conn){
    die("Database connection error!<br>");
}
?>