flex compiler.l
bison -y -d compiler.y
g++ -c y.tab.c lex.yy.c
g++ y.tab.o lex.yy.o -o compiler.exe
compiler.exe