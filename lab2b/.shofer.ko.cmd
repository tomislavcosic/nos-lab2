cmd_/home/tomislav/nos-lab2/lab2b/shofer.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id=sha1  -T ./scripts/module-common.lds -o /home/tomislav/nos-lab2/lab2b/shofer.ko /home/tomislav/nos-lab2/lab2b/shofer.o /home/tomislav/nos-lab2/lab2b/shofer.mod.o;  true