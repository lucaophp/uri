uses SysUtils;
var
	i, zero, c : integer;
	D: char;
	res: string;
	regra: boolean;
begin
	while True do
	begin
		zero := 0;
		c := 0;
		regra := true;
		readLn(D, res);
		if (D = '0') AND (CompareText(Trim(res), '0') = 0) THEN
		begin
			BREAK;
		end;
		for i := 1 to length(res) do
		begin
			if D <> res[i] then
			begin
				c:=c+1;
				if res[i] = ' ' then 
				begin
					c := c - 1;
					continue;
				end;
				if (regra) and (res[i] = '0') then 
				begin
					zero := zero + 1;
				end
				else
				begin
					zero := 0;
					regra := false;
					write(res[i]);
				end;
			end;
		end;
		if (c = 0) or (zero > 0) then write('0');
		writeln('');
	end
end.
