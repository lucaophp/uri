uses math;
var
	i, n:integer;
begin
	readln(n);
	for i:=2 to n  do
		if i mod 2 = 0 then writeln(i, '^2 = ', (power(i, 2)):0:0);
end.
