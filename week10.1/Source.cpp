#include<stdio.h>
#include<math.h>
void change(int C, float F, float K)
{
	float a, b;
	a = 9 * C;
	b = a / 5;
	F = b + 32;
	printf("\nFahrenheit : %.2f\n", F);
	
	K = C + 273.15;
	printf("\nKelvin : %.2f\n", K);

	printf("\n--- Weather ---");
	if (C < 8) {
		printf("\nVery Cold");
	} else if (C < 16) {
		printf("\nCold");
	} else if (C < 18) {
		printf("\nModerately Cold");
	} else if (C < 23) {
		printf("\nCool");
	} else if (C < 30) {
		printf("\nGood Weather");
	} else if (C < 40) {
		printf("\nHot");
	} else {
		printf("\nVery hot");
	}
}
int main()
{
	int * Celsius, C;
	float * Fahrenheit, * Kelvin, F, K;
	Celsius = &C;
	Fahrenheit = &F;
	Kelvin = &K;

	char DC[1][30] = { "Celsius" };
	int i;
	int j[3];
	for (i = 0; i < 1; i++)
	{
		printf("%s : ", DC[i]);
		scanf_s("%d", &j[i]);
	}

	change(j[0], j[1], j[2]);
	return 0;
}