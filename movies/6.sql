 SELECT AVG(rating) FROM movies
 JION ratings ON movies.id = ratings.movie_id
 WHERE year = 2012;
