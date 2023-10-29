-- Subquery with same table -- 

Drop table empdetails;

create table empdetails(empid number(4) primary key, empname varchar2(15), gender varchar(8), empage varchar(8), city varchar(20), income number(10));


create table deptdetails(empid number(4), dept varchar2(20));


insert into empdetails values(101,'Jared','male',24,'surat',42000);
insert into empdetails values(102,'Cal','female',32,'vapi',54000);
insert into empdetails values(103,'Saanvi','female',33,'bharuch',25000);
insert into empdetails values(104,'Zeke','male',28,'surat',47000);
insert into empdetails values(105,'Robert','male',30,'vapi',58000);

insert into deptdetails values(101,'Production');
insert into deptdetails values(102,'Marketing');
insert into deptdetails values(103,'Production');
insert into deptdetails values(104,'Accounting');
insert into deptdetails values(105,'Accounting');

select * from empdetails;
select * from deptdetails;

SELECT empname, city, income FROM empdetails   
WHERE empid IN (SELECT empid FROM empdetails);  


SELECT * FROM empdetails WHERE empid IN 
(SELECT empid FROM empdetails WHERE income > 350000); 

SELECT empname,city,income FROM empdetails WHERE income = 
(SELECT MAX(income) FROM empdetails); 
 
SELECT empname,dept FROM empdetails,deptdetails WHERE empdetails.empid=deptdetails.empid and income = 
(SELECT MAX(income) FROM empdetails); 


