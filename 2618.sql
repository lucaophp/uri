SELECT p.name, f.name, c.name
FROM products as p INNER JOIN providers as f ON f.id = p.id_providers
    INNER JOIN categories as c ON c.id = p.id_categories
WHERE f.name = 'Sansul SA' AND c.name = 'Imported';
