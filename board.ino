#include <Arduino.h>
#include <Stepper.h>

#define DEBUG

String username;

const int stepsPer = 200;
const int a = 20;
const int b = 25;
const int c = 30;
const int cc = 35;
const int d = 40;
const int e = 45;
const int f = 50;
const int g = 55;
const int gg = 60;
const int h = 65;
const int ii = 70;
const int i = 75;
const int j = 80;
const int k = 85;
const int l = 90;
const int m = 95;
const int n = 100;
const int o = 105;
const int oo = 110;
const int p = 115;
const int r = 120;
const int s = 125;
const int ss = 130;
const int t = 135;
const int u = 140;
const int uu = 145;
const int v = 150;
const int y = 155;
const int z = 160;

Stepper stepper(stepsPer, 8, 9, 10, 11);

void name_writer(String ch);

void setup()
{
    Serial.begin(9600);
    stepper.setSpeed(50);
}
void loop()
{
    if (Serial.available())
    {
        username = Serial.readString();
        for (int i = 0; i <= sizeof(username); i++)
        {   
            Serial.println(username[i]);
            name_writer(String(username[i]));
        }
    }
}

void name_writer(String ch)
{
    if (ch == "A" || ch == "a")
    {
        stepper.step(a);
        #ifdef DEBUG
        Serial.println("A harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-a);
    }
    if (ch == "B" || ch == "b")
    {
        stepper.step(b);
        #ifdef DEBUG
        Serial.println("B harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-b);
    }
    if (ch == "C" || ch == "c")
    {
        stepper.step(c);
        #ifdef DEBUG
        Serial.println("C harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-c);
    }
    if (ch == "Ç" || ch == "ç")
    {
        stepper.step(cc);
        #ifdef DEBUG
        Serial.println("Ç harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-cc);
    }
    if (ch == "D" || ch == "d")
    {
        stepper.step(d);
        #ifdef DEBUG
        Serial.println("D harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-d);
    }
    if (ch == "E" || ch == "e")
    {
        stepper.step(e);
        #ifdef DEBUG
        Serial.println("E harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-e);
    }
    if (ch == "F" || ch == "f")
    {
        stepper.step(f);
        #ifdef DEBUG
        Serial.println("F harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-f);
    }
    if (ch == "G" || ch == "g")
    {
        stepper.step(g);
        #ifdef DEBUG
        Serial.println("G harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-g);
    }
    if (ch == "Ğ" || ch == "ğ")
    {
        stepper.step(gg);
        #ifdef DEBUG
        Serial.println("Ğ harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-gg);
    }
    if (ch == "H" || ch == "h")
    {
        stepper.step(h);
        #ifdef DEBUG
        Serial.println("H harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-h);
    }
    if (ch == "I" || ch == "ı")
    {
        stepper.step(ii);
        #ifdef DEBUG
        Serial.println("I harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-ii);
    }
    if (ch == "İ" || ch == "i")
    {
        stepper.step(i);
        #ifdef DEBUG
        Serial.println("İ harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-i);
    }
    if (ch == "J" || ch == "j")
    {
        stepper.step(j);
        #ifdef DEBUG
        Serial.println("J harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-j);
    }
    if (ch == "K" || ch == "k")
    {
        stepper.step(k);
        #ifdef DEBUG
        Serial.println("K harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-k);
    }
    if (ch == "L" || ch == "l")
    {
        stepper.step(l);
        #ifdef DEBUG
        Serial.println("L harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-l);
    }
    if (ch == "M" || ch == "m")
    {
        stepper.step(m);
        #ifdef DEBUG
        Serial.println("M harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-m);
    }
    if (ch == "N" || ch == "n")
    {
        stepper.step(n);
        #ifdef DEBUG
        Serial.println("N harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-n);
    }
    if (ch == "O" || ch == "o")
    {
        stepper.step(o);
        #ifdef DEBUG
        Serial.println("O harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-o);
    }
    if (ch == "Ö" || ch == "ö")
    {
        stepper.step(oo);
        #ifdef DEBUG
        Serial.println("Ö harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-oo);
    }
    if (ch == "P" || ch == "p")
    {
        stepper.step(p);
        #ifdef DEBUG
        Serial.println("P harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-p);
    }
    if (ch == "R" || ch == "r")
    {
        stepper.step(r);
        #ifdef DEBUG
        Serial.println("R harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-r);
    }
    if (ch == "S" || ch == "s")
    {
        stepper.step(s);
        #ifdef DEBUG
        Serial.println("S harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-s);
    }
    if (ch == "Ş" || ch == "ş")
    {
        stepper.step(ss);
        #ifdef DEBUG
        Serial.println("Ş harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-ss);
    }
    if (ch == "T" || ch == "t")
    {
        stepper.step(t);
        #ifdef DEBUG
        Serial.println("T harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-t);
    }
    if (ch == "U" || ch == "u")
    {
        stepper.step(u);
        #ifdef DEBUG
        Serial.println("U harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-u);
    }
    if (ch == "Ü" || ch == "ü")
    {
        stepper.step(uu);
        #ifdef DEBUG
        Serial.println("Ü harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-uu);
    }
    if (ch == "V" || ch == "v")
    {
        stepper.step(v);
        #ifdef DEBUG
        Serial.println("V harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-v);
    }
    if (ch == "Y" || ch == "y")
    {
        stepper.step(y);
        #ifdef DEBUG
        Serial.println("Y harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-y);
    }
    if (ch == "Z" || ch == "z")
    {
        stepper.step(z);
        #ifdef DEBUG
        Serial.println("Z harfi yazıldı");
        #endif
        delay(200);
        stepper.step(-z);
    }
}