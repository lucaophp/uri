var
	i, j: integer;
	n, soma :int64;
	texto: string;
	leds: array[0..9] of integer = (6, 2, 5, 5, 4, 5, 6, 3, 7, 6);
begin
	readln(n);
	for i:= 1 to n do
	begin
		readln(texto);
		soma := 0;
		for j:=1 to length(texto) do
		begin
			soma := soma + leds[(Ord(texto[j]) - Ord('0'))];
		end;
		writeln(soma, ' leds');
		
	end;
end.
