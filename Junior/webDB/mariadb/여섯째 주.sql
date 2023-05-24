CREATE DATABASE test2
DROP TABLE 도서;
CREATE TABLE 도서(
도서번호 INT NOT NULL,
도서명 VARCHAR(50) NOT NULL,
저자 VARCHAR(10)  NULL,
가격 INT NULL);

INSERT INTO 도서 VALUES(1,'든든한 데이터베이스',NULL,NULL),
(2,'데이터베이스 배움터','홍의경',27000),
(3,'사레로 배우는 데이터베이스 설게와 구축','이종만',18000),
(4,'데이터베이스 모델링','오용철',26000),
(5,'데이터베이스 설계와 구축','오세종',200000),
(7,'영어책 한 권 외워봤니?','김민식',14000);



SELECT *FROM 도서
DROP TABLE 회원

CREATE TABLE 회원
(회원번호 INT NOT NULL,
회원명 VARCHAR(10) NOT NULL,
주민등록번호 VARCHAR(14) NOT NULL,
주소 VARCHAR(10),
취미 VARCHAR(10),
키 INT,
몸무게 TINYINT,
등급 VARCHAR(10) CHECK (등급 IN('비회원','정회원','평생회원')),
적립금 INT DEFAULT 0)

INSERT INTO 회원 VALUES
(2,'송중기','850919-1380623','서울 강남','연기',178,65,'평생회원',12300),
(3,'서현','910628-2113717','서울 용산','춤',167,45,'정회원',6100),
(4,'송혜교','811122-2313728','서울 구로','연기',158,45,'비회원',100),
(5,'보아','861105-2821912','서울 용인','춤',162,45,'정회원',7500),
(6,'김연경','880226-2357948','','',null,NULL,'비회원',0);

select *FROM 회원

SELECT 도서명, 가격 from 도서 WHERE 가격>20000;

SELECT 회원명 회원이름 , 주소 '현재주소지', 취미 AS 특기 FROM  회원; --별칭

-- 중복방지
SELECT DISTINCT 등급 FROM 회원;

-- 같지 않다
SELECT *FROM 회원 WHERE 회원번호=2;
SELECT *FROM 회원 WHERE 등급 <> '비회원';

--비교 연산
SELECT *FROM 회원 WHERE 키 < 165;
SELECT *FROM 회원 WHERE 회원명 > '사';


--논리 연산
SELECT 회원명, 등급, 키 FROM 회원
WHERE 등급='정회원'
	AND 키 >= 160


SELECT 회원명, 등급, 키 FROM 회원
WHERE 등급='비회원'
	or 키 >= 160
	
	
	
SELECT 회원명, 주소 , 몸무게 FROM 회원
WHERE 등급='비회원'
 OR 키>= 160
 AND 몸무게 <50

	
-- between ... and

SELECT 회원명, 주소 , 몸무게 FROM 회원
WHERE 몸무게 BETWEEN 40 AND 50

SELECT 회원명, 주소 , 몸무게 FROM 회원
WHERE 몸무게 >= 40 AND <=50


SELECT 회원명, 주소, 몸무게
FROM 회원
WHERE 몸무게 NOT BETWEEN 40 AND 50;


-- in
-- 등급이 평생회원과 정회원인 회원의 회원명과 등급을 검색 (시험문제 fuck)
SELECT 회원명, 등급 FROM 회원
WHERE 등급 IN ('평생회원', '정회원')

SELECT 회원명, 등급 FROM 회원
WHERE 등급 ='평생회원'
	OR 등급 ='정회원'


-- 등급이 평생회원과 정회원이 아닌 회원의 회원명과 등급을 검색
SELECT 회원명, 등급 FROM 회원
WHERE 등급 NOT IN('평생회원',' 정회원')

--문자열 검색 (와일드 카드)
-- 송씨 성을 가진 회원 검색 
-- 송%  뒤에 아무거나  
SELECT *FROM 회원
WHERE 회원명 LIKE '송%'

INSERT INTO 회원 values
(9,'송중','123456-1234567','서울 강' , '독서',181,70,'정회원',2000)   ;

SELECT *FROM 회원
WHERE 회원명 LIKE '송_'

SELECT *FROM 회원
WHERE 회원명 LIKE '송__'


SELECT *FROM 회원
WHERE 회원명 LIKE '_중_'
SELECT *FROM 회원
WHERE 회원명 LIKE '%중%'



--성이 김씨가 아닌 다른 회원 검색

SELECT* FROM 회원
WHERE 회원명 LIKE '김%';

-- IS NULL
-- 주소가 없는 회원 검색
SELECT *FROM 회원 
WHERE 키 IS NULL

-- IS  NOT NULL 
--키 데이터가 있는 사람 검색 
SELECT *FROM 회원
WHERE 키 IS NOT NULL 




-- 성이 송씨 이거나 키가 165보다 작으면서 몸무게가 40보다 큰 회원 검색 
SELECT * FROM  회원 
WHERE 회원명 LIKE '송%' OR 키 <165 AND 몸무게>40;
-- 송씨 회원중 키가 150보다  크거나 몸무게가 40보다 큰 회원 검색
SELECT * FROM  회원 
WHERE 회원명 LIKE '송%' AND (키 >150 OR 몸무게>40); -- or 연산자가 우선순위여서 괄호로 묶는다 
-- 여기부터 4/18일 --

