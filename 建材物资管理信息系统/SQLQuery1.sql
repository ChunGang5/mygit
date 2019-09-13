--create table "仓库信息表(Import)" 
--(
--   depotID              varchar(50)                    not null,
--   userID               varchar(20)                    null,
--   depotName            varchar(50)                    null,
--   user_ID              varchar(50)                    null,
--   constraint "PK_仓库信息表(IMPORT)" primary key (depotID)
--);


--create table "供应商(Prodcom)" 
--(
--   proID                varchar(50)                    not null,
--   proName              varchar(50)                    null,
--   pro__address         varchar(100)                   not null,
--   postalcode           varchar(20)                    not null,
--   pro_telephone        varchar(50)                    not null,
--   constraint "PK_供应商(PRODCOM)" primary key (proID)
--);


--create table 员工表_User 
--(
--   userID               varchar(20)                    not null,
--   userName             varchar(50)                    not null,
--   sex                  varchar(10)                    not null,
--   department           varchar(50)                    not null,
--   mima                 varchar(50)                    not null,
--   user_address         varchar(20)                    null,
--   user_telephone       varchar(20)                    null,
--   constraint PK_员工表_USER primary key (userID)
--);


--create table "客户表(Custopmer)" 
--(
--   cusID                varchar(50)                    not null,
--   cusName              varchar(50)                    null,
--   company              varchar(50)                    not null,
--   cus_address          char(10)                       null,
--   cus_telephone        char(10)                       null,
--   constraint "PK_客户表(CUSTOPMER)" primary key (cusID)
--);


--create table "物品信息表(Wp)" 
--(
--   wpID                 varchar(50)                    not null,
--   userID               varchar(20)                    null,
--   wp_type              varchar(50)                    null,
--   price                float(50)                      not null,
--   number               integer                        not null,
--   constraint "PK_物品信息表(WP)" primary key (wpID)
--);

--create table "销售关系表(sell)"
--(
--   wpID                 varchar(50)                    not null,
--   cusID                varchar(50)                    not null,
--   constraint PK_RELATIONSHIP_2 primary key (wpID, cusID)
--);


--create table "库存信息表(storage)"
--(
--   wpID                 varchar(50)                    not null,
--   depotID              varchar(50)                    not null,
--   constraint PK_RELATIONSHIP_5 primary key (wpID, depotID)
--);


--create table  "供应信息表(provide)"
--(
--   proID                varchar(50)                    not null,
--   wpID                 varchar(50)                    not null,
--   constraint PK_RELATIONSHIP_3 primary key (proID, wpID)
);

--创建索引
--create unique index 员工表_User_PK on 员工表_User (
--userID ASC
--);



--create unique index "物品信息表(Wp)_PK" on "物品信息表(Wp)" (
--wpID ASC
--);


--4.创建存储过程
--create procedure yuangong
--@userID char (4)
--as 
--select *
--from _User
--where _User.userID = @userID



);




--create procedure wupin
--@userID char (10)
--as 
--select Wp.wpID ,wp_Name ,Price ,number,Storage.depotID,Import.userID
--from Wp,Storage,Import
--where Wp.wpID =Storage.wpID and Storage.depotID =IMport.depotID and Import.userID=@userID



--测试数据

--测试员工信息管理

查询
--select *
--from _User
--where userID=001


--select department
--from _User
--where userID=001
插入
--insert 
--into _User(userID,userName,sex,department,mima,user_address,user_telephone)
--values('004','吴延江','男','仓储部','yyccgg.88','陕西省延安市延川县','14712568945');

删除
--delete
--from _User
--where userName='吴延江'
--update _User
--set userName='王慧敏'
--where userName='裴南韦'


测试物品信息表

查询
--select *
--from Import,storage,Wp
--where Import.depotID=storage.depotID and
--storage.wpID=Wp.wpID
--and Import.depotID='d001'


测试仓库表
----select *
----from Import


----delete
----from Import
----where depotID='d004'

----insert
----into Import(depotID,depotName)
----values ('d004','无可奈何仓')


测试视图1
----select *
----from v1

----select *
----from v2
测试供应商
----select *
----from Prodcom
----where proID='p001'



测试供应商
----insert
----into Prodcom(proID,proName,pro_telephone,pro__address,postalcode)
----values ('p015','延江建材公司','15178956452','襄阳市','712500')


----delete
----from Prodcom
----where proID='p015'

测试触发器
--create trigger tri_wprk
--on Wp
--for insert
--as 
--update Wp set number=Wp.number+inserted.number
--from Wp,inserted
--where 
--Wp.wp_Name=inserted.wp_Name



--create trigger tri_wpck
--on Wp
--for insert
--as 
--update Wp set number=Wp.number-inserted.number
--from Wp,inserted
--where 
--Wp.wpID=inserted.wpID
