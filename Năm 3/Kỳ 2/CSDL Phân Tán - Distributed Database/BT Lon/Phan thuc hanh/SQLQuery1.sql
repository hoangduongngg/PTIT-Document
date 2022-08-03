CREATE DATABASE DELIVERY_MANAGEMENT;
go
create table tblPostOffice (
	id varchar(100) not null primary key,
    name varchar(100) not null,
    address varchar(100) not null,
    phone varchar(100) not null
);

create table tblUser (
	id varchar(100) not null primary key,
    username varchar(100) not null,
    password varchar(100) not null,
    address varchar(100) not null,
    phone varchar(100) not null,
    position varchar(100) not null,
    salary float not null,
    postOfficeId varchar(100) not null,
    foreign key (postOfficeId) references tblPostOffice (id)
);

create table tblShipper (
	id varchar(100) not null primary key,
    name varchar(100) not null,
    phone varchar(100) not null,
    salary float not null,
    postOfficeId varchar(100) not null,
    foreign key (postOfficeId) references tblPostOffice (id)
);

create table tblSender (
	id varchar(100) not null primary key,
    name varchar(100) not null,
    address varchar(100) not null,
    phone varchar(100) not null
);
create table tblReceiver (
	id varchar(100) not null primary key,
    name varchar(100) not null,
    address varchar(100) not null,
    phone varchar(100) not null
);

create table tblBill (
	id varchar(100) not null primary key,
    description varchar(100) not null,
    orderAt date not null,
    receivedAt date not null,
    senderId varchar(100) not null,
    receiverId varchar(100) not null,
    foreign key (senderId) references tblSender (id),
    foreign key (receiverId) references tblReceiver (id)
);


create table tblDistribute (
	id varchar(100) not null primary key,
    billId varchar(100) not null,
    postOfficeId varchar(100) not null,
    userId varchar(100) not null,
    shipperId varchar(100) not null,
    foreign key (billId) references tblBill (id),
    foreign key (postOfficeId) references tblPostOffice (id),
    foreign key (userId) references tblUser (id),
    foreign key (shipperId) references tblShipper (id)
);

create table tblProduct (
	id varchar(100) not null primary key,
    name varchar(100) not null,
    note varchar(100) not null,
    price float not null,
    billId varchar(100) not null,
    foreign key (billId) references tblBill (id)
);