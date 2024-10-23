<?php
session_start();
$_SESSION['count'] += 1;
?>
<!DOCTYPE html>
<html>
<head>
    <title>PHP</title>
</head>
<body>
    THIS IS AWESOME WEBSITE WHICH DISPLAYS VISIT COUNT<br>
    COUNT = <?php echo $_SESSION['count']; ?>
</body>
</html>