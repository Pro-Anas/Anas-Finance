SELECT DISTINCT name
FROM people
JOIN directors ON directors.person_id = people.id
JOIN movies ON movies.id = directors.movie id
JOIN ratings ON ratings.movie id = movies.id
WHERE rating >= 9.0;
