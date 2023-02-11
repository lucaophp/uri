var
	fib: array[0..61] of uint64;
	n, t, i, j: int32;
begin
	n:= 0;
	t:= 0;
	fib[0] := 0;
	fib[1] := 1;
	readLn(t);
	For i := 1 to t do
	begin
		readLn(n);
		For j := 2 to n do
		begin
			fib[j] := fib[j - 2] + fib[j - 1];
		end;
		writeln('Fib(', n, ') = ', fib[n]);
	end;
	
	
end.
