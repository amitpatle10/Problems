-- clauses - where, group by, having, order by

1. SELECT id FROM students WHERE batch = 2020 
    AND id NOT IN ( 
        SELECT id FROM failed_students
    ); 

2. SELECT COUNT(id), country FROM students WHERE 
    country != 'IND' 
    GROUP BY country;
    -- groups data normally used with aggregate functions

3. SELECT COUNT(id), country FROM students WHERE 
    country != 'IND' 
    GROUP BY country,
    HAVING COUNT(id) > 1 ; 
    --  having function filters data from aggregate functions



UNION , MINUS , INTERSECT



UNION - return duplicates only once
Syntax - SELECT column_name(s) FROM table1 UNION SELECT column_name(s) FROM table2;



UNION ALL - keeps all the duplicates 
Syntax - SELECT column_name(s) FROM table1 UNION ALL SELECT column_name(s) FROM table2;



MINUS - returns elements present in set A but not in set B
Syntax   -- SELECT column1 , column2 , ... columnN
            FROM table_name
            WHERE condition
            MINUS
            SELECT column1 , column2 , ... columnN
            FROM table_name
            WHERE condition;



INTERSECT - returns common element of both the sets 
Syntax   -- SELECT column1 , column2 , ... columnN
            FROM table_name
            WHERE condition
            INTERSECT
            SELECT column1 , column2 , ... columnN
            FROM table_name
            WHERE condition;



JOINS : 


INNER JOIN : - SELECT * FROM employee JOIN salary; 
                    SELECT column_name(s)
                    FROM table1
                    INNER JOIN table2
                    ON table1.column_name = table2.column_name;



LEFT JOIN : - select everything from the left side and if there corresponding values 
              are not present in the right side it fills those values with NULL;
                    SELECT column_name(s)
                    FROM table1
                    LEFT JOIN table2
                    ON table1.column_name = table2.column_name;



RIGHT JOIN : - select everything from the Right side and if there corresponding values 
               are not present in the Left side it fills those values with NULL;
                    SELECT column_name(s)
                    FROM table1
                    RIGHT JOIN table2
                    ON table1.column_name = table2.column_name; 

                    

FULL JOIN : - Combination or UNION of left and right join ; 
                SELECT column_name(s)
                FROM table1
                FULL OUTER JOIN table2
                ON table1.column_name = table2.column_name
                WHERE condition;



CROSS JOIN : - lets say set A has 4 values and set B has 3 values then the resultant 
                output will have 12 entries that means every entry of set A joins with
                every entries of set B;
                    SELECT foods.item_name,foods.item_unit,
                    company.company_name,company.company_city 
                    FROM foods 
                    CROSS JOIN company;






