
<?php
$numero = floatval(fgets(STDIN));
	
$str = sprintf("%+2.4E", $numero);
$a = explode('E', $str);
$a[1] = $a[1][0] . str_pad(abs($a[1]), 2, '0', STR_PAD_LEFT);
$str = implode('E', $a);
echo $str. "\n";

