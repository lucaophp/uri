SELECT c.id, c.name
FROM customers as c
WHERE 0 = (SELECT count(l.id) FROM locations as l WHERE l.id_customers = c.id)
ORDER BY c.id ASC;
