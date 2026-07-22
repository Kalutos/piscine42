#include <unistd.h>

void ft_print_reverse_alphabet()
{
	write(1,"zyxwvutsrqponmlkjihgfedcba ",26);
	write(1,"\n ",1);
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
