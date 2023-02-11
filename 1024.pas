uses math;
function reverse(const str: ansistring): ansistring;
var
  i, j: Integer;
begin
  j := length(str);
  setlength(reverse, j);
  for i := 1 to j do
    reverse[i] := str[j - i + 1];
end;
var
	n: int64;
	i, j, hh: integer;
	palavra, p2, res: ansistring;
{-$H+}
begin
	res := '';
	readln(n);
	for i := 1 to n do
	begin
		readln(palavra);
		p2 := palavra;
		for j := 1 to length(palavra) do
		begin
			
			if ((ord(palavra[j]) >= ord('a')) and (ord(palavra[j]) <=  ord('z')) or ((ord(palavra[j]) >= ord('A')) and (ord(palavra[j]) <=  ord('Z')))) then
			begin
				p2[j] := chr(ord(palavra[j]) + 3);
			end
			else
			begin
				p2[j] := palavra[j];
			end;
		end;
		p2:= reverse(p2);
		hh := trunc(round(length(palavra) / 2));
		for j := hh to length(palavra) do
		begin
			
			p2[j] := chr(ord(p2[j]) - 1);
		end;
		res := res + p2 + sLineBreak;
	end;
	write(res);
end.
