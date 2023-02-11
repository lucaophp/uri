SELECT c.name, o.id
FROM customers as c INNER JOIN orders as o ON o.id_customers = c.id
WHERE EXTRACT(MONTH FROM o.orders_date) <= 6 AND EXTRACT(YEAR FROM o.orders_date) = 2016;
