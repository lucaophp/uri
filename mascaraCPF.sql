SELECT 
substr(p.cpf, 1, 3) || '.' ||
       substr(p.cpf, 4, 3) || '.' ||
       substr(p.cpf, 7, 3) || '-' ||
       substr(p.cpf, 10) as cpf
FROM natural_person as p INNER JOIN customers as c ON c.id = p.id_customers;
