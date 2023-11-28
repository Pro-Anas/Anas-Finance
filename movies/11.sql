SELECT title FROM movies
JOIN ratings ON ratings.movie_ id = movies.id
JOIN stars ON stars.movie_id = movies.id
JOIN people ON stars.person_id = people.id
WHERE people.name = "Chadwick Boseman"
ORDER BY ratings.rating
LIMIT 5;
