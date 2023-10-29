set serveroutput on

DECLARE
n1 integer;
n2 integer;
ans integer;
BEGIN 
	n1:=&n1;
	n2:=&n2;
	ans:=n1+n2;
   	dbms_output.put_line('Sum of number=' || ans); 
END; 
/ 
