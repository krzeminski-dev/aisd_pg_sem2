# Sekta

_#lista_

## Opis

W sekcie znajduje się n (numeracja od 1) osób chcących popełnić samobójstwo, z wyjątkiem jednej.
Członkowie ustawiają się w kole, co druga osoba zostanie zamordowana. Osoba z jakim numerem zginie jako k-ta?
Jeśli n=10, to porządek będzie następujący: 2,4,6,8,10,3,7,1,9. Przeżyła osoba z numerem 5. Jest to równoznaczne z
n=10 i k=10. Jeśli n=10 i k=6, to jako szósta zginie osoba na miejscu 3. Oznaczenia -1,-2 itd. oznaczają ostatnią osobę, przedostatnią osobę... n=11 i k=11 jest tym samym, co n=11 i k=-1, a n=7 i k=5 da ten sam wynik co n=7 i k=-3.

### Przykład:

#### Wejście

```cpp
3 //liczba kolejnych linii (zapytan)
4 4 //n k
5 -2 //...
13 -6
```

#### Wyjście:

```cpp
1 //miejsce w kregu
5
5
```
