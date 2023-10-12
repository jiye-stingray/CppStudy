%include "io64.inc"

section .text
global CMAIN
main:
    mov rbp, rsp; for correct debugging

    ; 함수 (프로시저 procedure 서브루틴 subtroutine)
    
    ;call PRINT_MSG
    
    mov eax, 10
    mov ebx, 15
    call MAX
    PRINT_DEC 4, ecx
    NEWLINE
    
    xor rax, rax
    ret
    
    
PRINT_MSG:
    PRINT_STRING msg
    NEWLINE
    ret 

; ex) 두 값중 더 큰 값을 반환하는 max
; 근데 2개의 값을 어떻게 넘겨받지? 반환 어떻게 ?
; eax와 ebx 입력값을 ecx에 반환
MAX:
    cmp eax, ebx
    jg L1
    mov ecx, ebx
    jmp L2
L1:
    mov ecx, eax
    
L2:
    ret
    
    ; 그런데 인자가 10개라면 어떻게 할까? a, b, c, d
    ; eax, ebx에 이미 중요한 값이 있으면 어떻게 할까?
    
    ; 초기화 된 데이터
    ; [변수이름] [크기] [초기값]
    ; [크기] db(1) dw(2) dd(4) dq(8)
    
section .data
    msg db 'Hello World', 0x00
    a db 0x01, 0x02, 0x03, 0x04, 0x05 ; 5 * 1 = 5 바이트
    
    ; 0x0001    
    b times 5 dw 1 ; 5 * 2 10 바이트 
    
    
    
    ; 초기화 되지 않은 데이터
    ; [변수이름] [크기] [개수]  
    ; [크기] resb(1) resw(2) resd(4) resq(8)
section .bss
    num resb 10 
