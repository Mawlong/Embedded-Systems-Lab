ORG 300H
DB 1,2,3,4,5
ORG 0000H
MOV DPTR, #0300H
MOV R3, #00H

CLR A
MOVC R3,@A+DPTR
INC DPTR
AGAIN:
MOV R2,R3
CLR A
MOVC R3,@A+DPTR
ADD R3,R2
INC DPTR
DEC R1
MOV R2,R3
MOV A,R1
JNZ AGAIN
MOV P1,R3
;END



END