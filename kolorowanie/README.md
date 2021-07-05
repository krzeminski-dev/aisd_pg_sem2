# Kolorowanie

_#grafy_

## Treść

Pokolorowanie wierzchołków w grafie jest legalne, jeśli dwa połączone wierzchołki mają inne kolory.
Najmniejsza liczba kolorów potrzebnych do legalnego pokolorowania to liczba chromatyczna. Należy sprawdzić,
czy liczba chromatyczna grafu jest większa niż jego największy stopień.

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
