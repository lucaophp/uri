uses SysUtils;

var
    n:uint64;
    i:integer;
begin
    read(n);
    For i := 1 to 10000 do
    begin
        if (i mod n) = 2 then
        begin
            writeln(i);
        end;
    end;
end.
