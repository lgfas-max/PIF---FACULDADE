# Lista de Exercícios – Capítulo 3: Laço de Repetição

---

## Questão 01. Diferenças Fundamentais e Tempo de Avaliação de Laços

**a)** O `while` testa a condição **antes** de executar o bloco, então pode **não** executar. O `do-while` executa o bloco primeiro e testa a condição **no final**, então executa **no mínimo uma vez**.

**b)**
- **for:** quando o número de iterações é conhecido ou há um contador claro (de 1 a N, tabelas, vetores).
- **while:** quando o número de repetições é desconhecido e a condição pode ser falsa desde o início (ler até o fim dos dados, repetir enquanto houver algo a processar).
- **do-while:** quando o bloco precisa rodar ao menos uma vez (validação de entrada, menus interativos).

**c)** É um **erro de lógica**, não de compilação. O ponto-e-vírgula forma uma instrução vazia, que passa a ser o corpo do laço. Se a condição for verdadeira e nada no teste a modificar, o programa fica preso testando a mesma condição para sempre (laço infinito sem corpo). As instruções seguintes nunca são executadas, e o bloco entre chaves que o programador achava ser o corpo só rodaria uma vez, depois que o laço terminasse.

---

## Questão 02. Escopo e Tempo de Vida de Variáveis de Bloco

**a)** A variável `soma` foi declarada dentro do bloco do `for`.

**b)** A cada iteração a variável é criada de novo e reinicializada com 0 (`int soma = 0;`). Assim, `soma += i * i` resulta apenas em `i*i` daquela iteração e nada é acumulado. Seria impresso 1, 4, 9... em vez de 1, 5, 14...

**c)** Código corrigido:

```c
#include <stdio.h>

int main() {
    int i;
    int soma = 0;               /* declarada fora do laço */
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);   /* 285 */
    return 0;
}
```

---

## Questão 03. Flexibilidade do Laço for e Omissão de Expressões

**a)** Saída do Trecho A: `36	18	9	4	2	1`
(36/2=18, 18/2=9, 9/2=4, 4/2=2, 2/2=1, 1/2=0 e o teste `a > 0` falha.)

**b)** O laço lê um caractere do teclado com `getch()` (sem eco e sem esperar Enter; função da `conio.h`, não padrão) e o atribui a `ch`. Enquanto não for `'X'`, imprime o caractere seguinte na tabela ASCII (`ch + 1`): `'a'` vira `'b'`, `'B'` vira `'C'`. É uma cifra simples. Os parênteses são necessários porque o operador `!=` tem precedência maior que o `=`. Sem eles, `ch = getch() != 'X'` seria avaliado como `ch = (getch() != 'X')`, e `ch` receberia 0 ou 1 em vez do caractere lido.

**c)** Com um comando de saída dentro do laço, normalmente um `if` com `break`, ou com `return`:

```c
for (;;) {
    printf("Laço Infinito\n");
    if (condicao_de_parada) break;
}
```

---

## Questão 04. Comandos de Desvio de Fluxo: break vs. continue

**a)** O `break` encerra imediatamente o laço mais interno que o contém, ignorando o restante do corpo e o teste. A execução continua na primeira instrução após o laço.

**b)** O `continue` interrompe a iteração atual e pula o resto do corpo. No `for`, a expressão executada imediatamente depois é a de **incremento** (terceira expressão), e em seguida o teste (segunda expressão) é avaliado.

**c)** Apenas o **laço interno** é interrompido. O laço externo continua normalmente com sua próxima iteração.

---

## Questão 05. Operador Vírgula e Múltiplas Variáveis de Controle

**a)** **5 iterações.** Valores (i, j): (0,10), (1,9), (2,8), (3,7), (4,6). Depois i=5 e j=5, e `5 < 5` é falso.

**b)**
```
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

**c)**
```c
int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

---

## Questão 06. Laço Sem Corpo e Incremento Pós-fixado

**a)** `Valor final de x = 6`

**b)** O teste usa o valor atual de `x` e só depois incrementa:

| Teste | x antes | Comparação | x depois |
|---|---|---|---|
| 1 | 0 | 0 < 5 verdadeiro | 1 |
| 2 | 1 | 1 < 5 verdadeiro | 2 |
| 3 | 2 | 2 < 5 verdadeiro | 3 |
| 4 | 3 | 3 < 5 verdadeiro | 4 |
| 5 | 4 | 4 < 5 verdadeiro | 5 |
| 6 | 5 | 5 < 5 falso | 6 |

O incremento acontece mesmo quando o teste dá falso, por isso o valor final é 6 e não 5.

**c)**
```c
int x = 0;
while (++x < 5);
printf("Valor final de x = %d\n", x);
```