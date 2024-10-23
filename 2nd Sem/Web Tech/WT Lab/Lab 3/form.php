<!DOCTYPE html>
<html lang="en">
<head>
    <title>Register - Product Registration Form</title>
    <link rel="stylesheet" href="./css/form.css">
    <?php
    include "./connect.php";
    if(isset($_POST['submit'])){
        $name = $_POST['pname'];
        $price = $_POST['price'];
        $category = $_POST['category'];
        $no_of_products = $_POST['no_of_products'];
        $reg_date = $_POST['reg_date'];
        $exp_date = $_POST['exp_date'];

        $ins_sql = "
            INSERT INTO `products`(`product_name`, `price`, `category`, `number_of_products`, `registered_date`, `expiry_date`)
            VALUES ('$name', '$price', '$category', '$no_of_products', '$reg_date', '$exp_date')
        ";
        $ins_query = mysqli_query($conn, $ins_sql);
        if(!$ins_query){
            die("User Creation Error!");
        }else{
            echo("<br>Data Inserted Succefully!");
            header("Location: ./form.php");
        }
    }
    ?>
</head>
<body>
    <?php 
    include "./navbar.php";
    ?>
    <main>
        <form method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
            <label for="pname">Product name: <input required type="text" name="pname"></label><br>
            <label for="price">Product price: <input required type="number" name="price"></label><br>
            <label for="category">Product name: 
                <select required name="category" id="category">
                    <option value="Household">Household</option>
                    <option value="Education">Education</option>
                    <option value="Clothing">Clothing</option>
                    <option value="Garments">Garments</option>
                </select>
            </label><br>
            <label for="no_of_products">Number of Products: <input required type="number" name="no_of_products"></label><br>
            <label for="reg_date">Registered Date: <input required type="date" name="reg_date"></label><br>
            <label for="exp_date">Expiry Date: <input required type="date" name="exp_date"></label><br>
            <input type="submit" value="Submit" name="submit" id="submit">
        </form>
    </main>
</body>
</html>