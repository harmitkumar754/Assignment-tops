create schema assignment;
/*************************************************** Question= 1 ***************************************************/
-- Create Table Name : Student and Exam
create table student(rollno int primary key ,name varchar(45),branch varchar(45));

create table exam (rollno int,s_code varchar(20),marks int,p_code varchar(20),foreign key(rollno) references student(rollno));

insert into student values(1,'Jay','Computer Scince');
insert into student values(2,'Suhani','Electronic and Com');
insert into student values(3,'kriti','Electronic and Com');

insert into exam values(1,'CS11',50,'CS');
insert into exam values(1,'CS12',60,'CS');
insert into exam values(2,'EC101',66,'EC');
insert into exam values(2,'EC102',70,'EC');
insert into exam values(3,'EC101',45,'EC');
insert into exam values(3,'EC102',50,'EC');


    select * from student;
    select * from exam;
    
/*************************************************** Question= 2 ***************************************************/
    -- Create table given below: Employee and IncentiveTable
 create table Employee (employee_id int primary key,first_name varchar(45),last_name varchar(45),salary int ,joining_date varchar(50),department varchar(45)); 
 
 create table Incentive (employee_ref_id int,incentive_date varchar(10),incentive_amount int,foreign key(employee_ref_id) references Employee(employee_id));
 
 insert into Employee values (1,'John','Abraham',1000000,'01-JAN-13 12.00.00 AM','Banking');
 insert into Employee values (2,'Michael','Clarke',800000,'01-JAN-13 12.00.00 AM','Insurance');
 insert into Employee values (3,'Roy','Thomas',700000,'01-FEB-13 12.00.00 AM','Banking');
 insert into Employee values (4,'Tom','Jose',600000,'01-FEB-13 12.00.00 AM','Insurance');
 insert into Employee values (5,'Jerry','Pinto',650000,'01-FEB-13 12.00.00 AM','Insurance');
 insert into Employee values (6,'Philip','Mathew',750000,'01-JAN-13 12.00.00 AM','Services');
 insert into Employee values (7,'TestName1','123',650000,'01-JAN-13 12.00.00 AM','Services');
 insert into Employee values (8,'TestName2','Lname%',600000,'01-FEB-13 12.00.00 AM','Insurance');

 insert into Incentive values(1,'01-FEB-13',5000);
 insert into Incentive values(2,'01-FEB-13',3000);
 insert into Incentive values(3,'01-FEB-13',4000);
 insert into Incentive values(1,'01-JAN-13',4500);
 insert into Incentive values(2,'01-JAN-13',3500);
 
  select * from Employee;
  select * from Incentive;
 /*************************************************** Question= 3 ***************************************************/
 -- Get First_Name from employee table using Tom name “Employee Name”.
 select first_name as EmployeeName from Employee;
 
 /*************************************************** Question= 4 ***************************************************/
 -- Get FIRST_NAME, Joining Date, and Salary from employee table.
 select first_name,joining_date,salary from Employee;

/*************************************************** Question= 5 ***************************************************/
-- Get all employee details from the employee table order by First_Name
 select * from Employee order by first_name ;
 select * from Employee order by salary desc ;
 
 /*************************************************** Question= 6 ***************************************************/
 -- Get employee details from employee table whose first name contains ‘J’.
 select * from Employee where first_name like '%j%';

/*************************************************** Question= 7 And 8 ***************************************************/
-- Get department wise maximum salary from employee table order by salary ascending?
select department, MAX(salary) as max_salary from employee group by department ORDER BY max_salary;

/*************************************************** Question= 9 ***************************************************/
/* Select first_name, incentive amount from employee and incentives table 
for those employees who have incentives and incentive amount greater than 
3000 */
select employee.first_name,Incentive.incentive_amount from employee  join Incentive on employee.employee_id =Incentive.employee_ref_id where Incentive.incentive_amount>3000;

/*************************************************** Question= 10 ***************************************************/
-- Create After Insert trigger on Employee table which insert records in viewtable
create table viewtable as select * from Employee;

CREATE TRIGGER copy_data
AFTER INSERT ON Employee
FOR EACH ROW
    INSERT INTO viewtable VALUES (NEW.employee_id, NEW.first_name, NEW.last_name, NEW.salary, NEW.joining_date, NEW.department);
-- testing
insert into Employee values (9,'TestName3','Lname3',69999,'01-FEB-13 12.00.00 AM','Insurance');
select * from employee;
select * from viewtable;

/*************************************************** Question= 11 ***************************************************/
create table saleperson(sno int primary key,sname varchar(45),city varchar(30),comm float);
 
create table customer(cnm int primary key,cname varchar(45),city varchar(30),rating int,sno int  references saleperson(sno));

insert into saleperson values(1001,'Peel','London',0.12);
insert into saleperson values(1002,'Serres','San Jose',0.13);
insert into saleperson values(1004,'Motika','London',0.11);
insert into saleperson values(1007,'Rafkin','Barcelona',0.15);
insert into saleperson values(1003,'Axelrod','New York',0.1);

insert into customer values(201,'Hoffman','London',100,1001);
insert into customer values(202,'Giovanne','Roe',200,1003);
insert into customer values(203,'Liu','San Jose',300,1002);
insert into customer values(204,'Grass','Barcelona',100,1002);
insert into customer values(206,'Clemens','London',300,1007);
insert into customer values(207,'Pereira','Roe',100,1004);

