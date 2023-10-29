drop table orders;
drop table customer;


create table customer(cid number primary key,nm varchar(10),occupation varchar(15),age number);

create table orders(oid number primary key,cid number,constraint fine foreign key(cid) references customer(cid),prod_nm varchar(15),order_date date);

insert into customer values(101,'Peter','Engineer',32);
insert into customer values(102,'Joseph','Developer',30);
insert into customer values(103,'John','Leader',28);
insert into customer values(104,'Stephen','Scientist',45);
insert into customer values(105,'Suzi','Carpenter',26);
insert into customer values(106,'Bob','Actor',25);
insert into customer values(107,null,null,null);

insert into orders values(1,101,'Laptop','10-jan-2020');
insert into orders values(2,103,'Desktop','10-jan-2020');
insert into orders values(3,106,'Iphone','10-jan-2020');
insert into orders values(4,104,'Mobile','10-jan-2020');
insert into orders values(5,102,'TV','10-jan-2020');

select * from customer;
select * from orders;

--Fetch name of customers who had placed oreder --

select nm from customer where cid in (select cid from orders);


--Fetch name of customers who had not placed oreder --

select nm from customer where cid not in (select cid from orders);



SELECT nm, occupation, age FROM customer C  
WHERE EXISTS (SELECT * FROM Orders O WHERE C.cid = O.oid);  

SELECT nm, occupation, age FROM customer C  
WHERE NOT EXISTS (SELECT * FROM Orders O WHERE C.cid = O.oid);    




