create database guitarDB;

use guitarDB;
create table guitarTBL
(guitar_id INT,
guitar_name varchar(30),
guitar_pic longblob,
guitar_sound longblob,
guitar_video longblob,
guitar_text longtext
)default charset=utf8mb4; -- 한글 깨짐 방지

drop table guitarTBL;

insert into guitarTBL values (1, 'Stratocaster',
load_file('C:/sql/Guitar/Stratocaster.jpg'), load_file('C:/sql/Guitar/guitar.mp3'),
load_file('C:/sql/Guitar/Stratocaster.mp4'),load_file('C:/sql/Guitar/Stratocaster.txt'));
insert into guitarTBL values (2, 'LesPaul',
load_file('C:/sql/Guitar/LesPaul.jpg'), load_file('C:/sql/Guitar/guitar.mp3'),
load_file('C:/sql/Guitar/LesPaul.mp4') ,load_file('C:/sql/Guitar/LesPaul.txt'));

insert into guitarTBL values (3, 'Telecaster',
load_file('C:/sql/Guitar/Telecaster.jpg'), load_file('C:/sql/Guitar/guitar.mp3'),
load_file('C:/sql/Guitar/Telecaster.mp4') ,load_file('C:/sql/Guitar/Telecaster.txt'));

select guitar_pic from guitarTBL where guitar_id=1
into dumpfile 'C:/sql/Guitar/Out/Stratocaster_out.jpg';
select guitar_sound from guitarTBL where guitar_id=1
into dumpfile 'C:/sql/Guitar/Out/guitar_out.mp3';
select guitar_video from guitarTBL where guitar_id=1
into dumpfile 'C:/sql/Guitar/Out/Stratocaster_out.mp4';

select guitar_text from guitarTBL where guitar_id=1
into outfile 'C:/sql/Guitar/Out/Stratocaster_out.text';

select guitar_pic from guitarTBL where guitar_id=2
into dumpfile 'C:/sql/Guitar/Out/LesPaul_out.jpg';
select guitar_video from guitarTBL where guitar_id=2
into dumpfile 'C:/sql/Guitar/Out/LesPaul_out.mp4';

select guitar_text from guitarTBL where guitar_id=2
into outfile 'C:/sql/Guitar/Out/Stratocaster_out.text';

select guitar_pic from guitarTBL where guitar_id=3
into dumpfile 'C:/sql/Guitar/Out/Telecaster_out.jpg';
select guitar_video from guitarTBL where guitar_id=3
into dumpfile 'C:/sql/Guitar/Out/Telecaster_out.mp4';

select guitar_text from guitarTBL where guitar_id=3
into outfile 'C:/sql/Guitar/Out/Telecaster_out.text';