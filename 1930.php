<?php
$s = 1;
$t = explode(' ',fgets(STDIN));
for ($i = 0; $i < 4; $i++) {
	
	$s += ($t[$i] - 1);
}
printf("%d\n", $s);
