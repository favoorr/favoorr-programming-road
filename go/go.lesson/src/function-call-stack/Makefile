c: test.c
	gcc -g -O0 -o test $^

go: test.go
	go build -gcflags "-N -l" -o test $^

# 代码优化模式。
co: test.c
	gcc -g -O2 -o test $^

# 代码优化模式。
goo: test.go
	go build -gcflags "-l" -o test $^

clean:
	-rm test *.o *.so *.a *.s
	
.PHONY: clean

