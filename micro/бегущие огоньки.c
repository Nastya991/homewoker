#define timepause 500         //заменяем timepause на 500

void main() {

  TRISB=0;                         //все выводы порта В на выход

  PORTB=0;                        //начальные значения на выводах порта 0

  while(1)                             //организуем бесконеченый цикл

  {

    PORTB.F4 = 1;                  //На RB4 1 - LED1 горит

    Delay_ms (timepause);     //Пауза на 500 мс

    PORTB.F4 = 0;                 //На RB4 0 - LED1 не горит

    PORTB.F5 = 1;                 //На RB5 1 - LED2 горит

    Delay_ms (timepause);     //Пауза на 500 мс

    PORTB.F5 = 0;                 //На RB5 0 - LED2 не горит

    PORTB.F6 = 1;                 //На RB6 1 - LED3 горит

    Delay_ms (timepause);     //Пауза на 500 мс

    PORTB.F6 = 0;                 //На RB6 0 - LED3 не горит

    PORTB.F7 = 1;                 //На RB7 1 - LED4 горит

    Delay_ms (timepause);     //Пауза на 500 мс

    PORTB.F7 = 0;                 //На RB7 1 - LED4 не горит

  }

}