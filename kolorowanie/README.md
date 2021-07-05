# Kolorowanie

_#grafy_

## Treść

Pokolorowanie wierzchołków grafu nazywamy legalnym, jeśli dwa jego połączone wierzchołki mają różny kolor.
Najmniejsza liczba kolorów (mogą być wszystkie odcienie różowego) potrzebnych do (legalnego) pokolorowania grafu to liczba chromatyczna tego grafu.
Stopień wierzchołka jest to liczba wychodzących z niego krawędzi.
Sprawdź czy liczba chromatyczna grafu jest większa niż jego największy stopień. Możesz użyć dowolnego algorytmu również własnego (dla kolorowania).

### Przykład:

#### Wejście

```cpp
3 //liczba kolejnych linii
5 0111110111110111110111110 //liczba wierzchołków grafu, a następnie macierz sąsiedztwa
5 0110010000100110010000100
7 0110111101000111011110010100101101010101011110010
```

#### Wyjście:

```cpp
True //jesli liczba chromatyczna grafu jest większa niż jego największy stopień
False
False
```
