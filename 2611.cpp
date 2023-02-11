select movies.id, movies.name FROM movies inner join genres on genres.id = movies.id_genres
where genres.description = 'Action';
