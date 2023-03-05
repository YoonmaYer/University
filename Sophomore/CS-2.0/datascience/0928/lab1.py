import string

src = input('문장을 입력하시오: ')
src = src.upper() # 대문자로 바꾸기

key = int(input("키로 사용될 정수를 0~25 중에서 하나 입력 하시오: "))
if key < 0 or key > 25:
    print("키 입력 오류: %d" %key)
    exit(0) # 프로그램 종료

src_str = string.ascii_uppercase
dst_str = src_str[key: ] + src_str[:key]
print('\t 암호화용 문자열 배치 순서: %s' %dst_str)

# 암호화
def ciper(a):
    idx = src_str.index(a)
    return dst_str[idx]

# 복호화
def deciper(a):
    idx = dst_str.index(a)
    return src_str[idx]

cip_txt = "" # 암호문

for ch in src:
    if ch in src_str:
        cip_txt += ciper(ch)
    else : # 알파벳 이외의 숫자나 기타 기호들
        cip_txt += ch
print("\t 암호문: %s" %cip_txt)

decip_txt = "" # 복호문(원문)
for ch in cip_txt:
    if ch in src_str:
        decip_txt += deciper(ch)
    else: # 알파벳 이외의 숫자나 기타 기호들
        decip_txt += ch

print("\t 복호문: %s" %decip_txt)