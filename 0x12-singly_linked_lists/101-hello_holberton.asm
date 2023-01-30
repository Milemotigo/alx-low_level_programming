section .data
  msg db 'Hello, Holberton', 10, 0

section .text
  global main
  extern printf

main:
  push rbp
  mov rbp, rsp
  sub rsp, 8
  lea rdi, [rel msg]
  xor eax, eax
  call printf
  mov eax, 0
  leave
  ret

