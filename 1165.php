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
	if (!$primo) {
		printf("%d nao eh primo\n", $num);
		continue;
	}
	for ($j = sqrt($num) - 1; $j > 1; $j--) {
		if ($num % $j == 0) {
			$primo = false;
			break;
		}
	}
	if (!$primo) {
		printf("%d nao eh primo\n", $num);
	} else {
		printf("%d eh primo\n", $num);
	}
}
