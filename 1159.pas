program URI1159;

{$APPTYPE CONSOLE}


uses
  SysUtils, Math;
  
function isPar(var x: int64): boolean;
begin
	isPar := (x mod 2) = 0;
end;
var
	i : integer;
	val, x, soma : int64;
begin
	repeat
		soma := 0;
		readln(val);
		if val = 0 then continue;
		x := val;
		if not(isPar(x)) then x := x + 1;
		for i := 0 to 4 do
		begin
			soma := soma + (x + (i * 2));
		end;
		writeln(soma);
	until val = 0;
end.
