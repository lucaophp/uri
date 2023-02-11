SELECT c.name, r.rentals_date
FROM customers as c INNER JOIN rentals as r ON r.id_customers = c.id
WHERE rentals_date between '2016-09-01' AND '2016-09-30';
