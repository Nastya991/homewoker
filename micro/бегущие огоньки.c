#define timepause 500         //�������� timepause �� 500

void main() {

  TRISB=0;                         //��� ������ ����� � �� �����

  PORTB=0;                        //��������� �������� �� ������� ����� 0

  while(1)                             //���������� ������������ ����

  {

    PORTB.F4 = 1;                  //�� RB4 1 - LED1 �����

    Delay_ms (timepause);     //����� �� 500 ��

    PORTB.F4 = 0;                 //�� RB4 0 - LED1 �� �����

    PORTB.F5 = 1;                 //�� RB5 1 - LED2 �����

    Delay_ms (timepause);     //����� �� 500 ��

    PORTB.F5 = 0;                 //�� RB5 0 - LED2 �� �����

    PORTB.F6 = 1;                 //�� RB6 1 - LED3 �����

    Delay_ms (timepause);     //����� �� 500 ��

    PORTB.F6 = 0;                 //�� RB6 0 - LED3 �� �����

    PORTB.F7 = 1;                 //�� RB7 1 - LED4 �����

    Delay_ms (timepause);     //����� �� 500 ��

    PORTB.F7 = 0;                 //�� RB7 1 - LED4 �� �����

  }

}