/*************************************************** Question= 12 ***************************************************/
-- Retrieve the below data from above table 
select * from saleperson;
select * from customer;

/*************************************************** Question= 13 ***************************************************/
-- All orders for more than $1000. 
   -- NOTE: order column not available in customer table only show not runnable;
  -- select * from customer where order>1000;

/*************************************************** Question= 14 ***************************************************/
-- Names and cities of all salespeople in London with commission above 0.12 )
select sname,city from saleperson where city='London' and comm>0.12;

/*************************************************** Question= 15 ***************************************************/
-- All salespeople either in Barcelona or in London
select * from saleperson where city = 'London' or city = 'Barcelona';

/*************************************************** Question= 16 ***************************************************/
-- All salespeople with commission between 0.10 and 0.12. (Boundary valuesshould be excluded).
select * from saleperson where comm >=0.10 and comm <=0.12;

/*************************************************** Question= 17 ***************************************************/
-- All customers excluding those with rating <= 100 unless they are located in Roe)
  select * from customer where rating >=100 and city='roe';
/*************************************************** Question= 18 ***************************************************/
-- Write a SQL statement that displays all the information about all salespeople
   create table salespeople(salesman_id int, name varchar(45), city varchar(45), commission float);
   INSERT INTO salespeople VALUES (5001, 'James Hoog', 'New York', 0.15);
   INSERT INTO salespeople VALUES (5002, 'Nail Knite', 'Paris', 0.13);
   INSERT INTO salespeople VALUES(5005, 'Pit Alex', 'London', 0.11);
   INSERT INTO salespeople VALUES (5006, 'Mc Lyon', 'Paris', 0.14);
   INSERT INTO salespeople VALUES(5007, 'Paul Adam', 'Rome', 0.13);
   INSERT INTO salespeople VALUES(5003, 'Lauson Hen', 'San Jose', 0.12);

	SELECT * FROM salespeople;

/*************************************************** Question= 19 ***************************************************/
/*From the following table, write a SQL query to find orders that are 
delivered by a salesperson with ID. 5001. Return ord_no, ord_date, 
purch_amt.*/
CREATE TABLE orders (
    ord_no INT,
    purch_amt float,
    ord_date DATE,
    customer_id INT,
    salesman_id INT
);

INSERT INTO orders 
VALUES (70001, 150.5, '2012-10-05', 3005, 5002),
       (70009, 270.65, '2012-09-10', 3001, 5005),
       (70002, 65.26, '2012-10-05', 3002, 5001),
       (70004, 110.5, '2012-08-17', 3009, 5003),
       (70007, 948.5, '2012-09-10', 3005, 5002),
       (70005, 2400.6, '2012-07-27', 3007, 5001),
       (70008, 5760, '2012-09-10', 3002, 5001),
       (70010, 1983.43, '2012-10-10', 3004, 5006),
       (70003, 2480.4, '2012-10-10', 3009, 5003),
       (70012, 250.45, '2012-06-27', 3008, 5002),
       (70011, 75.29, '2012-08-17', 3003, 5007),
       (70013, 3045.6, '2012-04-25', 3002, 5001);
       
       select ord_no,ord_date,purch_amt from orders where salesman_id=5001;

/*************************************************** Question= 20 ***************************************************/
/*.From the following table, write a SQL query to select a range of 
products whose price is in the range Rs.200 to Rs.600. Begin and end 
values are included. Return pro_id, pro_name, pro_price, and pro_com.*/
CREATE TABLE item_mast (
    pro_id INT PRIMARY KEY,
    pro_name VARCHAR(50),
    pro_price float,
    pro_com INT
);
INSERT INTO item_mast VALUES
(101, 'Mother Board', 3200.00, 15),
(102, 'Key Board', 450.00, 16),
(103, 'ZIP drive', 250.00, 14),
(104, 'Speaker', 550.00, 16),
(105, 'Monitor', 5000.00, 11),
(106, 'DVD drive', 900.00, 12),
(107, 'CD drive', 800.00, 12),
(108, 'Printer', 2600.00, 13),
(109, 'Refill cartridge',350.00,13),
(110, 'Mouse',250.00, 12);

SELECT * FROM item_mast WHERE pro_price BETWEEN 200 AND 600;

/*************************************************** Question= 21 ***************************************************/
/*From the following table, write a SQL query to calculate the average price 
for a manufacturer code of 16. Return avg.*/
SELECT AVG(pro_price) AS avg FROM item_mast WHERE pro_com = 16;

/*************************************************** Question= 22 ***************************************************/
/*From the following table, write a SQL query to display the pro_name as 
'Item Name' and pro_priceas 'Price in Rs.'*/
SELECT pro_name AS 'Item Name', pro_price AS 'Price in Rs.' FROM item_mast;

/*************************************************** Question= 23 ***************************************************/
/*From the following table, write a SQL query to find the items whose prices
are higher than or equal to $250. Order the result by product price in 
descending, then product name in ascending. Return pro_name and 
pro_price.*/
SELECT pro_name, pro_price FROM item_mast WHERE pro_price >= 250 ORDER BY pro_price DESC, pro_name ASC;

/*************************************************** Question= 24 ***************************************************/
/*.From the following table, write a SQL query to calculate average price of the 
items for each company. Return average price and companycode.*/
SELECT pro_com AS companycode, AVG(pro_price) AS average_price FROM item_mast GROUP BY pro_com;

commit;

