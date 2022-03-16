#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
    printf("enter the string\n");
    fgets(a,200,stdin);  
}
int count_words(char *string)
{
    char *b=strtok(string," ");
    int count=0;
    while(b!=NULL)
    {
        count++;
        printf("%s ",b);
        b=strtok(NULL," ");
    }
    return count;
}
void output(char *string,int no_words)
{
    printf("is %d",no_words);
}
int main()
{
    char s[20];
    input_string(s);
    printf("the number of words in the string ");
    output(s,count_words(s));
}
/*#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("input:\n");
  scanf("%s",a);
}
int count_words(char *str[])
{
  int count = 0;
  int in_word = 0;
  int i = 0;
  do {
     if (str[i] == '' || str[i] == '\t' || str[i] == '\0') {
       if(in_word)
       {
         in_word = 0;
         count++;
       }
     } 
     else 
     {
       in_word = 1;
     }
  } 
    while(str[i++]);

  return count;
}
  /*int i,no_words;
  no_words=1;
  for(i=0;a[n]!='\0';i++)
    {
      if(a[i]==""|| a[i]=='\n' || a[i])
        {
          no_words++;
        }
    }
  return no_words;
void output(char *str,int count)
{
  printf("%d\n",count);
}
int main()
{
  char a[100],str[];
  int i,count;
  input_string(a);
  count_words(str);
  output(a,count);
  return 0;
}*/