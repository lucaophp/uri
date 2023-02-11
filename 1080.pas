var
	i, pos: integer;
	n, maior: int64;
begin
	maior := -32768;
	pos := 0;
	For i := 1 to 100 do
	begin
		readln(n);
		If maior < n then
		begin
			maior := n;
			pos := i;
		end;
	end;
	writeln(maior);
	writeln(pos);
			
end.
