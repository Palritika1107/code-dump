#include<stdio.h>
void reverseWords(char*);
void reverse( char*, char*);

int main()
{
    char* ch = "hello there my";
    reverseWords(ch);
    puts(ch);

    return 0;

}

void reverseWords(char* ch)
{
    char* first = NULL;
    char* temp = ch;

    while(*temp)
    {
        if((first == NULL) && (*temp != ' '))
        {
            first = temp;
        }
        if((first && (*(temp+1)==' ')) || *(temp+1)=='\0' )
        {
            reverse(first,temp);
            first = NULL;
        }
        temp++;
    }
    reverse(ch,temp-1);
}

void reverse(char* begin, char* end)
{
   char c;

   if (begin >= end)
      return;

   c  = *(begin);
   *(begin) = *(end);
   *(end)   = c;

   reverse(++begin, --end);
}