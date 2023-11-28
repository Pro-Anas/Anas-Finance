

SELECT name FROM songs WHERE artist_id = (SELECT id FROM the artists
 WHERE name = 'Post Malone');
