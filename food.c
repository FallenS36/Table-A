/*
=============================================================
Name     :  Alexander Medvec
Program  :  food.c
Cource   :  COP 3223C-004
Date     :  1/29/2020
=============================================================
*/

#include <stdio.h>

int main()
{
// x = People who order chicken. B and A are variables used in the printf statemt to notify the user of spending limit
	int CostChicken,CostBeef,NumGuest,SpendLimit,X,A,B;

// Chicken cost and restrictions
	printf("What is the cost of chicken, in dollars? ");
	scanf("%d", &CostChicken);
	if (CostChicken < 0)
	{
		printf("Chicken isnt that cheap! ");
    return 0;
	}
		if(CostChicken > 100)
	    {
		    printf("The chicken costs too much! ");
        return 0;
	    }

// Beef cost and restrictions	
	printf("What is the cost of beef, in dollars? ");
	scanf("%d", &CostBeef);
	if (CostBeef < CostChicken)
	{
		printf("Beef isnt that cheap! ");
    return 0;
	}
		if(CostBeef > 100)
	    {
		    printf("The beef costs too much! ");
        return 0;
	    }

//Number of guests and restrictions	
	printf("How many guests will there be? ");
	scanf("%d", &NumGuest);
	if (NumGuest < 10)
	{
		printf("Not enough guests! ");
    return 0;
	}
		if(NumGuest > 1000)
		{
			printf("Too many guests! ");
      return 0;
		}

//Spending limit and its restriction.
//Restriction: Target limit must be greater than everyone ordering chicken. And less than everyone ordering beef
  A=NumGuest*CostChicken;
  B=NumGuest*CostBeef;	
	
  printf("What is your spending limit? Based on the number of guests that will attend and the cost of meat, it must be greater than %d and  less than %d dollars. ",A,B);
	scanf("%d", &SpendLimit);
  if(SpendLimit <= NumGuest*CostChicken)
  {
    printf("Youre too poor to throw such a party!");
    return 0;
  }
    if(SpendLimit>=NumGuest*CostBeef)
    {
      printf("Thats a waste!");
      return 0;
    }

//Equation for number of guest who must order chicken.
  X =  (CostBeef*NumGuest - SpendLimit)/(CostBeef - CostChicken)+1;printf("\n\nYou need at least %d guests to order chicken." , X);
    
  return 0;

}
