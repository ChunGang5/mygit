/*==============================================================*/
/* DBMS name:      Sybase SQL Anywhere 12                       */
/* Created on:     2019/6/2 20:53:34                            */
/*==============================================================*/


if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_客户表(CUST') then
    alter table Relationship_2
       delete foreign key "FK_RELATION_RELATIONS_客户表(CUST"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_物品信息表(WP') then
    alter table Relationship_2
       delete foreign key "FK_RELATION_RELATIONS_物品信息表(WP"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_供应商(PROD') then
    alter table Relationship_3
       delete foreign key "FK_RELATION_RELATIONS_供应商(PROD"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_物品信息表(WP') then
    alter table Relationship_3
       delete foreign key "FK_RELATION_RELATIONS_物品信息表(WP"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_仓库信息表(IM') then
    alter table Relationship_5
       delete foreign key "FK_RELATION_RELATIONS_仓库信息表(IM"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_RELATION_RELATIONS_物品信息表(WP') then
    alter table Relationship_5
       delete foreign key "FK_RELATION_RELATIONS_物品信息表(WP"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_仓库信息表(IM_RELATIONS_员工表_USER') then
    alter table "仓库信息表(Import)"
       delete foreign key "FK_仓库信息表(IM_RELATIONS_员工表_USER"
end if;

if exists(select 1 from sys.sysforeignkey where role='FK_物品信息表(WP_RELATIONS_员工表_USER') then
    alter table "物品信息表(Wp)"
       delete foreign key "FK_物品信息表(WP_RELATIONS_员工表_USER"
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

drop index if exists "仓库信息表(Import)".Relationship_4_FK;

drop index if exists "仓库信息表(Import)"."仓库信息表(Import)_PK";

drop table if exists "仓库信息表(Import)";

drop index if exists "供应商(Prodcom)"."供应商(Prodcom)_PK";

drop table if exists "供应商(Prodcom)";

drop index if exists 员工表_User.员工表_User_PK;

drop table if exists 员工表_User;

drop index if exists "客户表(Custopmer)"."客户表(Custopmer)_PK";

drop table if exists "客户表(Custopmer)";

drop index if exists "物品信息表(Wp)".Relationship_6_FK;

drop index if exists "物品信息表(Wp)"."物品信息表(Wp)_PK";

drop table if exists "物品信息表(Wp)";

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
/* Table: "仓库信息表(Import)"                                       */
/*==============================================================*/
create table "仓库信息表(Import)" 
(
   depotID              varchar(50)                    not null,
   userID               varchar(20)                    null,
   depotName            varchar(50)                    null,
   user_ID              varchar(50)                    null,
   constraint "PK_仓库信息表(IMPORT)" primary key (depotID)
);

/*==============================================================*/
/* Index: "仓库信息表(Import)_PK"                                    */
/*==============================================================*/
create unique index "仓库信息表(Import)_PK" on "仓库信息表(Import)" (
depotID ASC
);

/*==============================================================*/
/* Index: Relationship_4_FK                                     */
/*==============================================================*/
create index Relationship_4_FK on "仓库信息表(Import)" (
userID ASC
);

/*==============================================================*/
/* Table: "供应商(Prodcom)"                                        */
/*==============================================================*/
create table "供应商(Prodcom)" 
(
   proID                varchar(50)                    not null,
   proName              varchar(50)                    null,
   pro__address         varchar(100)                   not null,
   postalcode           varchar(20)                    not null,
   pro_telephone        varchar(50)                    not null,
   constraint "PK_供应商(PRODCOM)" primary key (proID)
);

/*==============================================================*/
/* Index: "供应商(Prodcom)_PK"                                     */
/*==============================================================*/
create unique index "供应商(Prodcom)_PK" on "供应商(Prodcom)" (
proID ASC
);

/*==============================================================*/
/* Table: 员工表_User                                              */
/*==============================================================*/
create table 员工表_User 
(
   userID               varchar(20)                    not null,
   userName             varchar(50)                    not null,
   sex                  varchar(10)                    not null,
   department           varchar(50)                    not null,
   mima                 varchar(50)                    not null,
   user_address         varchar(20)                    null,
   user_telephone       varchar(20)                    null,
   constraint PK_员工表_USER primary key (userID)
);

/*==============================================================*/
/* Index: 员工表_User_PK                                           */
/*==============================================================*/
create unique index 员工表_User_PK on 员工表_User (
userID ASC
);

/*==============================================================*/
/* Table: "客户表(Custopmer)"                                      */
/*==============================================================*/
create table "客户表(Custopmer)" 
(
   cusID                varchar(50)                    not null,
   cusName              varchar(50)                    null,
   company              varchar(50)                    not null,
   cus_address          char(10)                       null,
   cus_telephone        char(10)                       null,
   constraint "PK_客户表(CUSTOPMER)" primary key (cusID)
);

/*==============================================================*/
/* Index: "客户表(Custopmer)_PK"                                   */
/*==============================================================*/
create unique index "客户表(Custopmer)_PK" on "客户表(Custopmer)" (
cusID ASC
);

/*==============================================================*/
/* Table: "物品信息表(Wp)"                                           */
/*==============================================================*/
create table "物品信息表(Wp)" 
(
   wpID                 varchar(50)                    not null,
   userID               varchar(20)                    null,
   wp_type              varchar(50)                    null,
   price                float(50)                      not null,
   number               integer                        not null,
   constraint "PK_物品信息表(WP)" primary key (wpID)
);

/*==============================================================*/
/* Index: "物品信息表(Wp)_PK"                                        */
/*==============================================================*/
create unique index "物品信息表(Wp)_PK" on "物品信息表(Wp)" (
wpID ASC
);

/*==============================================================*/
/* Index: Relationship_6_FK                                     */
/*==============================================================*/
create index Relationship_6_FK on "物品信息表(Wp)" (
userID ASC
);

alter table Relationship_2
   add constraint "FK_RELATION_RELATIONS_客户表(CUST" foreign key (cusID)
      references "客户表(Custopmer)" (cusID)
      on update restrict
      on delete restrict;

alter table Relationship_2
   add constraint "FK_RELATION_RELATIONS_物品信息表(WP" foreign key (wpID)
      references "物品信息表(Wp)" (wpID)
      on update restrict
      on delete restrict;

alter table Relationship_3
   add constraint "FK_RELATION_RELATIONS_供应商(PROD" foreign key (proID)
      references "供应商(Prodcom)" (proID)
      on update restrict
      on delete restrict;

alter table Relationship_3
   add constraint "FK_RELATION_RELATIONS_物品信息表(WP" foreign key (wpID)
      references "物品信息表(Wp)" (wpID)
      on update restrict
      on delete restrict;

alter table Relationship_5
   add constraint "FK_RELATION_RELATIONS_仓库信息表(IM" foreign key (depotID)
      references "仓库信息表(Import)" (depotID)
      on update restrict
      on delete restrict;

alter table Relationship_5
   add constraint "FK_RELATION_RELATIONS_物品信息表(WP" foreign key (wpID)
      references "物品信息表(Wp)" (wpID)
      on update restrict
      on delete restrict;

alter table "仓库信息表(Import)"
   add constraint "FK_仓库信息表(IM_RELATIONS_员工表_USER" foreign key (userID)
      references 员工表_User (userID)
      on update restrict
      on delete restrict;

alter table "物品信息表(Wp)"
   add constraint "FK_物品信息表(WP_RELATIONS_员工表_USER" foreign key (userID)
      references 员工表_User (userID)
      on update restrict
      on delete restrict;

