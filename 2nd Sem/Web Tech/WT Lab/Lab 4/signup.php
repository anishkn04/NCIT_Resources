<?php

include "connect.php";

if (!empty($_SESSION["id"])) {
    header("location:home.php");
}
if (isset($_POST['submit'])) {
    $name = $_POST['name'];

    $username        = $_POST['username'];
    $email           = $_POST['email'];
    $password        = $_POST['password'];
    $confirmpassword = $_POST['confirmpassword'];

    $sql    = (" SELECT * FROM user WHERE username ='$username' OR email = '$email' ");
    $result = mysqli_query($conn, $sql);



    if (mysqli_num_rows($result) > 0) {
        echo "<script> alert('Username or Email Has Already Taken'); </script>";
    } else {
        if ($password == $confirmpassword) {
            $query = "INSERT INTO user(name,username,email,password)
            VALUES ( '$name', '$username' , '$email' , '$password' )";
            mysqli_query($conn, $query);
            setcookie("Username", $username, time() + (86400 * 30), "/");
            setcookie("Password", $password, time() + (86400 * 30), "/");
            echo "<script> alert('Registration succesful'); </script>";

        } else {
            echo "<script> alert('Password does not match'); </script>";
        }
    }

}

?>


<head>
    <link rel="stylesheet" href="css/login.css">
</head>

<body>
    <form method="post" action=<?php echo $_SERVER['PHP_SELF']; ?>>

        <br>
        Name : <input type="text" name="name"> <br> <br>
        User name : <input type="text" name="username"> <br> <br>
        Email : <input type="text" name="email"> <br> <br>
        Password : <input type="password" name="password"> <br> <br>
        Confirm password : <input type="password" name="confirmpassword"> <br> <br>
        <input type="submit" value="Register" name="submit" class="submit"> <br> <br>

    </form>
    <br>
    <a href="login.php" class="login">Return to login! </a>

</body>