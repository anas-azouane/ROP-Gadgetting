# ROP Chain Exploit

Demonstrates a ROP exploit against a statically-linked binary to spawn a shell.

## Quick Start
```bash
# Compile vulnerable program
gcc -fno-stack-protector -no-pie -z execstack -static vuln.c -o vuln

# Disable ASLR
echo 0 | sudo tee /proc/sys/kernel/randomize_va_space

# Find gadgets
ROPgadget --binary ./vuln   

# Run exploit
python3 exploit.py
