#include"Upr.h"
#include"director.h"
#include"worker.h"

void main()
{
	

	employer *a =  new Director("Petya", 25, 3, 5);
	employer *b = new Upr("Katya", 23, 0, 2);
	employer *c = new worker("Fedya", 35, 10, 10, 2000);


	a->info();




	system("pause");
}