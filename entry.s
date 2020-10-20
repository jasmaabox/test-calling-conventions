	global entry_win
	global entry_unix
	section .text
entry_win:
  mov rax, rcx
	ret
entry_unix:
  mov rax, rdi
	ret
