SELECT c.name
FROM customers as c inner join legal_person as l ON l.id_customers = c.id
WHERE l.cnpj <> '';
