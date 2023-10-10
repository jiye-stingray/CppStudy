%include "io64.inc"

section .text
global CMAIN
main:
    mov rbp, rsp; for correct debugging
    
    GET_DEC 1, al
    GET_DEC 1, num
    
    ; PRINT_DEC 1, al
    ; NEWLINE
    ; PRINT_DEC 1, num
    
    ; 더하기 연산 
    ; add a, b (a = a + b)
    ; a는 레지스터 or 메모리
    ; b는 레지스터 or 메모리 or 상수
    ; - 단! a, b 모두 메모리는 X 
    
    ; 빼기 연산
    ; sub a, b ( a = a - b)
    
    add al, 1 ; 레지스터 + 상수
    PRINT_DEC 1, al ; 1 + 1 = 2
    NEWLINE
    
    add al, [num] ; 레지스터 + 메모리
    PRINT_DEC 1, al ; 2 + 2 = 4
    NEWLINE
    
    mov bl, 3   ; 레지스터 + 레지스터 
    add al, bl ; 4 + 3 = 7
    PRINT_DEC 1, al 
    NEWLINE
    
    add [num], byte 1 ; 메모리 + 상수
    PRINT_DEC 1, [num] ; 2 + 1 = 3
    NEWLINE
    
    add [num], al   ; 메모리 + 레지스터
    PRINT_DEC 1, [num] ; 3 + 7 = 10
    NEWLINE   
    
    
    ; 곱하기 연산
    ; mul reg 
    ; - mul bl => al * bl
    ; -- 연산 결과를 ax에 저장
    ; - mul bx => ax * bx
    ; -- 연산 결과는 dx(상위16비트) ax(하위16비트)에 저장
    ; - mul ebx => eax * ebx
    
    ; ex) 5 * 8 은? 
    mov ax, 0
    mov al, 5
    mov bl, 8
    mul bl
    PRINT_DEC 2, ax
    NEWLINE
    
    ; 나누기 연산
    ; div reg 
    ; - div bl => ax / bl
    ; -- 연산 결과 al(몫) ah(나머지)
    
    ; ex) 100 / 3 은 ?
    mov ax, 100
    mov bl, 3
    div bl
    PRINT_DEC 1, al     ; 100 / 3 = 33 * 3 + 1
    NEWLINE
    mov al, ah
    PRINT_DEC 1, al
    
    xor rax, rax
    ret
    
    
    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    
;section .data
    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]  
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    num resb 1
