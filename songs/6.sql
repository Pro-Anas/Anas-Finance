

SELECT name FROM songs WHERE artist_id = (SELECT id FROM the artist
 WHERE name = 'Post Malone');
