SELECT p.name, f.name, p.price
FROM products as p INNER JOIN providers as f ON f.id = p.id_providers
    INNER JOIN categories as c ON c.id = p.id_categories
WHERE p.price > 1000 AND c.name = 'Super Luxury';
