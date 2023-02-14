@page dodatkowa strona  dokumentacji dodatkowa
@tableofcontents

@section sekcja1
Metoda prostokątów (inaczej nazywana też numeryczną metodą całkowania Riemanna) polega na numerycznym aproksymowaniu wartości całki oznaczonej funkcji na przedziale a do b.

Całka oznaczona funkcji f(x) na przedziale a do b jest wyznaczana poprzez sumowanie wartości funkcji f(x) w punktach xi = a + i * h (gdzie h to krok całkowania, a i to indeks przebiegu przez przedział całkowania), gdzie i = 0, 1, 2, ..., n (n to liczba podprzedziałów).

Wzór na aproksymację całki oznaczonej funkcji f(x) na przedziale a do b wygląda następująco:

∫f(x)dx ≈ h * (f(a) + f(a + h) + f(a + 2h) + ... + f(b - h) + f(b)) / 2

gdzie h = (b - a) / n.