<!-- Question ramro sanga bujheko xaina, yo answer complete xaina probably -->


<?php
if (isset($_POST['submit'])) {
    $username = $_POST['username'];
    $password = $_POST['password'];
    
    $conn = mysqli_connect('localhost', 'root', '', 'project');
    $query = "SELECT * FROM user WHERE username='$username' AND password='$password'";
    $result = mysqli_query($conn, $query);
    $row = mysqli_fetch_assoc($result);
    if ($row) {
        header("Location: form.php");
    } else {
        echo "Login failed";
    }
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>Document</title>
</head>

<body>
    <form action="<?php echo ($_SERVER['PHP_SELF']) ?>" method="post">
        Username: <input name="username" type="text">
        <br>
        Password: <input name="password" type="password">
        <br>
        <input name="submit" type="submit" value="Login">
    </form>
</body>

</html>