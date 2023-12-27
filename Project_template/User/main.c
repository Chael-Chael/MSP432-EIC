#include "D:\MSP432-EIC\Project_template\Lib\inc\UART0.h"
#include "D:\MSP432-EIC\Project_template\Lib\inc\Clock.h"
#include "D:\MSP432-EIC\Project_template\Lib\driverlib\MSP432P4xx\driverlib.h"
#include "stdint.h"

int main()
{
    Clock_Init48MHz();
    UART0_Initprintf();

    GPIO_setAsOutputPin(GPIO_PORT_P1, GPIO_PIN0);
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);

    while (1)
    {
        GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN0);
        Clock_Delay1ms(500);
        GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN0);
    }

    return 0;
}
