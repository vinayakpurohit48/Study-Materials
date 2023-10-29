set serveroutput on

declare

empid integer;
smon varchar2(10);
bs integer;
hra integer;
da integer;
pf integer:=200;
np integer;

BEGIN

empid:=&empid;
smon:=smon;
bs:=&bs;
hra:=0.5*bs;
da:=0.2*bs;
NP:=BS+DA+HRA-pf;

dbms_output.put_line('Total salary is ' || np);

insert into saldetails values(empid,smon,bs,hra,da,pf,np);
END;
/



