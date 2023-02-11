<?php
$caso = 0;
while(($N = fgets(STDIN)) !== false) {
	$N = intval($N);   
    $caso++;
    $n = 1;
    for ($i = 1; $i <= $N; $i++) $n += $i;
    echo "Caso " . $caso . ": " . $n . " numero" . ($n == 1 ? "" : "s") . "\n";
    for ($i = 0; $i<= $N; $i++) {
		if ($i == 0) echo "0";
		for ($j = 0; $j < $i; $j++) {
			echo " ".$i;
		}
	}
	echo "\n\n";
    
}
