#include <stdio.h>
#include <string.h>

void word_search (char text[], char word[])
{
  int index = -1;
  int text_length = 0;
  int word_length = 0;

  while (text[text_length] != '\0') {text_length++;}
  while (word[word_length] != '\0') {word_length++;}

  for (int i = 0; i <= text_length - word_length; i++)
  {
    int match = 1;
    for (int j = 0; j < word_length; j++)
    {
      if (text[i + j] != word[j])
      {
        match = 0;
        break;
      }
    }
    if (match == 1) 
    {
      index = i;
      break;
    }
  }

  if (index != -1)
    {printf("Word \"%s\" found at the %d position\n", word, index);}
  else
    {printf("Word \"%s\" not found\n", word);}

}


int main() 
{
  char text[] = "the cat sat on the mat";
  char word[] = "cat";

  word_search(text, word);

  return 0;
}
