#include <stdio.h>
/* print Celsius-Fahr table
for celsius  = 0, 20, ..., 300; floating-point version */
int  main()
{
	 float fahr, celsius;
	 float lower, upper, step;
	 lower = 0; /* lower limit of temperatuire scale */
	 upper = 300; /* upper limit */
	 step = 20; /* step size */
	 celsius = lower;
	 printf("Celsius to Fahrenheit Conversion Table\n");
	 while (celsius <= upper) {
		 fahr = celsius * 1.8 + 32;
		 printf("%3.0f %6.1f\n", celsius, fahr);
		 celsius = celsius + step;
		 }
	 return 0;
}
