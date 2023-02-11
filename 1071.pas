
var
	x, y, i: int64;
	soma: int64;
begin
	i := 0;
	soma := 0;
	read(x,y);
	if x >= y then
	begin
		i := x - 1;
		while i > y do
		begin
			if (i mod 2 <> 0) then
			begin
				soma := soma + i;
			end;
			i:= i - 1;
		end
	end
	else
	begin
		i := y - 1;
		while i > x do
		begin
			if (i mod 2 <> 0) then
			begin
				soma := soma + i;
			end;
			i:=i-1;
		end
	end;
	writeln(soma);
	
end.


