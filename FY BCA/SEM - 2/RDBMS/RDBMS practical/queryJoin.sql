-- Join -- 

Drop table sdetails;
Drop table marksdetails;

create table sdetails(sid number(4) primary key, sname varchar2(15), gender varchar(8), address varchar(20), class varchar2(10));

Create table marksdetails(sid number(4),foreign key(rollno) references sdetails(rollno), sub1 integer, sub2 integer, sub3 integer, total integer, per integer);

Create table vcdetails(sid number(4),vcourse,vcmarks);

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


insert into vcdetails values(101,'WD',56);
insert into vcdetails values(102,'OAT',72);
insert into vcdetails values(103,'OAT',72);
insert into vcdetails values(102,'EM',56);
insert into vcdetails values(106,'WD',73);
insert into vcdetails values(107,'EM',80);
insert into vcdetails values(101,'OAT',74);


Select sname, class from sdetails where class like 'fybca';

-- Select rollno, sname, class from sdetails where class like 'fybca';--

-- Select s.rollno,s.sname,m.per from sdetails s,marksdetails m where s.rollno=m.rollno and s.class='sybca' and m.per>=70; --

-- Select rollno, sname, class from sdetails where class like 'fybca'; --

