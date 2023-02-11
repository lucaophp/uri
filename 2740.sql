(
    SELECT CONCAT('Podium: ', team)
    FROM league
    ORDER BY position ASC
    LIMIT 3
)
UNION ALL
(
    SELECT CONCAT('Demoted: ', team)
    FROM league
    ORDER BY position DESC
    LIMIT 1 OFFSET 1
)
UNION ALL
(
    SELECT CONCAT('Demoted: ', team)
    FROM league
    ORDER BY position DESC
    LIMIT 1
);
