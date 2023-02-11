<?php
$val = -1;

do {
	$soma = 0;
	$limit = 5;
	$val = intval(fgets(STDIN));
	$x = $val;
	if ($x === 0) continue;
	if ($x % 2 != 0) $x += 1;
	for ($i = 0; $i < $limit; $i++) {
		$soma += $x + ($i * 2);
	}
	echo $soma . "\n";
	
} while($val != 0);
