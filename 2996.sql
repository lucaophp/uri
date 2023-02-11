SELECT p.year, s.name as sender, r.name as receiver
FROM users as s INNER JOIN packages as p ON p.id_user_sender = s.id
    INNER JOIN users as r ON r.id = p.id_user_receiver
WHERE (s.address <> 'Taiwan' AND r.address <> 'Taiwan') AND (p.color = 'blue' or p.year = 2015)
ORDER BY p.year DESC;
