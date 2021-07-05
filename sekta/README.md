# Sekta

_#lista_

## Treść

Znaleźliście się w nieodpowiednim miejscu i w nieodpowiednim czasie. Wśród n (np. n=20)
osób (numerujemy od 1) wszyscy oprócz Ciebie chcą popełnić samobójstwo (niestety nie masz czasu na agitację).
Guru wymyślił(a) następującą metodę: ustawiacie się w kółku i co 2-ga osoba zostaje
zamordowana (nie pierwsza, a druga, nie trzecia, a czwarta, nie piąta, a szósta, itd.).
W którym miejscu staniesz (wybieraj od 1 do 20)? Czas start masz 10 sekund.
Który z kolei zginiesz? Kto jest następny? Kto zginie jako k-ty?
Niech n=10. Wówczas porządek jest następujący 2,4,6,8,10,3,7,1,9.
Przetrwała 5-tka. Jest to równoważne z n=10 i k=10. Niech n=10 i k=6.
Wówczas jako szósta zginie osoba na miejscu 3.
Przyjmujemy oznaczenia -1, -2, -3 itd. - oznaczają ostatnią osobę, przedostatnią osobę itd. Wówczas n=11 i k=11 daje ten sam wynik co n=11 i k=-1,
n=7 i k=5 daje ten sam wynik co n=7 i k=-3.

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
