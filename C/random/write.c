#include <unistd.h>

/* write(int fildes, const void *buf, size_t nbyte)
 *
 * */


void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void){
    
    write(1, "Hello, world!\n", 14);
    
    // 'a' as literal char
    ft_putchar('a');
    /* Since ft_putchar expects one char,
     * \n has to be under its own function
     * or else it will overflow */
    ft_putchar('\n');
    // a as ASCII value (func expects char) 
    ft_putchar(97);
    ft_putchar('\n');

}

