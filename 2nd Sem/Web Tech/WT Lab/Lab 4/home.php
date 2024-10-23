<?php

include "connect.php";

if(!empty($_SESSION["id"]))
{
    $id = $_SESSION['id'];
    $sql = " SELECT * FROM user WHERE id=$id ";
    $result = mysqli_query($conn , $sql);
    $row = mysqli_fetch_assoc($result);
}
else
{
    header("Location:login.php");
}

?>

<head>
  <style>
    body{
      display: flex;
      flex-direction: column;
      text-align: center;
      align-items: center;
    }
  </style>
</head>

<body>
  <h1> Welcome to home page </h1>
  <?php for($i = 0; $i<10; $i++){
    echo("$i. Hello User<br>");
  } ?>
  <a href="logout.php"> Logout </a>
</body>