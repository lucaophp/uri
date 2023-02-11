SELECT e.cpf, e.enome, d.dnome
FROM empregados as e inner join departamentos as d ON e.dnumero = d.dnumero
WHERE 0 = (SELECT 
COUNT(t.cpf_emp) FROM trabalha as t WHERE t.cpf_emp = e.cpf)
ORDER BY e.cpf ASC;
