<?php
    include "./connect.php";
    $id = $_GET['id'];
    $sel_sql = "SELECT * FROM `products` WHERE `id`='$id'";
    $sel_query = mysqli_query($conn, $sel_sql);
    $row = mysqli_fetch_assoc($sel_query);
    if(isset($_POST['submit'])){
        $id = $_POST['id'];
        $name = $_POST['pname'];
        $price = $_POST['price'];
        $category = $_POST['category'];
        $no_of_products = $_POST['no_of_products'];
        $reg_date = $_POST['reg_date'];
        $exp_date = $_POST['exp_date'];

        $upd_sql = "
            UPDATE `products`
            SET `product_name`='$name', `price`='$price', `category`='$category', `number_of_products`='$no_of_products', `registered_date`='$reg_date', `expiry_date`='$exp_date'
            WHERE `id`='$id'
        ";
        $upd_query = mysqli_query($conn, $upd_sql);
        if(!$upd_query){
            die("Data Update Error!");
        }else{
            echo("<br>Data Updated Successfully!");
            header("Location: ./data.php");
        }
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <title>Update - Product Registration Form</title>
    <link rel="stylesheet" href="./css/form.css">
    
</head>
<body>
    <?php 
    include "./navbar.php";
    ?>
    <main>
        <form method="POST" action="<?php echo $_SERVER['PHP_SELF']; ?>">
            <input type="hidden" name="id" value="<?php echo($row['id']); ?>">
            <label for="pname">Product name: <input required type="text" name="pname" value="<?php echo($row['product_name']); ?>"></label><br>
            <label for="price">Product price: <input required type="number" name="price" value="<?php echo($row['price']); ?>"></label><br>
            <label for="category">Product name: 
                <select required name="category" id="category">
                    <option value="Household" <?php if($row['category']=="Household"){echo("selected");} ?>>Household</option>
                    <option value="Education" <?php if($row['category']=="Education"){echo("selected");} ?>>Education</option>
                    <option value="Clothing" <?php if($row['category']=="Clothing"){echo("selected");} ?>>Clothing</option>
                    <option value="Garments" <?php if($row['category']=="Garments"){echo("selected");} ?>>Garments</option>
                </select>
            </label><br>
            <label for="no_of_products">Number of Products: <input required type="number" name="no_of_products" value="<?php echo($row['number_of_products']); ?>"></label><br>
            <label for="reg_date">Registered Date: <input required type="date" name="reg_date" value="<?php echo($row['registered_date']); ?>"></label><br>
            <label for="exp_date">Expiry Date: <input required type="date" name="exp_date" value="<?php echo($row['expiry_date']); ?>"></label><br>
            <input type="submit" value="Update" name="update">
        </form>
    </main>
</body>
</html>