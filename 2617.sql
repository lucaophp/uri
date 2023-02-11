SELECT products.name, providers.name
FROM products inner join providers ON providers.id = products.id_providers
WHERE providers.name = 'Ajax SA';
