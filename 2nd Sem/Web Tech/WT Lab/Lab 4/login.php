<?php

include "connect.php";

if (!empty($_SESSION["id"])) {
    header("location:home.php");
}
if (isset($_POST['submit'])) {

    $username = $_POST['username'];
    $password = $_POST['password'];

    $result = mysqli_query($conn, "SELECT * FROM user WHERE username = '$username'  ");
    $row    = mysqli_fetch_assoc($result);

    if (mysqli_num_rows($result) > 0) {

        if ($password == $row["password"]) {
            $_SESSION["login"] = true;
            $_SESSION["id"]    = $row["id"];
            header("Location:home.php");

        } else {
            echo "<script> alert('Wrong Password'); </script>";
        }

    } else {
        echo "<script> alert('User not registered'); </script>";
    }
}

?>


<head>
    <link rel="stylesheet" href="css/login.css">
</head>

<body>
    <form method="POST" action=<?php echo $_SERVER['PHP_SELF'] ?>>
        <table>

            <tr>
                <th> Username </th>
                <td> <input type="text" name="username" placeholder="Username" <?php if(isset($_COOKIE)){
                    $user = $_COOKIE["Username"];
                    echo("value='$user'");
                } ?>>
            </tr>

            <tr>
                <th> Password </th>
                <td> <input type="password" name="password" placeholder="Password" <?php if(isset($_COOKIE)){
                    $pass = $_COOKIE["Password"];
                    echo("value='$pass'");
                } ?> > </td>
            </tr>

            <tr>
                <td colspan="2">
                    <input type="submit" value="Login" name="submit" class="submit">
                </td>
            </tr>

            <tr>
                <td colspan="2"> <a href="signup.php" class="reg"> New Registration </a> </td>
            </tr>

        </table>
    </form>


    <br>


</body>