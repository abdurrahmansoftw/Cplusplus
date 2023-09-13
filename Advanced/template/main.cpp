

 // MakeIdea [Hemant]
#include <avr/io.h>
#include <avr/interrupt.h>
#include <math.h>

#define SinDivisions (200)

static int microMHz = 16;
static int freq = 50;
static long int period;
static unsigned int lookUp[SinDivisions];
static char theTCCR1A = 0b10000010;

void setup()
{
  double temp;

  period = microMHz*1e6/freq/SinDivisions;

  for(int i = 0; i < SinDivisions/2; i++)
  {
    temp = sin(i*2*M_PI/SinDivisions)*period;
    lookUp[i] = (int)(temp+0.5);
  }

  TCCR1A = theTCCR1A;

  TCCR1B = 0b00011001;

  TIMSK1 = 0b00000001;

  ICR1   = period;
  sei();

  DDRB = 0b00000110;
  pinMode(13, OUTPUT);
}

void loop(){;}

    auto result = larger(5, 3);
    auto result1 = larger(1.0, 2.0);
    auto result2 = larger('a', 'b');

    return 0;
}

