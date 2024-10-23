<!DOCTYPE html>
<html lang="en">
<head>
    <title>Display All - Product Registration Form</title>
    <link rel="stylesheet" href="./css/data.css">
    <?php
    include "./connect.php";
    $read_sql = "SELECT * FROM products";
    $read_query = mysqli_query($conn, $read_sql);
    ?>
</head>
<body>
    <?php 
    include "./navbar.php";
    ?>
    <main>
        <table>
            <tr>
                <th>Product ID</th>
                <th>Product Name</th>
                <th>Product Price</th>
                <th>Product Category</th>
                <th>Number of Products</th>
                <th>Registration Date</th>
                <th>Expiry Date</th>
                <th>Action</th>
            </tr>
            <?php 
            if(mysqli_num_rows($read_query)>0){
                while($row = mysqli_fetch_assoc($read_query)){
            ?>
            <tr>
                <td><?php echo($row['id']); ?></td>
                <td><?php echo($row['product_name']); ?></td>
                <td><?php echo($row['price']); ?></td>
                <td><?php echo($row['category']); ?></td>
                <td><?php echo($row['number_of_products']); ?></td>
                <td><?php echo($row['registered_date']); ?></td>
                <td><?php echo($row['expiry_date']); ?></td>
                <td>
                    <a class="table_link" href="./update.php?id=<?php echo($row['id']); ?>">Update</a>
                    <a class="table_link" href="./delete.php?id=<?php echo($row['id']); ?>">Delete</a>
                </td>
            </tr>
            <?php
                }
            }else{
                echo("No Data Found");
            }
            ?>
        </table>
    </main>
</body>
</html>