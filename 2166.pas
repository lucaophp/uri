var
	i, n:integer;
	x: real;
begin
	readln(n);
	x := 0;
	For i := 1 to n do
	begin
		x := x + 2.0;
		x := (1.0/x);
	end;
	x:=x+1.0;
	writeln(x:0:10);
end.
