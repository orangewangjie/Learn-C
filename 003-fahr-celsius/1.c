#include <stdio.h>

main(){
	float fahr, celsius;
	int lower, upper, step;
	lower = 0; /*温度表的下限*/
	upper = 300;/*温度表的下限*/
	step  = 20;/*步长*/
	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0 /9.0)*(fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr=fahr + step;
	}


	return 0;
}



