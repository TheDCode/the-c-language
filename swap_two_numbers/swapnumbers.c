/*

##########################################################

## Written by: The D Code

## Module Name: ./swapnumbers

## I certify that this program code has been written by me

## and no part of it has been taken from any sources.

##########################################################

*/

#include <stdio.h> // standard input output header

// function declaration
void swapNumbers(int numberA, int numberB);

int main () {
	
	// local variables declaration
	int numberA = 0, numberB = 0;
	
	// prompts for user to enter data
	printf("Enter two numbers (separated by a space):");
	
	// catches the values 
	scanf("%d%d", &numberA, &numberB);
	
	// call function to swap the numbers 
	swapNumbers (numberA, numberB);
	
	printf ("*** Thank you! *** \n");
}

// function to swap two given numbers and print them 
void swapNumbers(int numberA, int numberB)
{
	// local var declaration
	int temp = 0;
	
	// swaps the numbers
	temp    = numberA;
	numberA = numberB;
	numberB = temp;
	
	// prints swapped numbers
	printf ("Swapped: %d %d\n", numberA, numberB);
}

