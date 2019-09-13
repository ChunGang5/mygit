/*==============================================================*/
/* DBMS name:      Sybase SQL Anywhere 12                       */
/* Created on:     2019/6/2 20:53:34                            */
/*==============================================================*/


if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_�ͻ���(CUST') then
    alter table Relationship_2
       delete foreign key "FK_RELATION_RELATIONS_�ͻ���(CUST"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP') then
    alter table Relationship_2
       delete foreign key "FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_��Ӧ��(PROD') then
    alter table Relationship_3
       delete foreign key "FK_RELATION_RELATIONS_��Ӧ��(PROD"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP') then
    alter table Relationship_3
       delete foreign key "FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_�ֿ���Ϣ��(IM') then
    alter table Relationship_5
       delete foreign key "FK_RELATION_RELATIONS_�ֿ���Ϣ��(IM"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP') then
    alter table Relationship_5
       delete foreign key "FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_�ֿ���Ϣ��(IM_RELATIONS_Ա����_USER') then
    alter table "�ֿ���Ϣ��(Import)"
       delete foreign key "FK_�ֿ���Ϣ��(IM_RELATIONS_Ա����_USER"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_��Ʒ��Ϣ��(WP_RELATIONS_Ա����_USER') then
    alter table "��Ʒ��Ϣ��(Wp)"
       delete foreign key "FK_��Ʒ��Ϣ��(WP_RELATIONS_Ա����_USER"
end if;

drop index if exists Relationship_2.Relationship_2_FK2;

drop index if exists Relationship_2.Relationship_2_FK;

drop index if exists Relationship_2.Relationship_2_PK;

drop table if exists Relationship_2;

drop index if exists Relationship_3.Relationship_3_FK2;

drop index if exists Relationship_3.Relationship_3_FK;

drop index if exists Relationship_3.Relationship_3_PK;

drop table if exists Relationship_3;

drop index if exists Relationship_5.Relationship_5_FK2;

drop index if exists Relationship_5.Relationship_5_FK;

drop index if exists Relationship_5.Relationship_5_PK;

drop table if exists Relationship_5;

drop index if exists "�ֿ���Ϣ��(Import)".Relationship_4_FK;

drop index if exists "�ֿ���Ϣ��(Import)"."�ֿ���Ϣ��(Import)_PK";

drop table if exists "�ֿ���Ϣ��(Import)";

drop index if exists "��Ӧ��(Prodcom)"."��Ӧ��(Prodcom)_PK";

drop table if exists "��Ӧ��(Prodcom)";

drop index if exists Ա����_User.Ա����_User_PK;

drop table if exists Ա����_User;

drop index if exists "�ͻ���(Custopmer)"."�ͻ���(Custopmer)_PK";

drop table if exists "�ͻ���(Custopmer)";

drop index if exists "��Ʒ��Ϣ��(Wp)".Relationship_6_FK;

drop index if exists "��Ʒ��Ϣ��(Wp)"."��Ʒ��Ϣ��(Wp)_PK";

drop table if exists "��Ʒ��Ϣ��(Wp)";

/*==============================================================*/
/* Table: Relationship_2                                        */
/*==============================================================*/
create table Relationship_2 
(
   wpID                 varchar(50)                    not null,
   cusID                varchar(50)                    not null,
   constraint PK_RELATIONSHIP_2 primary key (wpID, cusID)
);

/*==============================================================*/
/* Index: Relationship_2_PK                                     */
/*==============================================================*/
create unique index Relationship_2_PK on Relationship_2 (
wpID ASC,
cusID ASC
);

/*==============================================================*/
/* Index: Relationship_2_FK                                     */
/*==============================================================*/
create index Relationship_2_FK on Relationship_2 (
cusID ASC
);

/*==============================================================*/
/* Index: Relationship_2_FK2                                    */
/*==============================================================*/
create index Relationship_2_FK2 on Relationship_2 (
wpID ASC
);

/*==============================================================*/
/* Table: Relationship_3                                        */
/*==============================================================*/
create table Relationship_3 
(
   proID                varchar(50)                    not null,
   wpID                 varchar(50)                    not null,
   constraint PK_RELATIONSHIP_3 primary key (proID, wpID)
);

/*==============================================================*/
/* Index: Relationship_3_PK                                     */
/*==============================================================*/
create unique index Relationship_3_PK on Relationship_3 (
proID ASC,
wpID ASC
);

/*==============================================================*/
/* Index: Relationship_3_FK                                     */
/*==============================================================*/
create index Relationship_3_FK on Relationship_3 (
wpID ASC
);

/*==============================================================*/
/* Index: Relationship_3_FK2                                    */
/*==============================================================*/
create index Relationship_3_FK2 on Relationship_3 (
proID ASC
);

/*==============================================================*/
/* Table: Relationship_5                                        */
/*==============================================================*/
create table Relationship_5 
(
   wpID                 varchar(50)                    not null,
   depotID              varchar(50)                    not null,
   constraint PK_RELATIONSHIP_5 primary key (wpID, depotID)
);

/*==============================================================*/
/* Index: Relationship_5_PK                                     */
/*==============================================================*/
create unique index Relationship_5_PK on Relationship_5 (
wpID ASC,
depotID ASC
);

/*==============================================================*/
/* Index: Relationship_5_FK                                     */
/*==============================================================*/
create index Relationship_5_FK on Relationship_5 (
depotID ASC
);

/*==============================================================*/
/* Index: Relationship_5_FK2                                    */
/*==============================================================*/
create index Relationship_5_FK2 on Relationship_5 (
wpID ASC
);

/*==============================================================*/
/* Table: "�ֿ���Ϣ��(Import)"                                       */
/*==============================================================*/
create table "�ֿ���Ϣ��(Import)" 
(
   depotID              varchar(50)                    not null,
   userID               varchar(20)                    null,
   depotName            varchar(50)                    null,
   user_ID              varchar(50)                    null,
   constraint "PK_�ֿ���Ϣ��(IMPORT)" primary key (depotID)
);

/*==============================================================*/
/* Index: "�ֿ���Ϣ��(Import)_PK"                                    */
/*==============================================================*/
create unique index "�ֿ���Ϣ��(Import)_PK" on "�ֿ���Ϣ��(Import)" (
depotID ASC
);

/*==============================================================*/
/* Index: Relationship_4_FK                                     */
/*==============================================================*/
create index Relationship_4_FK on "�ֿ���Ϣ��(Import)" (
userID ASC
);

/*==============================================================*/
/* Table: "��Ӧ��(Prodcom)"                                        */
/*==============================================================*/
create table "��Ӧ��(Prodcom)" 
(
   proID                varchar(50)                    not null,
   proName              varchar(50)                    null,
   pro__address         varchar(100)                   not null,
   postalcode           varchar(20)                    not null,
   pro_telephone        varchar(50)                    not null,
   constraint "PK_��Ӧ��(PRODCOM)" primary key (proID)
);

/*==============================================================*/
/* Index: "��Ӧ��(Prodcom)_PK"                                     */
/*==============================================================*/
create unique index "��Ӧ��(Prodcom)_PK" on "��Ӧ��(Prodcom)" (
proID ASC
);

/*==============================================================*/
/* Table: Ա����_User                                              */
/*==============================================================*/
create table Ա����_User 
(
   userID               varchar(20)                    not null,
   userName             varchar(50)                    not null,
   sex                  varchar(10)                    not null,
   department           varchar(50)                    not null,
   mima                 varchar(50)                    not null,
   user_address         varchar(20)                    null,
   user_telephone       varchar(20)                    null,
   constraint PK_Ա����_USER primary key (userID)
);

/*==============================================================*/
/* Index: Ա����_User_PK                                           */
/*==============================================================*/
create unique index Ա����_User_PK on Ա����_User (
userID ASC
);

/*==============================================================*/
/* Table: "�ͻ���(Custopmer)"                                      */
/*==============================================================*/
create table "�ͻ���(Custopmer)" 
(
   cusID                varchar(50)                    not null,
   cusName              varchar(50)                    null,
   company              varchar(50)                    not null,
   cus_address          char(10)                       null,
   cus_telephone        char(10)                       null,
   constraint "PK_�ͻ���(CUSTOPMER)" primary key (cusID)
);

/*==============================================================*/
/* Index: "�ͻ���(Custopmer)_PK"                                   */
/*==============================================================*/
create unique index "�ͻ���(Custopmer)_PK" on "�ͻ���(Custopmer)" (
cusID ASC
);

/*==============================================================*/
/* Table: "��Ʒ��Ϣ��(Wp)"                                           */
/*==============================================================*/
create table "��Ʒ��Ϣ��(Wp)" 
(
   wpID                 varchar(50)                    not null,
   userID               varchar(20)                    null,
   wp_type              varchar(50)                    null,
   price                float(50)                      not null,
   number               integer                        not null,
   constraint "PK_��Ʒ��Ϣ��(WP)" primary key (wpID)
);

/*==============================================================*/
/* Index: "��Ʒ��Ϣ��(Wp)_PK"                                        */
/*==============================================================*/
create unique index "��Ʒ��Ϣ��(Wp)_PK" on "��Ʒ��Ϣ��(Wp)" (
wpID ASC
);

/*==============================================================*/
/* Index: Relationship_6_FK                                     */
/*==============================================================*/
create index Relationship_6_FK on "��Ʒ��Ϣ��(Wp)" (
userID ASC
);

alter table Relationship_2
   add constraint "FK_RELATION_RELATIONS_�ͻ���(CUST" foreign key (cusID)
      references "�ͻ���(Custopmer)" (cusID)
      on update restrict
      on delete restrict;

alter table Relationship_2
   add constraint "FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP" foreign key (wpID)
      references "��Ʒ��Ϣ��(Wp)" (wpID)
      on update restrict
      on delete restrict;

alter table Relationship_3
   add constraint "FK_RELATION_RELATIONS_��Ӧ��(PROD" foreign key (proID)
      references "��Ӧ��(Prodcom)" (proID)
      on update restrict
      on delete restrict;

alter table Relationship_3
   add constraint "FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP" foreign key (wpID)
      references "��Ʒ��Ϣ��(Wp)" (wpID)
      on update restrict
      on delete restrict;

alter table Relationship_5
   add constraint "FK_RELATION_RELATIONS_�ֿ���Ϣ��(IM" foreign key (depotID)
      references "�ֿ���Ϣ��(Import)" (depotID)
      on update restrict
      on delete restrict;

alter table Relationship_5
   add constraint "FK_RELATION_RELATIONS_��Ʒ��Ϣ��(WP" foreign key (wpID)
      references "��Ʒ��Ϣ��(Wp)" (wpID)
      on update restrict
      on delete restrict;

alter table "�ֿ���Ϣ��(Import)"
   add constraint "FK_�ֿ���Ϣ��(IM_RELATIONS_Ա����_USER" foreign key (userID)
      references Ա����_User (userID)
      on update restrict
      on delete restrict;

alter table "��Ʒ��Ϣ��(Wp)"
   add constraint "FK_��Ʒ��Ϣ��(WP_RELATIONS_Ա����_USER" foreign key (userID)
      references Ա����_User (userID)
      on update restrict
      on delete restrict;

