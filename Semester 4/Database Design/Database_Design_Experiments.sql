drop table CD;
drop table BK;
drop table Product_Info;
drop table Region;

/*Experiment 1*/
create table Product_Info(Publisher varchar(20), Prod_No varchar(20), Type char(2));
create table BK(Prod_No varchar(20), Price number(5), Pages number(5), Edition varchar(20), Sales number(20));
create table CD(Prod_No varchar(20), Price number(5), Capacity number(10), Edition varchar(20), Sales number(20));
create table Region(R_Name varchar(20), Sales number(20));
insert into Product_Info(Publisher, Prod_No, Type) values ('PEARSON','BN111','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('McGrawHill','BE222','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('McGrawHill','CE213','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('Wiley','CW311','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('Wiley','BW324','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('PEARSON','CS114','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('McGrawHill','CS223','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('Wiley','BS334','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('PEARSON','BS113','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('PEARSON','BN113','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('Wiley','BW334','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('McGrawHill','CS214','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('Wiley','CW315','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('Weka','BE412','BK');
insert into Product_Info(Publisher, Prod_No, Type) values ('Weka','CS423','CD');
insert into Product_Info(Publisher, Prod_No, Type) values ('Weka','BE423','BK');
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BN111',789,500,'FIRST',3);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BE222',500,670,'SECOND',12);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BW324',1200,590,'SECOND',8);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BS334',346,780,'THIIRD',14);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BS113',954,1150,'FIRST',2);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BN113',600,1150,'FIRST',4);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BW334',1100,600,'THIRD',5);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BE412',250,340,'FIRST',1);
insert into BK(Prod_No,Price,Pages,Edition,Sales) values ('BE423',160,460,'FIRST',2);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CE213',150,500,'FIRST',5);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CW311',90,700,'FIRST',10);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CS114',100,400,'FIRST',8);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CS223',250,700,'SECOND',12);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CS214',90,300,'FIRST',1);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CW315',75,250,'FIRST',1);
insert into CD(Prod_No,Price,Capacity,Edition,Sales) values ('CS423',99,450,'SECOND',1);
insert into Region(R_Name,Sales) values ('NORTH',5);
insert into Region(R_Name,Sales) values ('SOUTH',7);
insert into Region(R_Name,Sales) values ('EAST',8);
insert into Region(R_Name,Sales) values ('WEST',12);
alter table Product_Info modify (Type NOT NULL);
alter table BK modify Edition DEFAULT 'FIRST';
alter table Product_Info add primary key (Prod_No);
alter table BK add primary key (Prod_No);
alter table CD add primary key (Prod_No);
alter table Region add primary key (R_Name);
alter table BK add foreign key (Prod_No) references Product_Info(Prod_No);
alter table CD add foreign key (Prod_No) references Product_Info(Prod_No) on delete cascade; 
alter table Product_Info add check (Type in ('BK','CD'));
alter table BK add check (Price>0);
alter table CD add check (Price>0);
select * from CD;
select * from Product_Info;
select * from BK;
select * from Region;

/*Experiment 2*/
UPDATE BK set Price=Price+(Price*0.10) where Edition = 'SECOND';
select * from BK where Edition = 'SECOND';
UPDATE BK set Price=Price+(Price*0.05) where Edition = 'THIRD';
select * from BK where Edition = 'THIRD';
UPDATE BK set Price=Price+(Price*0.08) where Edition = 'FIRST';
select * from BK where Edition = 'FIRST';
UPDATE CD set Price=Price+(Price*0.745) where Edition = 'SECOND' and Capacity >= 400;
select * from CD where Edition = 'SECOND' and Capacity >= 400;
DELETE FROM CD WHERE Capacity < 400;
SELECT * FROM CD;
update Product_Info set Publisher = 'Wiley' where Publisher = 'Weka';
select * from Product_Info;
select * from CD where Sales > 10 and Edition = 'SECOND';
select * from BK where Price > 1000;
select * from Product_Info where Publisher = 'Wiley';
create table Type_Info as select Prod_No,type from Product_Info where 1 = 2;
select * from Type_Info;
insert into Type_Info select Prod_No, Type from Product_Info;
select * from Type_Info;
alter table Region add R_Code varchar2(8);
alter table Region add unique(R_Code);
select * from Region;
delete from Type_Info;
select * from Type_Info;
drop table Type_Info;
select * from Type_Info;

