#include <tiny13.h>
#include <delay.h>

void main()
{
    // ????? ???? B ?? ????? ????? ?? ??? ??? 0 ,1 ,2
    DDRB = (1<<PB0) | (1<<PB1) | (1<<PB2);

    while(1)
    {
        // LED ????
        PORTB = (1<<PB0);
        delay_ms(300);

        // LED ???
        PORTB = (1<<PB1);
        delay_ms(300);

        // LED ???
        PORTB = (1<<PB2);
        delay_ms(300);

        // ?? LED ????
        PORTB = (1<<PB0) | (1<<PB2);
        delay_ms(300);

        // ??? ????
        PORTB = (1<<PB0) | (1<<PB1) | (1<<PB2);
        delay_ms(300);

        // ??? ?????
        PORTB = 0x00;
        delay_ms(300);
    }
}
