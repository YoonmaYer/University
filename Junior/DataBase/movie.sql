select md5('test');
select sha1('test');

create database db03;

create table db03.tb01(user_id varchar(100), password varchar(500));

insert into db03.tb01 values ('1', hex(aes_encrypt('okman','a')));
insert into db03.tb01 values ('2', hex(aes_encrypt('okman','a')));
insert into db03.tb01 values ('3', hex(aes_encrypt('okman','a')));

select * from db03.tb01;

select user_id, aes_decrypt(unhex(password),'a') from db03.tb01;

select user_id, aes_decrypt(unhex(password),'c') from db03.tb01;

show variables like 'max_allowed_packet';
show variables like 'secure_file_priv';

show variables like '%dir';

create database movieDB;

use movieDB;
create table movieTBL
(movie_id INT,
movie_title varchar(30),
movie_director varchar(20),
movie_star varchar(20),
movie_script longtext,
movie_film longblob
)default charset=utf8mb4;

drop table movietbl;

insert into movietbl values (1, '쉰들러 리스트', '스필버그', '리암 니슨',
load_file('C:/sql/Movies/Schindler.txt'), load_file('C:/sql/Movies/Schindler.mp4'));
insert into movietbl values (2, '쇼생크 탈출', '프랭크 다라본트', '팀 로빈스',
load_file('C:/sql/Movies/Shawshank.txt'), load_file('C:/sql/Movies/Shawshank.mp4'));
insert into movietbl values (3, '라스트 모히칸', '마이클 만', '다니엘 데이 루이스',
load_file('C:/sql/Movies/Mohican.txt'), load_file('C:/sql/Movies/Mohican.mp4'));

select * from movietbl;

select movie_script from movietbl where movie_id=1
into outfile 'C:/sql/test.txt' lines terminated by '\\n';

select movie_film from movietbl where movie_id=1
into dumpfile 'C:/sql/test.mp4';