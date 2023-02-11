SELECT products.name, providers.name
FROM products inner join providers on providers.id = products.id_providers
WHERE products.id_categories = 6;

