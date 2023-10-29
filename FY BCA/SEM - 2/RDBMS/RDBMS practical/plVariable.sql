set serveroutput on

DECLARE
x varchar(20):='Hello World';
BEGIN 
   dbms_output.put_line(x); 
END; 
/ 
