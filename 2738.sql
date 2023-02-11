SELECT c.name, CAST(ROUND(((s.math * 2 + s.specific * 3 + s.project_plan * 5) / 10), 2) AS numeric) as avg
FROM candidate as c INNER JOIN score AS s ON s.candidate_id = c.id
ORDER BY (s.math * 2 + s.specific * 3 + s.project_plan * 5) DESC;
