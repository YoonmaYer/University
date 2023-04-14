USE cookDB;

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

select * from userTBL where userName = '강호동';


select userName, userTBL where birthYear >= 1970 and height >= 182; 

select userName, addr from userTBL where addr='경남' or addr='충남' or addr='경북';

select userName, addr from userTBL where addr in ('경남', '충남','경북');

select userName, height from userTBL where userName like '김%';

select userName, height from userTBL where userName like '_경규';

// 서울에 사는 김씨만 나오게

select userName, addr from userTBL where addr = '서울' and userName like '김%';

// 서울 경기 김씨

select userName, addr from userTBL where addr in ('서울', '경기') and userName like '김%';

// 김용만보다 키큰사람 출력

select userName, height from userTBL where height > 177;

select userName, height from userTBL where height > (select height from userTBL where userName = '김용만');

select userName, height from userTBL where height >= any(select height from userTBL where addr ='경기');
select userName, height from userTBL where height >= all(select height from userTBL where addr ='경기');

select userName, height from userTBL where height in (select height from userTBL where addr = '경기');

select userName, mDate from userTBL order by mDate;
select userName, mDate from userTBL order by mDate desc; // 내림차순
select userName, mDate from userTBL order by userName limit 5;

select distinct addr from userTBL order by addr;

create table buyTBL2(select * from buyTBL);
select * from buyTBL2;

create table buyTBL3 (select num,userID from buyTBL);

// 서울 경기

create table userTBL2 (select * from userTBL where addr in ('서울', '경기'));

select userID, amount from buyTBL order by userID;

select userID, sum(amount) from buyTBL group by userID;

select userID, avg(amount) from buyTBL group by userID;

select userID as '사용자아이디', sum(amount*price) as '총 구매액' from buyTBL group by userID;

select count(*) from usertbl;

select userName, height from userTBL where height = (select max(height) from userTBL) or height = (select min(height) from userTBL);

select count(mobile1) as '휴대폰이 있는 사용자' from userTBL;

select userID as '사용자', sum(price * amount) as '총 구매액' from buyTBL group by userID;

select userID as '사용자', sum(price * amount) as '총 구매액' from buyTBL group by userID having sum(price*amount) > 1000;

