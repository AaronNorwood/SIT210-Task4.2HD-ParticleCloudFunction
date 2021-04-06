int red = D5;
int orange = D4;
int green = D3;

//function for toggling LEDs on/off
int toggleRed(String command)
{

    if(command.toLowerCase() == "on")
    {
        digitalWrite(red,HIGH);
        digitalWrite(orange,LOW);
        digitalWrite(green,LOW);
        return 1;
    }
    return -1;

}
int toggleOrange(String command)
{

    if(command.toLowerCase() == "on")
    {
        digitalWrite(red,LOW);
        digitalWrite(orange,HIGH);
        digitalWrite(green,LOW);
        return 1;
    }
    return -1;

}
int toggleGreen(String command)
{

    if(command.toLowerCase() == "on")
    {
        digitalWrite(red,LOW);
        digitalWrite(orange,LOW);
        digitalWrite(green,HIGH);
        return 1;
    }
    return -1;

}
/*
int toggleLEDs(int on, int off1, int off2)
{
        digitalWrite(on,HIGH);
        digitalWrite(off1,LOW);
        digitalWrite(off2,LOW);

}*/

void setup() {

    pinMode(red, OUTPUT);
    pinMode(orange, OUTPUT);
    pinMode(green, OUTPUT);
    
    Particle.function("toggleRed", toggleRed);
    Particle.function("toggleOrange", toggleOrange);
    Particle.function("toggleGreen", toggleGreen);


}


void loop() {

}
