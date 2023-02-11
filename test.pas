var
  Test: ansistring;  // Declare a new Unicode string
begin
  SetLength(Test, 100000000);   // Initialize it to hold 100000 characters
  Test := StringOfChar('X', 100000000);  // Fill it with 100000 'X' characters
  writeln(test);
end.
