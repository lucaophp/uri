<?php
 
    
$n = intval(fgets(STDIN));
for ($i = 2; $i <= $n; $i = $i+2 ) {
	printf("%d^%d = %.0lf\n", $i, 2, pow($i, 2));
}
