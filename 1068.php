<?php
while (($ex = trim(fgets(STDIN))) != null) {
    $p = 0;
    
    for ($i = 0; $i < strlen($ex); $i++) {
        if ($ex[$i] === '(') {
            $p++;
        }
        if ($ex[$i] === ')') {
            $p--;
        }
        if ($p < 0) {
            break;
        }
    }
    echo $p === 0 ? "correct\n" : "incorrect\n";
}



?>
