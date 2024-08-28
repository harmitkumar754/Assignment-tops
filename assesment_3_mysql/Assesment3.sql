create schema assessment;

create table salesman(salesman_id  int primary key ,s_name varchar(30),city varchar(30),commission float);
insert into salesman values(5001,'James Hoog','New York',0.15);
insert into salesman values(5002,'Nail Knite','Paris',0.13);
insert into salesman values(5005,'Pit Alex','London',0.11);
insert into salesman values(5006,'Ms Lyon','Paris',0.14);
insert into salesman values(5007,'Paul Adam','Rome',0.13);
insert into salesman values(5003,'Lauson Hen','San Jose',0.12);

create table customer(customer_id int primary key,customer_name varchar(45) not null,city varchar(30) not null,grade int ,salesman_id int);
alter table customer add  foreign key(salesman_id) references salesman(salesman_id);
insert into customer values(3002,'Nick Rimando','New York',100,5001);
insert into customer values(3007,'Brad Davis','New York',200,5001);
insert into customer values(3005,'Graham Zusi','California',200,5002);
insert into customer values(3008,'Julian Green','London',300,5002);
insert into customer values(3004,'Fabian Johnson','Paris',300,5006);
insert into customer values(3009,'Geoff Cameron','Berlin',100,5003);
insert into customer values(3003,'Jozy Altidor','Moscow',200,5007);
insert into customer values(3001,'Brad Guzan','London',null,5005);


commit;

select customer.customer_name,customer.city,salesman.s_name,salesman.commission from customer left join salesman on customer.salesman_id=salesman.salesman_id;



