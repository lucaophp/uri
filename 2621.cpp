SELECT p.name
FROM products as p inner join providers as f ON f.id = p.id_providers
WHERE f.name like 'P%' AND p.amount between 10 and 20;
