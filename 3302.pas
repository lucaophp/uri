var
	n, i: integer;
	resposta: integer;
begin
	read(n);
	for i := 1 to n do
	begin
		read(resposta);
		writeln('resposta ', i ,': ', resposta);
	end;
end. 
