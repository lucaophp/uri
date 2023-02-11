SELECT p.name, c.name
FROM products as p INNER JOIN categories as c ON c.id = p.id_categories
WHERE p.amount > 100 AND c.id in (1, 2, 3, 6, 9)
ORDER BY c.id ASC;
