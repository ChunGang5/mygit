--create table "�ֿ���Ϣ��(Import)" 
--(
--   depotID              varchar(50)                    not null,
--   userID               varchar(20)                    null,
--   depotName            varchar(50)                    null,
--   user_ID              varchar(50)                    null,
--   constraint "PK_�ֿ���Ϣ��(IMPORT)" primary key (depotID)
--);


--create table "��Ӧ��(Prodcom)" 
--(
--   proID                varchar(50)                    not null,
--   proName              varchar(50)                    null,
--   pro__address         varchar(100)                   not null,
--   postalcode           varchar(20)                    not null,
--   pro_telephone        varchar(50)                    not null,
--   constraint "PK_��Ӧ��(PRODCOM)" primary key (proID)
--);


--create table Ա����_User 
--(
--   userID               varchar(20)                    not null,
--   userName             varchar(50)                    not null,
--   sex                  varchar(10)                    not null,
--   department           varchar(50)                    not null,
--   mima                 varchar(50)                    not null,
--   user_address         varchar(20)                    null,
--   user_telephone       varchar(20)                    null,
--   constraint PK_Ա����_USER primary key (userID)
--);


--create table "�ͻ���(Custopmer)" 
--(
--   cusID                varchar(50)                    not null,
--   cusName              varchar(50)                    null,
--   company              varchar(50)                    not null,
--   cus_address          char(10)                       null,
--   cus_telephone        char(10)                       null,
--   constraint "PK_�ͻ���(CUSTOPMER)" primary key (cusID)
--);


--create table "��Ʒ��Ϣ��(Wp)" 
--(
--   wpID                 varchar(50)                    not null,
--   userID               varchar(20)                    null,
--   wp_type              varchar(50)                    null,
--   price                float(50)                      not null,
--   number               integer                        not null,
--   constraint "PK_��Ʒ��Ϣ��(WP)" primary key (wpID)
--);

--create table "���۹�ϵ��(sell)"
--(
--   wpID                 varchar(50)                    not null,
--   cusID                varchar(50)                    not null,
--   constraint PK_RELATIONSHIP_2 primary key (wpID, cusID)
--);


--create table "�����Ϣ��(storage)"
--(
--   wpID                 varchar(50)                    not null,
--   depotID              varchar(50)                    not null,
--   constraint PK_RELATIONSHIP_5 primary key (wpID, depotID)
--);


--create table  "��Ӧ��Ϣ��(provide)"
--(
--   proID                varchar(50)                    not null,
--   wpID                 varchar(50)                    not null,
--   constraint PK_RELATIONSHIP_3 primary key (proID, wpID)
);

--��������
--create unique index Ա����_User_PK on Ա����_User (
--userID ASC
--);



--create unique index "��Ʒ��Ϣ��(Wp)_PK" on "��Ʒ��Ϣ��(Wp)" (
--wpID ASC
--);


--4.�����洢����
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



--��������

--����Ա����Ϣ����

��ѯ
--select *
--from _User
--where userID=001


--select department
--from _User
--where userID=001
����
--insert 
--into _User(userID,userName,sex,department,mima,user_address,user_telephone)
--values('004','���ӽ�','��','�ִ���','yyccgg.88','����ʡ�Ӱ����Ӵ���','14712568945');

ɾ��
--delete
--from _User
--where userName='���ӽ�'
--update _User
--set userName='������'
--where userName='����Τ'


������Ʒ��Ϣ��

��ѯ
--select *
--from Import,storage,Wp
--where Import.depotID=storage.depotID and
--storage.wpID=Wp.wpID
--and Import.depotID='d001'


���Բֿ��
----select *
----from Import


----delete
----from Import
----where depotID='d004'

----insert
----into Import(depotID,depotName)
----values ('d004','�޿��κβ�')


������ͼ1
----select *
----from v1

----select *
----from v2
���Թ�Ӧ��
----select *
----from Prodcom
----where proID='p001'



���Թ�Ӧ��
----insert
----into Prodcom(proID,proName,pro_telephone,pro__address,postalcode)
----values ('p015','�ӽ����Ĺ�˾','15178956452','������','712500')


----delete
----from Prodcom
----where proID='p015'

���Դ�����
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
