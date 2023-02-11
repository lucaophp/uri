<?php
while(list($n, $m) = fscanf(STDIN, "%d %d")) {
	printf("%d\n", $n ^ $m);
}
