INSERT INTO userTBL VALUES ('YJS', '유재석', 1972, '서울', '010', '11111111', 178, '2008-8-8');
INSERT INTO userTBL VALUES ('KHD', '강호동', 1970, '경북', '011', '22222222', 182, '2007-7-7');
INSERT INTO userTBL VALUES ('KKJ', '김국진', 1965, '서울', '019', '33333333', 171, '2009-9-9');
INSERT INTO userTBL VALUES ('KYM', '김용만', 1967, '서울', '010', '44444444', 177, '2015-5-5');
INSERT INTO userTBL VALUES ('KJD', '김제동', 1974, '경남', NULL , NULL, 173, '2013-3-3');
INSERT INTO userTBL VALUES ('NHS', '남희석', 1971, '충남', '016', '66666666', 180, '2017-4-4');
INSERT INTO userTBL VALUES ('SDY', '신동엽', 1971, '경기', NULL, NULL, 176, '2008-10-10');
INSERT INTO userTBL VALUES ('LHJ', '이휘재', 1972, '경기', '011', '88888888', 180, '2006-4-4');
INSERT INTO userTBL VALUES ('LKK', '이경규', 1960, '경남', '018', '99999999', 170, '2004-12-12');
INSERT INTO userTBL VALUES ('PSH', '박수홍', 1970, '서울', '010', '00000000', 183, '2012-5-5');

INSERT INTO buyTBL VALUES (NULL, 'KHD', '운동화', NULL, 30, 2);
INSERT INTO buyTBL VALUES (NULL, 'KHD', '노트북', '전자', 1000, 1);
INSERT INTO buyTBL VALUES (NULL, 'KYM', '모니터', '전자', 200, 1);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '모니터', '전자', 200, 5);
INSERT INTO buyTBL VALUES (NULL, 'KHD', '청바지', '의류', 50, 3);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '메모리', '전자', 80, 10);
INSERT INTO buyTBL VALUES (NULL, 'KJD', '책', '서적', 15, 5);
INSERT INTO buyTBL VALUES (NULL, 'LHJ', '책', '서적', 15, 2);
INSERT INTO buyTBL VALUES (NULL, 'LHJ', '청바지', '의류', 50, 1);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '운동화', NULL, 30, 2);
INSERT INTO buyTBL VALUES (NULL, 'LHJ', '책', '서적', 15, 1);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '운동화', NULL, 30, 2);

select * from userTBL;
select * from buytbl;

select userID, userName from userTBL where birthYear >= 1970 and height >= 192;

select userid, username from usertbl where birthyear >= 1970 or height >= 182;

select userid, height from usertbl where height >= 180 and height <= 182;

select username, height from usertbl where height between 180 and 182;

select username, addr from usertbl where addr='경남' or addr='충남' or addr='경북';

select username, addr from usertbl where addr in ('경남', '충남', '경북');

select username, height from usertbl where username like '김%';

select username, height from usertbl where username like '_경규';

select username, height from usertbl where height > 177;

select username, height from usertbl where height > (select height from usertbl where username = '김용만');

-- 지역이 경기인 사람보다 키가 크거나 같은 사람 추출
select username, height from usertbl where height >= (select height from usertbl where addr = '경기'); 

select username, height from usertbl where height = any (select height from usertbl where addr = '경기');

select username, height from usertbl where height = all (select height from usertbl where addr = '경기');

select username, mdate from usertbl order by mdate;

select username, mdate from usertbl order by mdate desc;

select username, height from usertbl order by height desc, username asc;

select addr from usertbl;

select distinct addr from usertbl;

select userid, sum(amount) from buytbl group by userid;

select userid as '사용자 아이디', sum(amount) as '총 구매 개수' from buytbl group by userid;

select userid as '사용자 아이디', sum(price * amount) as '총구매액' from buytbl group by userid;

select avg(amount) as '평균 구매 개수' from buytbl;

select userid, avg(amount) as '평균 구매 개수' from buytbl group by userid;

select username, max(height), min(height) from usertbl;

select username, max(height), min(height) from usertbl group by username;

select username, height from usertbl where height = (select max(height) from usertbl) or height = (select min(height) from usertbl);

select count(*) from userTBL;

select count(mobile1) as '휴대폰이 있는 사용자' from usertbl;

drop database cookdb;

create database cookdb;

use cookdb;

create table usertbl
(userID char(8) not null primary key,
userName varchar(10) not null,
birthYear int not null,
addr char(2) not null,
mobile1 char(3),
mobile2 char(8),
height smallint,
mDate date);

create table buytbl
(num int auto_increment not null primary key,
userID char(8) not null,
prodName char(6) not null,
groupName char(4),
price int not null,
amount smallint not null,
foreign key (userID) references usertbl (userID));

INSERT INTO userTBL VALUES ('YJS', '유재석', 1972, '서울', '010', '11111111', 178, '2008-8-8');
INSERT INTO userTBL VALUES ('KHD', '강호동', 1970, '경북', '011', '22222222', 182, '2007-7-7');
INSERT INTO userTBL VALUES ('KKJ', '김국진', 1965, '서울', '019', '33333333', 171, '2009-9-9');
INSERT INTO userTBL VALUES ('KYM', '김용만', 1967, '서울', '010', '44444444', 177, '2015-5-5');
INSERT INTO userTBL VALUES ('KJD', '김제동', 1974, '경남', NULL , NULL, 173, '2013-3-3');
INSERT INTO userTBL VALUES ('NHS', '남희석', 1971, '충남', '016', '66666666', 180, '2017-4-4');
INSERT INTO userTBL VALUES ('SDY', '신동엽', 1971, '경기', NULL, NULL, 176, '2008-10-10');
INSERT INTO userTBL VALUES ('LHJ', '이휘재', 1972, '경기', '011', '88888888', 180, '2006-4-4');
INSERT INTO userTBL VALUES ('LKK', '이경규', 1960, '경남', '018', '99999999', 170, '2004-12-12');
INSERT INTO userTBL VALUES ('PSH', '박수홍', 1970, '서울', '010', '00000000', 183, '2012-5-5');

