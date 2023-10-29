-- Query for Primary Key and Foreign Key 

Drop table sdetails;
Drop table marksdetails;

create table sdetails(rollno number(4) primary key, sname varchar2(15), gender varchar(8), address varchar(20), class varchar2(10));

Create table marksdetails(rollno number(4),foreign key(rollno) references sdetails(rollno), sub1 integer, sub2 integer, sub3 integer, total integer, per integer);

insert into sdetails values(101,'Jared','male','vesu','fybca');
insert into sdetails values(102,'Cal','female','adajan','sybca');
insert into sdetails values(103,'Saanvi','female','vesu','fybca');
insert into sdetails values(104,'Zeke','male','vesu','fybca');
insert into sdetails values(105,'Robert','male','vesu','sybca');


insert into marksdetails values(101,50,50,50,150,100);
insert into marksdetails values(102,40,40,40,120,80);
insert into marksdetails values(103,50,50,50,150,100);
insert into marksdetails values(104,50,50,50,150,100);
insert into marksdetails values(105,50,50,50,150,100);

Select rollno, sname, class from sdetails where class like 'fybca';

Select s.rollno,s.sname,m.per from sdetails s,marksdetails m where s.rollno=m.rollno and s.class='sybca' and m.per>=70;