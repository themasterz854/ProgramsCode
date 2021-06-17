import sqlite3
import sqlalchemy
print("HELLO")
'''

SELECT
    col1 [AS alias1], ..., colN [AS aliasN]  
FROM
    table_name
;


'''

'''

SELECT
    id, 
    title,
    author,
    language,
    rating,
    price,
    amount
FROM 
    books
WHERE
    author = 'Charles Dickens'
    AND (language = 'EN' OR language = 'FR')
    AND rating > 4.0
    AND amount > 0
;


SELECT
    expr1 [AS alias1], ..., exprN [AS aliasN]  
FROM
    table_name
WHERE
    logical_expression
;
'''

'''
INSERT INTO table_name (column_1, column_2,..., column_n) VALUES 
(list_of_values_1) [, (list_of_values_2), ..., (list_of_values_m)]

'''



'''
UPDATE table_name SET col1 = expr1, col2 = expr2, …, colN = expr;


'''


'''

DROP DATABASE databasename
DROP TABLE Tablename
'''


'''
The following query can be used to delete all the rows without deleting the table:

DELETE FROM table_name
If you want to delete only selected rows, you can use this template:

DELETE FROM table_name WHERE logical_expression
'''

'''
To use the module, you must first create a Connection object that represents the database. Here the data will be stored in the example.s3db file:

import sqlite3
conn = sqlite3.connect('example.s3db')
Once you have a Connection, you can create a Cursor object and call its execute() method to perform SQL queries:

cur = conn.cursor()
 
# Executes some SQL query
cur.execute('SOME SQL QUERY')
 
# After doing some changes in DB don't forget to commit them!
cur.commit()
To get data returned by SELECT query you can user fetchone(), fetchall() methods:

cur.execute('SOME SELECT QUERY')
 
# Returns the first row from the response
cur.fetchone()
 
# Returns all rows from the response
cur.fetchall()

'''


'''
SELECT
    hotel_id, 
    hotel_name, 
    price_per_night,
    price_for_early_check_in,
    rating, 
    stars
FROM 
    hotels
ORDER BY
    rating DESC,
    price_per_night*2 + price_for_early_check_in 
;   



'''




