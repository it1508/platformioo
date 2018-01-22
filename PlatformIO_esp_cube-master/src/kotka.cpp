#include "kostka.hpp"
#include <Arduino.h>
Kostka::Kostka(int a, int b, int c, int d, int e, int f, int g){
    this->a=a;
    this->b=b;
    this->c=c;
    this->d=d;
    this->e=e;
    this->f=f;
    this->g=g;
}

void Kostka::clear(){
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
}

void Kostka::one(){
    this->clear();
    digitalWrite(d,HIGH);
}

void Kostka::two(){
    this->clear();
    digitalWrite(a,HIGH);
    digitalWrite(g,HIGH);
}
void Kostka::three(){
    this->clear();
    digitalWrite(a,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(g,HIGH);
}
void Kostka::four(){
    this->clear();
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(g,HIGH);
}
void Kostka::five(){
    this->clear();
    digitalWrite(a,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(g,HIGH);
}
void Kostka::six(){
    this->clear();
    digitalWrite(a,HIGH);
    digitalWrite(b,HIGH);
    digitalWrite(c,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
}