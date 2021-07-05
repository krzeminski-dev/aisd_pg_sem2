# Paczki

_#rekurencja, #problem-plecakowy_

## Treść

Twoim zadaniem jest zapakowanie samochodu przedmiotami. Masz do wyboru n przedmiotów
a przewóz i-tego przedmiotu możesz uzyskać Pi złotych (i=1,2,..,n).
Waga i-tego przedmiotu wynosi Wi (i=1,2,..,n).
Masa towaru w samochodzie nie może przekroczyć wartości C.
Upakuj samochód optymalnie, tj. tak by suma wag nie przekroczyła C oraz suma złotych była największa.
Możesz nie przyjąć zlecenia jeśli narazi Cię to na koszty. Stała opłata za przeniesienie przedmiotów do samochodu wynosi 20 zł.
Dodatkowo, koszt przeniesienia każdego załadowanego przedmiotu o wadze większej niż 100 kg wynosi 5 zł.

### Przykład:

#### Wejście

```cpp
2 //liczba zlecen
5 //ilosc przedmiotow
588 40 307 367 206 //wartosci przedmiotow
211 30 974 943 622 //wagi przedmiotow
1766 //ladownosc ciezarowki
1 //ilosc przedmiotow
596 //...
997
550
```

#### Wyjście:

```cpp
965 //optymalny profit dla pierwszego zlecenia
0 //optymalny profit dla drugiego zlecenia
```
