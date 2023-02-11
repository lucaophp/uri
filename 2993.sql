SELECT value_table.amount as most_frequent_value
FROM value_table
GROUP BY value_table.amount
ORDER BY COUNT(*) DESC LIMIT 1;
