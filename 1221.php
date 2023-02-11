<?php
$n = intval(fgets(STDIN));
$feixo = [2,3,5,7];
for ($i = 0; $i < $n; $i++) {
	$num = intval(fgets(STDIN));
	$primo = true;
	foreach($feixo as $f) {
		if ($num % $f == 0 && $num != $f) {
			$primo = false;
			break;
		}
	}
	if (!$primo || $num <= 1) {
		printf("Not Prime\n");
		continue;
	}
	for ($j = 3; $j < intval(sqrt($num)); $j++) {
		if ($num % $j == 0) {
			$primo = false;
			break;
		}
	}
	if (!$primo) {
		printf("Not Prime\n");
	} else {
		printf("Prime\n");
	}
}
