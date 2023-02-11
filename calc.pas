{$MODE OBJFPC}
uses crt, sysutils, classes;

type tipo_oper = class
	function soma(a,b:real):real;
	function sub(a,b: real):real;
	function mult(a,b: real):real;
	function divisao(a,b: real):real;
end;
var operacoes : tipo_oper;
	valor1, valor2: real;

function tipo_oper.soma(a, b: real):real;
begin
	soma := a + b;
end;
function tipo_oper.sub(a, b: real):real;
begin
	sub := a - b;
end;
function tipo_oper.mult(a, b: real):real;
begin
	mult := a * b;
end;
function tipo_oper.divisao(a, b: real):real;
begin
	if b = 0 then
	begin
		writeln('error');
		divisao := 0;
	end
	else
	begin
		divisao := a / b;
	end;
end;
begin
	operacoes.create();
	readLn(valor1, valor2);
	with operacoes do begin
          writeln('Soma: ',soma(valor1,valor2):0:3);
          writeln('Subtraccao: ',sub(valor1,valor2):0:3);
          writeln('Multiplicacao: ',mult(valor1,valor2):0:3);
          writeln('Divisao: ',divisao(valor1,valor2):0:3);
    end;
end.
