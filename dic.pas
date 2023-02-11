program rnTFPGmap; 
{$mode objfpc}
uses fgl; 
type 
    Rndict = specialize TFPGmap<string, string>;{define type under type}
var 
    dict: Rndict;               {define object under var}
    i: integer; 
{main: }
begin
    dict := Rndict.Create;      {create object in main}
    try
		dict.add('k1','v1'); 
		dict.add('k2','v2'); 
		dict.add('k3','v3'); 
		for i := 0 to (dict.count-1) do begin 
			writeln('i: ',i, '; key: ', dict.getkey(i), '; value: ', dict.getdata(i)); 
		end; 
	finally
		dict.Free;
	end;
    
    
end.
