SELECT products.id, products.name
FROM products inner join categories on categories.id = products.id_categories
WHERE categories.name like 'super%';

