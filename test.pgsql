CREATE SCHEMA IF NOT EXISTS capitalism;
  DROP TABLE IF EXISTS main;
  CREATE TABLE IF NOT EXISTS main (
    id INT PRIMARY KEY,
    TESTONE VARCHAR(10) NOT NULL,
    TESTTWO VARCHAR(10) NOT NULL
  );
  INSERT INTO main (ID, TESTONE, TESTTWO) VALUES (0, 'hellrewqrw', 'rqwer');
  INSERT INTO main (ID, TESTONE, TESTTWO) VALUES (1, 'hellrewqrw', 'rqewer');
  INSERT INTO main (ID, TESTONE, TESTTWO) VALUES (1, 'hellrewqrw', 'rqewer')
  ON CONFLICT (id) DO
  UPDATE set ID = 2;
  UPDATE main SET testone = 'sinster' WHERE testtwo = 'rqwer';
  DELETE FROM main WHERE testtwo = 'rqwer';
  SELECT * FROM main;
DROP TABLE IF EXISTS alt;
CREATE TABLE if not exists alt (
	ID INT PRIMARY KEy,
    COL1 INT NOT NULL,
    COL2 INT NOT NULL
);
INSERT INTO alt (ID, COL1, COL2) VALUES (0, 105932, 40932);
SELECT * FROM alt;
