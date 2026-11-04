# Simulado PIF - Capítulos 1, 2 e 3

## Parte I: Questões teóricas e analíticas

---

## Questão 01

**Alternativa correta: c)**

C diferencia maiúsculas de minúsculas, então 'valor' e 'VALOR', 'peso' e 'Peso', 'taxa' e 'TAXA' são identificadores distintos.

- a) Falsa: 'numero' e 'Numero' são variáveis diferentes, com endereços de memória diferentes.
- b) Falsa: o ponto de entrada é 'main' em minúsculo. 'Main' seria apenas um nome qualquer.
- d) Falsa: a sensibilidade a caixa é regra da linguagem, não depende do sistema operacional.

---

## Questão 02

Erros do código:

1. `#include <stdlib.h>;` tem um ponto-e-vírgula sobrando. Diretivas de pré-processador não terminam com ponto-e-vírgula.
2. `int Main()` deveria ser `int main()`. Com 'M' maiúsculo, o compilador não encontra o ponto de entrada.
3. `printf( A idade do aluno eh: %d anos.. , idade);` não tem aspas na string de formato. O correto é `printf("A idade do aluno eh: %d anos.\n", idade);`. Falta também o `\n` para a quebra de linha.

---

## Questão 03

Valores iniciais: a = 2, b = 4, c = 5, d = 10.

| Instrução | Resolução | Resultado |
|---|---|---|
| `a += b + c;` | a = 2 + (4 + 5) | **a = 11** |
| `b *= c = d - 2;` | c = 10 - 2 = 8; b = 4 * 8 | **c = 8, b = 32** |
| `d %= a + 3;` | d = 10 % (11 + 3) = 10 % 14 | **d = 10** |
| `a += b += c += 5;` | c = 8 + 5 = 13; b = 32 + 13 = 45; a = 11 + 45 = 56 | **c = 13, b = 45, a = 56** |

Valores finais: **a = 56, b = 45, c = 13, d = 10**.

---

## Questão 04

Dados: i = 2, j = 3, k = 0, x = 2.5, y = 5.0.

| Item | Avaliação | Resultado |
|---|---|---|
| a) `i < j + 2` | 2 < 5 | **1** |
| b) `2 * i - 5 <= j - 4` | 4 - 5 = -1 <= -1 | **1** |
| c) `!k && (x + y >= 7.5)` | !0 = 1 e 7.5 >= 7.5 é 1, logo 1 && 1 | **1** |
| d) `!(i == j) \|\| (y / x == 2.0)` | !(0) = 1, então o `\|\|` é verdadeiro | **1** |
| e) `i == 2 && j == 4 \|\| k == 0` | (1 && 0) \|\| 1 = 0 \|\| 1 | **1** |

---

## Questão 05

**a)** No `while`, a condição é testada **antes** de cada execução do bloco, então ele pode executar **zero vezes**. No `do-while`, a condição é testada **depois**, então o bloco executa **no mínimo uma vez**, mesmo que a condição seja falsa desde o início.

**b)** O `for` é mais elegante e legível quando o número de iterações é conhecido ou controlado por um contador: percorrer vetores, repetir N vezes, contagens crescentes ou decrescentes. Ele concentra inicialização, condição e incremento em uma única linha, o que reduz o risco de esquecer o incremento.

**c)** É um **erro de lógica**, não de compilação. O ponto-e-vírgula é interpretado como o corpo vazio do laço. Se `condicao` for verdadeira e nada dentro do laço a alterar, ocorre **laço infinito**, e o programa trava repetindo uma instrução vazia. O bloco que viria depois do `while` passa a ser executado fora do laço.

---

## Questão 06

**a)** A variável `soma` é declarada **dentro do bloco do `for`**, então só existe ali. Quando o `printf` é executado, fora do laço, `soma` já não existe nesse escopo, e o compilador acusa identificador não declarado.

**b)**

- Iterações completas: i = 1, 2, 3, 4, 6 e 7.
- Em i = 5, o `continue` pula o restante do corpo e vai direto para o próximo incremento (i = 6).
- Em i = 8, o `break` encerra o laço imediatamente. As iterações 9 e 10 nunca ocorrem.

Além disso, `int soma = 0;` dentro do laço zera a variável a cada iteração, então não haveria acúmulo mesmo que o escopo estivesse correto.

**c)** Código corrigido:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int soma = 0;   // declarada fora do laço

    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}
```

Cálculo: 1 + 4 + 9 + 16 + 36 + 49 = 115.

Saída: `Soma final = 115`