SELECT c.name, sum(p.amount) as sum
FROM products as p inner join categories as c on c.id = p.id_categories
GROUP BY c.name;
