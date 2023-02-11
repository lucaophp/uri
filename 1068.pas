{$MODE OBJFPC}
uses sysutils;

var
	ex: string;
	p, i: integer;
begin
	
	while True do
	begin
		try
			begin
				p := 0;
				ex:='';
				if not(eof) then
					readln(ex)
				else
					break;
				for i := 1 to length(ex) do
				begin
					if ex[i] = '(' then
					begin
						p += 1;
					end
					else if ex[i] = ')' then
					begin
						p -= 1;
					end;
					if p < 0 then break
				end;
				if p = 0 then
					writeln('correct')
				else
					writeln('incorrect');
			end;
		except
			begin
				break;
			end;
		end;
	end;
end.
