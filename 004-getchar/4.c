#include <stdio.h>

/*统计输入字符数； 版本1*/
main(){
	long nc;
	while(getchar() != EOF)
		++nc;
	printf("%ld \n", nc);

}


