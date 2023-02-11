SELECT name, 
		CAST(ROUND(
				(CASE 
					WHEN salary > 3000 THEN salary * 0.10
					ELSE 0
				 END), 2) AS numeric) AS tax
FROM people
WHERE salary > 3000;
