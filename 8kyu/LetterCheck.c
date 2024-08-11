#include <stdbool.h>
#include<stdio.h>

bool is_it_letter(char c) {

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
  
  char c;

  printf("Enter character: ");
  scanf("%c", &c);

  bool result = is_it_letter;

  if(result)
  {
      printf("Inputted character is a letter");
  }
  else
  {
      printf("Inputted character is not a letter");
  }
  
  return 0;  
}