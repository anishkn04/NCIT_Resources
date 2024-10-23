<?php
include("./connect.php");
$sql="
    CREATE TABLE IF NOT EXISTS products(
        id INT PRIMARY KEY AUTO_INCREMENT,
        product_name VARCHAR(50) NOT NULL UNIQUE,
        price INT NOT NULL,
        category VARCHAR(12) NOT NULL,
        number_of_products INT NOT NULL,
        registered_date DATE DEFAULT CURDATE() NOT NULL,
        expiry_date DATE NOT NULL
    )
";

$crttable = mysqli_query($conn, $sql);
if(!$crttable){die("Error creating a table!<br>");}
?>