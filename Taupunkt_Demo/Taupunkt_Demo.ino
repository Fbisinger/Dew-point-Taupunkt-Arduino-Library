/* ============================================
Arduino Taupunkt-Bibliothek
           2018 F.Bisinger

Diese Bibliothek errechnet aus Temperatur und 
Luftfeuchtigkeitswerten(relativ) den Taupunkt.
===============================================
*/
#include "Taupunkt.h"
Taupunkt demo;  //kann beliebig benannt werden.

void setup() {
  Serial.begin(9600);
}

void loop() {
Serial.println(demo.getTaupunkt(18,73));  //mit demo.getTaupunkt(Temperatur,Luftfeuchtigkeit) wird der Taupunkt errechnet, und als float ausgegeben.
delay(500);
}

/* Zusätzliche Informationen zum Taupunkt (Quelle: https://de.wikipedia.org/wiki/Taupunkt)
 * -------------------------------------------------------------------------------------------------------------------- |
 * Der Taupunkt, auch die Taupunkttemperatur, ist bei Luft mit einer bestimmten Luftfeuchtigkeit diejenige Temperatur,  |
 * die bei konstantem Druck unterschritten werden muss, damit sich Wasserdampf als Tau oder Nebel abscheiden kann.      |
 * Am Taupunkt beträgt die relative Luftfeuchtigkeit 100 % und die Luft ist mit Wasserdampf (gerade) gesättigt.         |
 * Je mehr Wasserdampf die Luft enthält, desto höher liegt deren Taupunkttemperatur. Der Taupunkt kann daher zur        |
 * Bestimmung der absoluten Luftfeuchtigkeit dienen. Der Taupunkt wird mit einem Taupunktspiegelhygrometer direkt,      |
 * oder mit anderen hygrometrischen Verfahren indirekt gemessen. Der Begriff des Taupunkts wird sinngemäß auch auf      |
 * andere Gasgemische mit kondensierbaren Bestandteilen angewendet. Für die Taupunkttemperatur wird oft der griechische |
 * Buchstabe τ als Formelzeichen verwendet.                                                                             |
 * ---------------------------------------------------------------------------------------------------------------------|
 */


