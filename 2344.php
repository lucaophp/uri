<?php
$nota = intval(fgets(STDIN));
if ($nota <= 0) {
	echo "E";
}else if($nota <= 35)
	echo "D";
else if($nota <= 60)
	echo "C";
else if($nota <=85)
	echo "B";
else
	echo "A";
echo "\n";
?>
