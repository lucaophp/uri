<?php
function modulo( $dividend, $divisor ){
	if ($dividend < $divisor) {
		 $v = (($dividend * 10) % $divisor);
		 return $v;
	}
	return ( $dividend % $divisor + $divisor ) % $divisor;
}
while(($n = intval(fgets(STDIN))) != NULL) {
	$i = 1; $ans = 1;
	while(modulo($i, $n)) {
		$i = (($i * 10)+1)%$n;
		$ans++;
	}
	echo $ans . "\n";
}
