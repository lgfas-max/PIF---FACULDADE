## Questão 01

**a)** Será exibido o valor `2`.

**b)** Ocorre o truncamento. Ao atribuir um valor em ponto float (`2.97`) a uma variável int (`int`), o compilador descarta a parte fracionária

**c)** Pode ser evitado usando cast explícito `(int)` para indicar intenção, ou tratando a variável diretamente como `float`/`double`

---

## Questão 02

**a)** A biblioteca `<conio.h>` é legada e específica para MS-DOS/Windows. Usá-la quebra a portabilidade em Linux, macOS e servidores ANSI C.

**b)** Funções portáveis em `<stdio.h>`: `getchar()` para leitura e `putchar()` para escrita de caracteres.

**c)**

```c
char c;
scanf(" %c", &c); // O espaço antes do %c ignora espaços e \n pendentes
```

---

## Questão 03

```c
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    printf("Dec: %d | Hex: %x | Oct: %o | ASCII: %c\n", num, num, num, num);
    return 0;
}
```

---

## Questão 04

1. `a += b + c;` → `b + c = 5` → `a = 1 + 5` = **6**
2. `b *= c = d + 2;` → `c = 4 + 2 = 6` → `b = 2 * 6` = **12**
3. `d %= a + a + a;` → `6 + 6 + 6 = 18` → `d = 4 % 18` = **4**
4. `d -= c -= b -= a;`:
   - `b -= a` → `12 - 6` = 6
   - `c -= b` → `6 - 6` = 0
   - `d -= c` → `4 - 0` = **4**
5. `a += b += c += 7;`:
   - `c += 7` → `0 + 7` = 7
   - `b += c` → `6 + 7` = 13
   - `a += b` → `6 + 13` = **19**

**Valores Finais:** a = 19, b = 13, c = 7, d = 4

---

## Questão 05

| Expressão | Resultado |
|---|---|
| a) `1 < 5` | 1 |
| b) `-5 <= -6` | 0 |
| c) `1.1 >= 8.8` | 0 |
| d) `3.3 == 4.4` | 0 |
| e) `!(0)` | 1 |
| f) `!2 - 2` → `0 - 2` | -2 |
| g) `1 && 2 && 3` | 1 |
| h) `1 \|\| ...` | 1 |
| i) `1 && 0` | 0 |
| j) `0 \|\| 0 \|\| 0` | 0 |

---

## Questão 06

**a)** O incremento prefixado (`++n`) incrementa a variável antes de avaliar a expressão. O pós-fixado (`m++`) avalia o valor atual na expressão e só depois incrementa.

- Trecho A impresso: `n = 6, x = 6`
- Trecho B impresso: `m = 6, y = 5`

**b)** Modificar a mesma variável múltiplas vezes na mesma chamada de função causa Comportamento Indefinido (*Undefined Behavior*), pois o padrão C não garante a ordem de avaliação dos argumentos.