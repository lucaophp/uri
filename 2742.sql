SELECT l.name, ROUND((l.omega * 1.618), 3) as "Fator N"
FROM life_registry as l INNER JOIN dimensions as d ON d.id = l.dimensions_id
WHERE d.name in ('C875', 'C774') AND l.name like 'Richard %'
ORDER BY l.omega ASC;
