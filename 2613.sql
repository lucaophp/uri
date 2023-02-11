SELECT movies.id, movies.name
FROM movies inner join prices on prices.id = movies.id_prices
WHERE prices.value < 2;
