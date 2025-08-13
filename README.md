# CS3500_Operating_Systems

## Booting up xv6
Start Docker:
```
sudo ystemctl start docker
```
Run riscv tools:
```
sudo docker run -it -v /home/abhishek/CS3500/xv6-riscv:/home/os-iitm/xv6-riscv svkv/riscv-tools:v1.0
```
Compile xv6:
```
make qemu 
```

## Debugging with GDB

Inside Docker:
```
cd xv6-riscv && make qemu-gdb
```
On another terminal (host system), get the container ID:
```
docker ps
```
Open a new terminal:
```
docker exec -it <container-id> bash
```
Connect GDB:
```
riscv64-unknown-elf-gdb xv6-riscv/kernel/kernel
target remote localhost:<tcp port id>
```
