SHOW TABLES

CREATE TABLE emp(
	EMPNO SMALLINT NOT NULL,
	EMPNAME VARCHAR(9) NOT NULL,
	DNO TINYINT
);


DESC emp/*테이블을 확인하는 요도*/

CREATE TABLE dep(
	DEPNO TINYINT NOT NULL, 
	DEPNAME VARCHAR(9) NOT NULL,
	DEPFLOOR TINYINT
);

DESC dep

DROP TABLE emp
DROP TABLE dep


ALTER TABLE EMP ADD PRIMARY KEY(EMPNO);  -- emp 기본키 생성 alter table 로 emp 테이블 안에 empno 를 pri key 로 하겠다.
ALTER TABLE DEP ADD PRIMARY KEY(DEPNO);  -- dep 기본키 생성
ALTER TABLE EMP								 
	ADD CONSTRAINT DEPFK						  
	FOREIGN KEY (DNO)							  
	REFERENCES DEP (DEPNO);		
 -- emp 외래키 생성			 
-- 외래키 이름 DEPFK로 설정
-- 외래키를 emp.dno 속성으로
 -- 외래키 참조를 dep의 depno를 참조
 
 INSERT INTO DEP VALUES
 	(1, '영업',3),
 	(2, '관리',7),
 	(3, '개발',9),
 	(4, '마케팅',9);
 
 INSERT INTO EMP VALUES
 	(2107, '홍 길 동',2),
 	(3426, '박 영 권',3),
 	(3022, '강 감 찬',1),
 	(1038, '이 순 신',1),(3427,'최종철',3);
 	
SELECT *FROM dep
SELECT *FROM emp

DELETE FROM dep WHERE DEPNO=4;

INSERT INTO DEP VALUES (5,'하루',4)

-- 강감찬의 사번과 부서와 층수를 출력

SELECT emp.EMPNAME,  emp .EMPNO ,dep.DEPNO,dep.DEPNAME, dep.DEPFLOOR FROM emp
	INNER JOIN dep ON emp.DNO=dep.DEPNO
	WHERE emp.EMPNAME='강감찬'