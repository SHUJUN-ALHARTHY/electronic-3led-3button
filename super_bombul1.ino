const int button1=5;
const int button2=3;
const int button3=1;


const int led1=12;
const int led2=10;
const int led3=8;

void setup()
{
  pinMode(button1, INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3,OUTPUT);
}

void loop()
{
  digitalWrite(led1,digitalRead(button1));
  digitalWrite(led2,digitalRead(button2));
  digitalWrite(led3,digitalRead(button3));
}