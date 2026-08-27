# Lista de Exercícios – Capítulo 1
## Respostas das Questões 04 a 17

---

## Questão 04

Um estudante iniciante escreveu um programa com diversos erros. Erros encontrados:

1. `#include <stdlib.h>;`, ponto e vírgula sobrando após a diretiva de inclusão (diretivas de pré-processador não terminam com `;`)
2. `int Main{}`, nome da função errado (deve ser minúsculo, `main`) e uso de `{}` no lugar dos parênteses `()`
3. `(` e `)` sendo usados para delimitar o corpo da função, em C o corpo é delimitado por `{ }`, não por `( )`
4. `printf( Existem %d semanas no ano.,52);` a string de formato não está entre aspas
5. ` return 0;` no lugar errado

---

## Questão 05

Não, Faltam as diretivas `#include <stdio.h>` (necessária para `printf`) e `#include <stdlib.h>` (necessária para `system`). Também é recomendado declarar explicitamente o tipo de retorno da função (`int main()` em vez de `main()`)

---

## Questão 06

- `int a=1; b=2; c=3:` , `b` e `c` não foram declarados com `int` (só `a` foi); a declaração deveria ser `int a=1, b=2, c=3;`
- Em vez de `:`, no final da linha deveria ser `;`
- `printf("0s números são: %d%d%d\n, a, b, c, d);` — falta a aspa de fechamento da string logo após `\n`
- Há 3 especificadores `%d` mas 4 argumentos (`a, b, c, d`), e `d` nunca foi declarado
- Faltam `#include <stdio.h>` e `#include <stdlib.h>`
- Falta `return 0;` ao final da função

---

## Questão 07

Saída exata de cada instrução:

**a)** `printf("\n\tBom dia! Shirley.");`
Uma nova linha, seguida de uma tabulação, seguida de: `Bom dia! Shirley.`

**b)** `printf("Você já tomou café? \n");`
`Você já tomou café? ` seguido de nova linha.

**c)** `printf("\n\nA solução não existe!\nNão insista.");`
Duas linhas em branco, depois `A solução não existe!`, nova linha, `Não insista.`

**d)** `printf("Duas\tlinhas\tde\tsaída\nou\tuma?");`
`Duas` [tab] `linhas` [tab] `de` [tab] `saída`, nova linha, `ou` [tab] `uma?`

**e)** `printf("%s\n%s\n%s\n", "um", "dois", "três");`
```
um
dois
três
```

---

## Questão 08

```c
printf("\n\t\"Primeiro programa\"");
```

A saída será: uma nova linha, depois uma tabulação, depois o texto entre aspas literais:

```
	"Primeiro programa"
```

O `\"` é a sequência de escape que representa o caractere de aspas duplas dentro da string, permitindo que ele apareça literalmente na saída sem ser confundido com o delimitador da string.

---

## Questão 09

```c
printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
printf("%c", "\"");
```

A primeira linha imprime, em sequência: o caractere de nova linha, o caractere de tabulação e o caractere de aspas (todos passados como constantes de caractere entre aspas simples), seguidos do texto `Primeiro programa`. O compilador interpreta `'\n'`, `'\t'` e `'\"'` como constantes de caractere único (tipo `char`), cada uma correspondendo a um valor numérico da tabela ASCII.

A segunda linha, `printf("%c", "\"")`, contém um erro: `"\""` é uma *string* (um ponteiro para `char`), não uma constante de caractere. Passar um ponteiro onde `%c` espera um `char` é comportamento indefinido — a maioria dos compiladores emite um aviso e o resultado impresso normalmente não é o caractere esperado (pode imprimir lixo ou um caractere baseado nos bits truncados do endereço).

---

## Questão 10

Resposta correta: **b) Verdadeiro**, a linguagem C diferencia rigorosamente maiúsculas de minúsculas.

Isso significa que `peso`, `Peso` e `PESO` são três identificadores completamente distintos, tratados pelo compilador como três variáveis diferentes, ocupando (se todas forem declaradas) três espaços de memória separados. Esse comportamento se aplica a todos os identificadores em C: nomes de variáveis, funções, palavras-chave e macros

---

## Questão 11

| Constante | Classificação | Tipo base |
|---|---|---|
| `\r` | sequência de escape (constante de caractere) | char |
| `2130` | constante inteira decimal | int |
| `-123` | constante inteira decimal | int |
| `33.28` | constante de ponto flutuante | double |
| `0XFA` | constante inteira hexadecimal | int |
| `0101` | constante inteira octal | int |
| `2.0e30` | constante de ponto flutuante (notação científica) | double |
| `\xDC` | sequência de escape hexadecimal (constante de caractere) | char |
| `'\"'` | constante de caractere | char |
| `'\\'` | constante de caractere | char |
| `'F'` | constante de caractere | char |
| `0` | constante inteira decimal | int |
| `'\0'` | constante de caractere (nulo) | char |
| `"F"` | constante string | char[] (array/ponteiro de char) |
| `-4567.89` | constante de ponto flutuante | double |

---

## Questão 12

| Instrução | Status | Justificativa |
|---|---|---|
| a) `int a;` | Correto | Declaração simples e válida de inteiro |
| b) `float b;` | Correto | Declaração simples e válida de ponto flutuante |
| c) `double float c;` | Incorreto | Não é permitido combinar dois tipos base distintos (`double` e `float`) numa mesma declaração |
| d) `unsigned char d;` | Correto | Modificador `unsigned` aplicado corretamente a `char` |
| e) `unsigned e;` | Correto | `unsigned` sozinho equivale a `unsigned int` |
| f) `long float f;` | Incorreto | Não existe combinação padrão "long float" no ANSI C (o equivalente correto seria `double`) |
| g) `long g;` | Correto | `long` sozinho equivale a `long int` |
| h) `long double h;` | Correto | Combinação válida de tipo estendido |

---

## Questão 13

Resposta correta: **c)** São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos

---

## Questão 14

Resposta correta: **a)** Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte

---

## Questão 15

Resposta correta: **c)** Uma diretiva especial para o pré-processador C, executada antes da compilação

---

## Questão 16

Resposta correta: **c)** Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita)

---

## Questão 17

Estão sintaticamente corretas: **a, b e c**

A instrução **d** está incorreta, pois falta o uso dos parênteses e das aspas obrigatórios na chamada da função (`printf "Primeiro programa" ;` não é uma chamada de função válida)

Isso demonstra que o compilador C é flexível quanto a espaços em branco extras entre tokens (antes/depois de parênteses, por exemplo), mas é rígido quanto aos elementos sintáticos obrigatórios: parênteses delimitando os argumentos da função, aspas delimitando strings literais, e ponto e vírgula finalizando a instrução