SELECT *FROM  회원
ORDER BY 회원명     -- 한꺼번에 두개 같이 선택을 해야된다. 회원명으로 정렬

SELECT *FROM  회원
ORDER BY 키 DESC      --키로정렬

SELECT *FROM  회원
ORDER BY 적립금 DESC 

-- 등급이 비회원인 회원에 대한 모든 데이터를 검색
--단 키의 오름차순으로 출력
SELECT *FROM 회원
	WHERE 등급 = '비회원'
	ORDER BY 키    			--오름차순으로 만들면 null이 먼저나옴
	
--회원 몸무게 가 적은 순으로  회원명, 키 , 몸무게검색
SELECT 회원명, 키, 몸무게  FROM 회원
	ORDER BY 몸무게

-- 회원 회원명, 등급, 몸무게 , 키 검색
-- 단 몸무게를 내림차순으로 정렬후 키 오름차순으로 정렬 조건이 몸무게가 같을때!!!
SELECT 회원명, 등급, 몸무게, 키 FROM 회원
ORDER BY 몸무게 DESC, 키     


--여기서 인덱스는 0이 아닌1부터 1 2 3 4
SELECT 회원명, 등급, 몸무게, 키 FROM 회원 
ORDER BY 3,4 

-- 서브쿼리 (단일 행 서브 쿼리) -->100퍼 시험임 ㅋㅋ
-- > 서브쿼리의 결과가 하나인 것
-- 송혜교와 같은 등급의 회원 검색
SELECT*FROM 회원
WHERE 등급 =(SELECT 등급 FROM 회원
					WHERE 회원명 ='송혜교')
					
					
-- 등급이 정회원인 회원들의 평균 키보다 작은 회원 검색
SELECT *FROM 회원
WHERE 키 < (SELECT AVG(키) FROM 회원
				WHERE 등급='정회원')
				
SELECT 키 FROM 회원 WHERE 등급= '정회원'
SELECT AVG(키) FROM 회원 WHERE 등급= '정회원'



-- '보아'회원과 등급이 같고 '보아' 회원보다 키가 큰
--회원의  회원명, 등급, 키 , 몸무게를 검색

SELECT 회원명,등급, 키, 몸무게 FROM 회원
WHERE 등급=(SELECT 등급 FROM 회원 WHERE  회원명='보아') 
		AND
		키>(SELECT 키 FROM 회원 WHERE 회원명= '보아')
		

-- 여기서 부터 다중행 서브쿼리를 말해~
-- 몸무게가 45인 회원을 서브쿼리로 검색
SELECT *FROM 회원
WHERE 회원번호 IN (SELECT 회원번호 FROM 회원 
								WHERE 몸무게 =45)
								
								
-- 회원 수 검색
SELECT count(*) AS 회원수 FROM 회원

--몸무게 정보가 있는 회원수 
SELECT COUNT(몸무게) AS '몸무게 정보가 있는 회원수'FROM  회원 

--몸무게 정보가 없는 회원수  count는 행의 개수를 센다
SELECT COUNT(*) AS '몸무게 정보가 없는 회원 수'
	FROM 회원 
	WHERE  몸무게 IS NULL 




	
DROP TABLE 주문도서
SELECT *FROM 도서
SELECT *FROM 주문도서

CREATE TABLE 주문도서(
	도서번호 INT,
	주문수량 INT,
	주문날짜 DATE
);


INSERT INTO 주문도서 VALUES
(1,2,'2022-01-01'),
(1,1,'2022-01-02'),
(2,2,'2022-01-03'),
(2,4,'2022-01-04')


--도서 별 평균 주문 수량
SELECT 도서번호, AVG(주문수량) AS 평균주문수량  
FROM 주문도서
GROUP BY 도서번호

-- 전체회원을 몸무게별로 나누고 , 같은 몸무게 회우너은 다시
-- 등급별로 그룹핑하여 , 몸무게 등급별로 인원수 , 평균 몸무게 출력

SELECT 몸무게, 등급, COUNT(*) AS 인원수, AVG(몸무게) AS 평균몸무게
FROM 회원 
GROUP BY 몸무게,등급


-- 누적주문 건수가 두 건 이상인 도서의 평균 주문 수량 이거 다시??
SELECT 도서번호, COUNT(*) AS 누적주문건수, 
	AVG(주문수량) AS 평균주문수량
FROM 주문도서 
GROUP BY 도서번호
HAVING COUNT(*)>=2



-- 주문 도서와 도서를 합쳐서  도서번호 도서명 주문수량 출력
SELECT 도서.도서번호, 도서.도서명, 주문도서.주문수량
FROM 도서, 주문도서
WHERE 도서.도서번호 = 주문도서.도서번호


SELECT *FROM 주문도서
SELECT *FROM 도서

CREATE DATABASE middle

USE DATABASE test2
USE DATABASE middle


SELECT 회원명, 등급 FROM 회원
WHERE 등급 IN ('평생회원', '정회원');

SELECT 회원명, 등급 FROM 회원
WHERE 등급 = '평생회원' AND 등급 = '정회원';

SELECT 회원명, 등급 FROM 회원

SELECT 회원명, 등급 FROM 회원
WHERE 등급 = '평생회원' or 등급 = '정회원';