/*Experiment 3*/
select * from BK where (Pages=500 or Pages=600) and (Price >=700);
select * from CD where Prod_No NOT IN ('CW315','CW311');
select * from BK ORDER BY Sales ;
select * from BK ORDER BY Sales  DESC ;
select Publisher from Product_Info where Prod_No LIKE 'B%';
select * from BK where Edition='FIRST';
select * from CD where Price between 90 and 100;
select * from BK where Price*Sales+Pages<4500;
select * from BK where Price>500 or Price=200;
select * from CD where Price between 100 and 2000;
select * from CD where Price in (150,100);
select max(Sales) from CD;
select 2*Price from CD;
select DISTINCT Capacity from CD;
Drop table Details;
Drop table Sales_Men;
create table Sales_Men(Name varchar2(20),Category varchar2(20), Region varchar2(20), Phone varchar2(20));
insert into Sales_Men values('JONES','Good','NORTH','91-0437-77651');
insert into Sales_Men values('JOHN PEARSON','Poor','SOUTH','91-0426-98721');
insert into Sales_Men values('HELEN BRANDT','Excellent','EAST','91-0435-33333');
insert into Sales_Men values('KEN','Excellent','WEST','91-0453-98765');
insert into Sales_Men values('JOHN WOOD','Poor','NORTH','91-0345-34565');
insert into Sales_Men values('VICTORIA LYNN','Good','SOUTH','91-0234-98723');
insert into Sales_Men values('ADAH TALBOT','Good','EAST','91-0652-66544');
insert into Sales_Men values('ELBERT LOWELL','Excellent','WEST','91-0433-90875');
insert into Sales_Men values('WILFRED LOWELL','Good','SOUTH','91-0213-98723');
insert into Sales_Men values('ANAND KUMAR','Excellent','EAST','91-0441-98123');
insert into Sales_Men values('JACKSON','Poor','WEST','91-0543-90873');
create table Details(Name varchar2(20), Age number(3));
insert into Details(Name,Age) values('JONES',33);
insert into Details(Name,Age) values('JOHN PEARSON',35);
insert into Details(Name,Age) values('HELEN BRANDT',42);
insert into Details(Name,Age) values('KEN',32);
insert into Details(Name,Age) values('JOHN WOOD',28);
insert into Details(Name,Age) values('VICTORIA LYNN',38);
insert into Details(Name,Age) values('ADAH TALBOT',41);
insert into Details(Name,Age) values('ELBERT LOWELL',34);
insert into Details(Name,Age) values('WILFRED LOWELL',34);
insert into Details(Name,Age) values('ANAND KUMAR',36);
insert into Details(Name,Age) values('JACKSON',23);
select * from Details;
select * from Sales_Men;
select Name from Sales_Men UNION select Name from Details;
select Name from Sales_Men UNION ALL select Name from Details;
select Name from Sales_Men INTERSECT select Name from Details;
select Name from Details INTERSECT select Name from Sales_Men;
select Name from Sales_Men MINUS select Name from Details;
select Name from Details MINUS select Name from Sales_Men;

/*Experiment 4 a */
select max(Price)-min(Price) from BK;
select stddev(Price),variance(Price) from CD;
select Name,concat('--',Age) as Age from Details;
select lower(Prod_No),round(Price,-2) from BK;
select * from Sales_Men order by length(Name);
select substr(Phone,9,12) from Sales_Men;
Select Name,instr(Name,'A') from Details;
select substr(Name,(instr(Name,' ',1,1)+1),length(Name)) from Sales_Men;

/*Experiment 4 b */
select concat(substr(Name,(instr(Name,' ',1,1)+1),length(Name)),substr(Name,1,(instr(Name,' ',1,1)-1))) from Sales_Men;
select substr(Name,(instr(Name,' ',1,1)+1),length(Name)) || substr(Name,1,(instr(Name,' ',1,1)-1)) from Sales_Men;
select substr(Name,(instr(Name,' ',1,1)+1),length(Name)) as One,substr(Name,1,(instr(Name,' ',1,1)-1)) as One from Sales_Men;
alter table Sales_Men add date_of_joining date;
update Sales_Men set date_of_joining = '01-JAN-2003';
select to_char(date_of_joining,'Mon-YYYY') from sales_men;
select to_char(date_of_joining,'Month DD yyyy') from sales_men;
select to_char(date_of_joining,'DD-MM-YYYY HH:MM:SS') from sales_men;
alter session set time_zone='GMT';
alter session set time_zone='EST';
select replace('JACK and JUE','J','BL') from Sales_Men;
select name, DECODE(Category,'Good',5,'Poor',10,'Excellent',15,0) result from Sales_Men;    /*If Category == given values return the immediate right parameter.The last parameter is the default value */
select translate('[a+6]*{9-c}','[]{}','()()') from Sales_Men;   /*Translates the input i.e first paramter by replacing the second paramter inputs with the third paramter, if run out of replcements, second paramter in input string is dropped */
select to_char(Price,'L9,999.00','NLS_Currency=Rs.') from BK;
select to_char(Price,'L9,999.00','NLS_Currency=$.') from BK;
select to_char(Price,'$9,999.00') from BK;
select * from CD where Price = (select Price from BK where Prod_No in (select Prod_No from Product_Info where Publisher='McGrawHill'));
select * from CD where Capacity=(select capacity from CD where Prod_No='CS223');
select Prod_No,Price from BK where Price>(select avg(Price) from CD);
select edition,count(Prod_No) from BK group by Edition;
select sales,count(Prod_No) from CD group by Sales;
select edition from CD group by edition having sum(Sales)>8;

