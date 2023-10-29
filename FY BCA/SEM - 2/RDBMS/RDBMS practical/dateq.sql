
--Date Function --
-- Add months on order_date column --

select sys_date() from dual;

select add_months(order_date,5) as addmonths from orders;

select last_day(order_date) as lastdate from orders;


select months_between(order_date,'01-jan-2022') as monthmid from orders;

select next_day(order_date,'monday') as monthmid from orders;
describe orders;

select concat(oid, to_char(order_date)) as new from orders;


select * from customer;


-- Character function--
select to_char(order_date) as new from orders;






