<?php
    session_start();
    include_once("util.php");
    if (checkSession()) {
        include("_head.html");
        include("_headerAdmin.html");
        include("_inscribirTaller.html");
        include("_footer.html");
    } else {
        header("Location:admin.php?sessionexpired=true");
    }
?>
