var
	notas: array[1..2] of real;
	teste, media: real;
	n: integer;
begin
	n := 1;
	repeat
		read(teste);
		if (teste <= 10) and (teste >= 0) then
		begin
			notas[n] := teste;
			n := n + 1;
		end
		else
		begin
			writeln('nota invalida');
		end;
	until n > 2;
	media := (notas[1] + notas[2]) / 2;
	writeln('media = ',media:0:2);
end.
	

