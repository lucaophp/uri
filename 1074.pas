var
	n, num: int64;
	i:integer;
begin
	readln(n);
	for i:=1 to n do
	begin
		readln(num);
		if num = 0 then writeln('NULL')
		else if num > 0 then
		begin
			if num mod 2 = 0 then writeln('EVEN POSITIVE')
			else writeln('ODD POSITIVE');
		end
		else
		begin
			if num mod 2 = 0 then writeln('EVEN NEGATIVE')
			else writeln('ODD NEGATIVE');
		end;
	end;
end.
