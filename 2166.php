<?php
$n = intval(fgets(STDIN));
$x = 0.0;
for ($i = 0; $i < $n; $i++) {
	$x += 2.0;
	$x = (1.0 / $x);
}
$x += 1.0;
printf("%.10f\n", $x); 
