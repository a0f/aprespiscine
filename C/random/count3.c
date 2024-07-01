#include <stdio.h>

int main(void)
{
  int c, bl, tb, nl; 


  bl = 0;
  tb = 0;
  nl = 0;


 while((c = getchar()) != EOF)
  {
    if (c == '\n')
    {
      ++nl;
      putchar('\\');
      putchar('n');
    }
    
    else if (c == '\t')
    {
      ++tb;
      putchar('\\');
      putchar('t');
    
    }

    else if (c == ' ')
    {
      ++bl;
      putchar('\\');
      putchar('b');
    }
    else if (c == '!')
    {
      break;
    }
    else
    {
      putchar(c);
    }
  }
 
    printf("blank:%d\ntab:%d\nnewlines:%d\n", bl, tb, nl);
}
