<?php
$n = intval(fgets(STDIN));
for ($i = 0; $i < $n; $i++) {
	$num = intval(fgets(STDIN));
	if ($num == 0) {
		printf("NULL\n");
	} else if($num > 0) {
		printf("%s\n", ($num % 2 == 0) ? "EVEN POSITIVE" : "ODD POSITIVE");
	} else {
		printf("%s\n", ($num % 2 == 0) ? "EVEN NEGATIVE" : "ODD NEGATIVE");
	}
}
