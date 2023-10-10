%include "io64.inc"

section .text
global CMAIN
main:
    mov rbp, rsp; for correct debugging
    
    ; 8 bit = 1 Byte
    ; 16 bit = 2 Byte = 1 word
    ; 32 bit = 4 byte = 2 word = 1 dword(double-word)
    ; 64 bit = 8 byte = 4word = 1 qword (quad-word)
    
    mov eax, 0x1234
    mov rbx, 0x12345678
    mov cl, 0xff
    
    mov al, 0x00 
    
    ; 메모리 <-> 레지스터
    ; mov rax, a      ; a라는 바구니의 주소값을 rax에 복사 
    ; mov rax, [a]     ; a라는 바구니 안에 있는 값을 rax에다 복사
    mov al, [a]
    
    mov [a], byte 0x55
    mov [a], word 0x6666
    mov [a], cl
    
    xor rax, rax
    ret
    
    ; 변수의 선언 및 사용
    ; 변수는 그냥 데이터를 저장하는 바구니 [ ]
    ; - 처음에 바구니 사용하겠다 선언 (이름과 크기 지정) 
    
    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    
section .data
    a db 0x11     ; [0x11]
    b dw 0x2222   
    c dd 0x33333333
    d dq 0x4444444444444444
    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]  
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    e resb 10
