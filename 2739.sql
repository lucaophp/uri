SELECT l.name AS name, CAST(EXTRACT(DAY FROM l.payday) AS INT) as day
FROM loan as l
WHERE EXTRACT(MONTH FROM l.payday) = 10;
