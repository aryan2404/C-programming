#include <stdio.h>

int main()
{
    enum month{jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec};
    
    enum month next_month(enum month m)
    {
        return((m + 1) % 12);
    }
    
    printf("%u\n", next_month(dec));

    return 0;
}