/*Experiment 5*/
select * from CD,BK;
select * from CD,BK, Product_Info;
select Sales_Men.Name,Age,Category from Sales_Men,Details where Sales_Men.Name=Details.Name and Age>30;    /*Important syntax*/
select * from CD,BK where CD.Price> BK.Price;
select distinct(f.Prod_No) from Product_Info e inner join Product_Info f on e.Publisher = f.Publisher; /*select distinct(a.Prod_No) as Product_Number from Product_Info a,Product_Info b where a.Publisher=b.Publisher;*/
select Publisher,Product_Info.Prod_No,Price from BK inner join Product_Info on BK.Prod_No = Product_Info.Prod_No;
select CD.Prod_No,BK.Prod_No from BK inner join CD on BK.Price = CD.Price;
select * from BK left outer join CD on CD.Price=BK.Price;
select * from BK right outer join CD on CD.Price=BK.Price;
select * from BK full outer join CD on CD.Price=BK.Price;
select nvl(CD.Prod_No,0) from BK full outer join CD on BK.Price=CD.Price;
select nvl(BK.Prod_No,0) from BK full outer join CD on BK.Price=CD.Price;

/*Experiment 6*/
drop view Price_Info;
drop view Price300;
drop index Sales_Men_Name;
drop index Sales_Men_Category;
drop index Sales_Men_Name_UPPER;
drop index Sales_Men_Name_LOWER;
drop index Sales_Men_Name_INITCAP;
drop synonym SM20;
drop table BK_TEMP;
create view Price_Info as select a.Prod_No, Publisher, Price from BK a inner join Product_Info b on a.Prod_No=b.Prod_No;
select * from Price_Info;
create view Price300 as select * from BK where Price>300;
select * from Price300;
update Price300 set Price=560 where Price=550;
update Price_Info set Price=570 where Price=560;
update BK set Price=550 where Price=570;
delete from Price300 where Price=550;
delete from Price_Info where Price=346;
create unique index Sales_Men_Name on Sales_Men(Name);
create bitmap index Sales_Men_Category on Sales_Men(Category);
create index Sales_Men_Name_UPPER on Sales_Men(UPPER(Name));
create index Sales_Men_Name_LOWER on Sales_Men(LOWER(Name));
create index Sales_Men_Name_INITCAP on Sales_Men(INITCAP(Name));
select index_name, index_type, visibility, status from all_indexes where table_name = 'Sales_Men';  /*For Sales_Men, index can't be viewed through this command. Works for BK, CD....*/
select index_name, index_type, visibility, status from all_indexes where table_name = 'SALES_MEN';  /*For row recovery from pre-defined tables or databases, Uppercase to be used since it defines everything (including name) in UPPERCASE*/
create sequence simple start with 100 increment by 1 nocache nocycle;
select simple.nextval from BK_TEMP;
create sequence reversesimple maxvalue 100 start with 100 increment by -1 nocache nocycle;
select reversesimple.nextval from BK_TEMP;
create table BK_TEMP as (select * from BK);
insert into BK_TEMP values('BE411',reversesimple.nextval,reversesimple.currval,'FIRST',10);
update BK_TEMP set Sales=simple.nextval;
delete from BK_TEMP where Price=reversesimple.nextval;
select * from BK_TEMP where Price<reversesimple.nextval;
select reversesimple.nextval from (select * from BK_TEMP where Price=200);
select reversesimple.nextval from BK_TEMP where edition='FIRST';
create synonym SM20 for Sales_Men;
select * from SM20;
select * from BK_TEMP;



