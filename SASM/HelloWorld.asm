%include "io64.inc"

section .text
global CMAIN
main:
    mov rbp, rsp; for correct debugging
    
   ; 반복문 (while for)
   ; 특정 조건을 만족할때까지 반복해서 실행~ 
    
   ; ex) Hello World를 10번 출력해야 한다면 ?
   
   mov ecx, 10
   
LABEL_LOOP:
   PRINT_STRING msg
   NEWLINE
   dec ecx ; sub ecx, 1과 동일
   cmp ecx,0
   jne LABEL_LOOP
    

    ; 연습문제 1 에서 100까지의 합을 구하는 프로그램
    
    mov eax, 0
    mov ebx, 0
LABEL_HAP:
    add ebx , 1
    add eax , ebx
    cmp ebx, 100
    jne LABEL_HAP
    
    PRINT_DEC 1, eax   
    NEWLINE
    
    xor rax, rax
    ret
    
    
    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    
section .data
    msg db 'Hello World', 0x00
    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]  
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    num resb 1