INSERT INTO buyTBL VALUES (NULL, 'KHD', '운동화', NULL, 30, 2);
INSERT INTO buyTBL VALUES (NULL, 'KHD', '노트북', '전자', 1000, 1);
INSERT INTO buyTBL VALUES (NULL, 'KYM', '모니터', '전자', 200, 1);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '모니터', '전자', 200, 5);
INSERT INTO buyTBL VALUES (NULL, 'KHD', '청바지', '의류', 50, 3);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '메모리', '전자', 80, 10);
INSERT INTO buyTBL VALUES (NULL, 'KJD', '책', '서적', 15, 5);
INSERT INTO buyTBL VALUES (NULL, 'LHJ', '책', '서적', 15, 2);
INSERT INTO buyTBL VALUES (NULL, 'LHJ', '청바지', '의류', 50, 1);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '운동화', NULL, 30, 2);
INSERT INTO buyTBL VALUES (NULL, 'LHJ', '책', '서적', 15, 1);
INSERT INTO buyTBL VALUES (NULL, 'PSH', '운동화', NULL, 30, 2);

select * from usertbl;
select * from buytbl;

select userid, username from usertbl where birthyear >= 1970 and height >= 182;

select userid, username from usertbl where birthyear >= 1970 or height >= 182;

select username, height from usertbl where height >= 180 and height <= 182;

select username, height from usertbl where height between 180 and 182;

-- 지역이 경남 또는 경북인 사람은 or 연산자를 사용하여 조회
select username, addr from usertbl where addr='경남' or addr='충남' or addr='경북';

-- 이산적인 값을 조회할 때는 IN()연산자 사용
select username, addr from usertb where addr in ('경남', '충남', '경북');

-- 성이 김 씨인 회원의 이름과 키 조회
select username, height from usertbl where username like '김%';

-- 맨 앞의 한 글자가 무엇이든 상관없고 그 다음이 '경규'인 사람 조회
select username, height from usertbl where username like '_경규';

-- 23.05.12
use cookdb;
create table testtb1 (id int, userName char(3), age int);

insert into testtb1 values (1, "뽀로로", 16);

insert into testtb1 (id, userName, age) values (2, '홍길동', 20);

insert testtb1 values (3, 'abc', 20);
insert testtb1 values (4, '123', 30), (5, '김길동', 40), (6,'이길동', 30);

insert into testtb1 (id, age) values (2, 20);
insert into testtb1 (age, id) values (20,10);

select * from testtb1;

create table testtbl2
(id int auto_increment primary key,
userName char(3),
age int
);
insert into testTbl2 values (null, '에디', 15);
insert into testtbl2 values (null, '포비', 12);
insert into testtbl2 values (null, '통통이', 11);
select * from testtbl2;

-- auto_increment의 입력 값을 100부터 시작하도록 변경
alter table testtbl2 auto_increment=100;
insert into testtbl2 values (null, '패티', 13);
select * from testtbl2;

create table testtbl3
(id int auto_increment primary key,
userName char(3),
age int
);

alter table testtbl3 auto_increment=1000;
set @@auto_increment_increment =3;
insert into testtbl3 values (null, '우디', 20);
insert into testtbl3 values (null, '버즈', 18);
INSERT INTO testTBL3 VALUES (NULL, '제시', 19);

select *from testtbl3;

create table testtbl4(nu int, nNmae char(3), ages int);

insert into testtbl4 select * from testtbl3;

select * from testtbl4;

use sakila;
show tables;

select * from actor;

create table tb01 (select actor_id as 번호, 
first_name as 이름,
last_name as 성 from actor);

SET SQL_SAFE_UPDATES = 0;


update tb01
set 이름 = '길동', 성 = '홍'
where 번호 = 1;

select * from tb01;

update tb01
set 이름 = '길동', 성 = '홍'
where 번호;

desc actor;

insert into actor values (1000, '홍길', '동', now());
insert into actor values (1001, '홍길', '동', now());
insert into actor values (1002, '홍길', '동', now());

insert ignore into actor values (1003, '홍길', '동', now());


select * from actor;

select row_number() over(order by last_name) "순서",
actor_id, first_name, last_name from actor;

select * from city; 

create table tb100(
uName char(3),
season char(2),
amount int);

insert into tb100 values ('홍길동', '봄', 10);
insert into tb100 values ('김길동', '봄', 10);
insert into tb100 values ('홍길동', '여름', 10);
insert into tb100 values ('홍길동', '여름', 10);
insert into tb100 values ('홍길동', '봄', 10);insert into tb100 values ('홍길동', '봄', 10);
insert into tb100 values ('김길동', '봄', 10);
insert into tb100 values ('김길동', '여름', 10);
insert into tb100 values ('김길동', '여름', 10);

select * from tb100;

select uName,
sum(case when season='봄' then amount end) as '봄',
sum(case when season='여름' then amount end) as '여름'
from tb100 group by uName;

use cookdb;
show tables;

select * from buytbl;

with abc(userID, price)
as
(select userID, price from buytbl)
select * from abc;
