#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *print_dog - prints the struct dog
 *@d: the dog to print
 *Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printd("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}