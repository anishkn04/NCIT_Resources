<?php
if(isset($_POST['submit'])){
    $username = $_POST['username'];
    if(strlen($username) < 8){
        echo "Username must be at least 8 characters";
        exit;
    }
    $email = $_POST['email'];
    $emailCheck = false;
    for($i = 0; $i < strlen($email); $i++){
        if($email[$i] == '@'){
            $emailCheck = true;
            break;
        }
    }
    if(!$emailCheck){
        echo "This is not an email";
        exit;
    }
    $phone = $_POST['phone'];
    if(strlen($phone) != 10){
        echo "Phone must be 10 characters";
        exit;
    }
    $password = $_POST['password'];
    if(strlen($password) < 8){
        echo "Password must be at least 8 characters";
        exit;
    }
    for($i = 0; $i < strlen($password); $i++){
        if(!is_numeric($password[$i])){
            echo "Password should only contain digits";
            exit;
        }
    }
    $confirmPassword = $_POST['confirmPassword'];
    if($password == $confirmPassword){
        echo "Username: $username <br>";
        echo "Email: $email <br>";
        echo "Phone: $phone <br>";
        echo "Password: $password <br>";
        echo "Confirm Password: $confirmPassword <br>";
    }else{
        echo "Password and Confirm Password must be same";
    }
}
?>

<!DOCTYPE html>
<html>

<head>
    <title>JS2</title>
    <style>
        input required {
            display: block;
        }

        input required[type="submit"] {
            text-align: center;
            margin: 1px auto;
        }

        span {
            color: red;
        }
    </style>
    
</head>
<body>
    <form style="border: 1px solid black; width: 20%;" method="post" action="index.php">
        <h4 style="text-align: center;">Login</h4>
        <div>Username
            <input required name="username" id="username" type="text" placeholder="Username">
        </div>
        <div>
            Email
            <input required name="email" id="email" type="email" placeholder="Email">
        </div>
        <div>
            Phone
            <input required name="phone" id="phone" type="text" placeholder="Phone">
        </div>
        <div>
            Password
            <input required name="password" id="password" type="password" placeholder="Password">
        </div>
        <div>
            Confirm Password
            <input required name="confirmPassword" id="confirmPassword" type="password"
                placeholder="Confirm Password">
        </div>
        <input type="submit" id="submit" value="Submit" name="submit">
    </form>
</body>

</html>