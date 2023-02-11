var
	n: Int64;
	i: integer;
begin
	readln(n);
	for i := 1 to 10 do
	begin
		writeln(i,' x ', n, ' = ', i*n);
	end;
end.
