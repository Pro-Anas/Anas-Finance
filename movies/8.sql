LIst the names of all people wo starred in
 SELECT name FROM people
JOIN stars ON stars.person_id = people.id
JOIN movies ON movies.id = stars. movie id
 WHERE movies.title="Toy Story";
