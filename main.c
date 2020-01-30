#include <stdio.h>

int main(void) 
{
  //TPeople=Total People, PPTable=People per Table
  int Space,Rows,Columns,LRoom,WRoom,LTable,WTable,PPTable,TPeople;
  
  //Dimentions of the room. Restrictions. And responses
  printf("What is the length of the room? ");
  scanf("%d", &LRoom);
  if(LRoom <= 0)
  {
    printf("The room is too short! ");
    return 0;
  }
    if(LRoom > 1000)
    {
      printf("The room is too long! ");
      return 0;
    }
  
  printf("What is the width of the room? ");
  scanf("%d", &WRoom);
  if(WRoom < 0)
  {
    printf("The room is too short! ");
    return 0;
  }
    if(WRoom > 1000)
    {
      printf("The room is too long! ");
      return 0;
    }

  //Dimentions of the tables. Restrictions. And responses
  printf("What is the length of each table ? ");
  scanf("%d", &LTable);
  if(LTable < 0)
  {
    printf("The table is too short! ");
    return 0;
  }
    if(LTable > 1000)
    {
      printf("The table is too long! ");
      return 0;
    }
  
  printf("What is the width of each table ? ");
  scanf("%d", &WTable);
  if(LTable < 0)
  {
    printf("The table is too short! ");
    return 0;
  }
    if(WTable > 1000)
    {
      printf("The table is too long! ");
      return 0;
    }
   
  //Dimentions of rows. Restrictions. And responses
  printf("How much space is required between each table? ");
  scanf("%d", &Space);
  if(Space < 0)
  {
    printf("There isn't enough space between each table! ");
    return 0;
  }
    if(Space > 10)
    {
      printf("There is too much spce between each table! ");
      return 0;
    }

  //Number of people seated per table. Restrictions. And responses.
  printf("How many people does each table seat? ");
  scanf("%d", &PPTable);
  if(PPTable < 3)
  {
    printf("There arnt enough people seated at each table! ");
    return 0;
  }
    if(PPTable > 20)
    {
      printf("There are too many people seated at each table! ");
      return 0;
    }
    
  //Opperation to seat the optimal number of people
  Rows=(WRoom-Space)/(WTable+Space);
  Columns=(LRoom-Space)/(LTable+Space);
  TPeople=Rows*Columns*PPTable;
  
  printf("There are %d people seated in the room.", TPeople);

  return 0;
}