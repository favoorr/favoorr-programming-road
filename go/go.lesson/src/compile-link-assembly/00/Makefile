# 编译和链接。
gcc: hello.c
	gcc -c -o hello.o $^	# compile
	gcc -o test hello.o 	# link

# 详细步骤。
step: hello.c
	gcc -E hello.c -o hello.i   # 预处理
	gcc -S hello.i -o hello.s   # 编译
	gcc -c hello.s -o hello.o  	# 汇编 as
	gcc -o test hello.o 		# 链接 ld

# go 编译和链接。
go: hello.go
	go tool compile -o hello.o $^
	go tool link -o test hello.o


clean:
	-rm *.[ois]
	-rm test
	-rm test[0-9]

.PHONY: clean