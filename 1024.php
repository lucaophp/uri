<?php
/**
 * @example truncate(-1.49999, 2); // returns -1.49
 * @example truncate(.49999, 3); // returns 0.499
 * @param float $val
 * @param int f
 * @return float
 */
function truncate($val, $f="0")
{
    if(($p = strpos($val, '.')) !== false) {
        $val = floatval(substr($val, 0, $p + 1 + $f));
    }
    return $val;
}
function main() {
	$n = intval(fgets(STDIN));
	for ($i = 0; $i < $n; $i++) {
		$palavra = trim(fgets(STDIN));
		$aPalavra = str_split($palavra);
		foreach($aPalavra as $k => $p) {
			if ((ord($p) >= ord('a') && ord($p) <= ord('z')) || (ord($p) >= ord('A') && ord($p) <= ord('Z'))) {
				$palavra[$k] = chr(ord($p) + 3);
			}
		}
		$palavra = strrev($palavra);
		$aPalavra = str_split($palavra);
		$len = strlen($palavra);
		
		for($k = truncate($len / 2); $k < $len; $k++) {
			$aPalavra[$k] = chr(ord($aPalavra[$k]) - 1);
			// echo $aPalavra[$k] . "\n";
		}
		$palavra = implode('', $aPalavra);
		echo $palavra . "\n";
	}
}
main();
