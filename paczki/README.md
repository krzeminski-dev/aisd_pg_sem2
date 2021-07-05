# Paczki

_#rekurencja, #problem-plecakowy_

## Opis

Należy optymalnie upakować samochód przedmiotami o określonej wadze i wartości.
Można nie przyjąć zlecenia, jeśli naraża ono na koszty. Opłata za przeniesienie przedmiotów
do samochodu to 20 zł, koszt załadowania przedmiotu o wadze większej niż 100 kg wynosi 5 zł.
Nie wolno przekroczyć ładowności samochodu.

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
