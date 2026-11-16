# PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS

### Questão 01. Anatomia de uma Função em C

**a) Diferença entre Protótipo, Chamada e Definição:**
*   **Protótipo:** `float celsius(float);`
    Avisa ao compilador sobre a existência da função, seu tipo de retorno e os parâmetros que recebe, permitindo a verificação de tipos na chamada antes da função ser implementada.
*   **Chamada:** `c = celsius(f);`
    Suspende a execução da `main`, passa o argumento `f` para a função e atribui o retorno à variável `c`.
*   **Definição:** `float celsius(float fahr) { ... }`
    Contém o corpo (bloco de código) e a lógica real que será executada quando a função for chamada.

**b) A importância do Protótipo:**
A função do protótipo é garantir a checagem de tipos em tempo de compilação. Se omitido, em C clássico, o compilador assumiria que a função retorna `int` e não verificaria se os argumentos passados estão corretos. Isso poderia causar falhas graves de execução por incompatibilidade de tipos ou estouro de memória. *(Nota: Definindo as funções antes da `main`, o protótipo separado torna-se opcional, pois a própria definição já avisa o compilador).*

**c) Determinação do Tipo da Função:**
O tipo da função é `float`. O tipo é determinado pelo valor de retorno porque, ao finalizar sua execução, a chamada da função é substituída pelo valor devolvido por ela dentro da expressão que a invocou.

---

### Questão 02. Retorno de Valores

**a) O problema de `return soma, media;`:**
O comando `return` pode devolver apenas um valor. O programador tentou retornar a soma e a média simultaneamente, mas na expressão `return soma, media;` o operador vírgula (`x, y`) avalia as duas expressões, descarta a primeira e retorna apenas o resultado da última, ou seja, `media`.

**b) O uso de `return;` em funções void:**
O comando `return;` encerra imediatamente a execução da função e devolve o controle a quem a chamou. Não é obrigatório em funções `void`, pois elas retornam naturalmente após a última instrução, mas é extremamente útil para interromper a execução antecipadamente (ex: validação de erros ou casos base em recursão).

**c) Alternativa para múltiplos retornos:**
A linguagem C não suporta múltiplos retornos diretamente. Para devolver dois resultados, é necessário criar duas funções distintas ou usar ponteiros/estruturas (structs).

```c
#include <stdio.h>

// Funções definidas antes da main
int calcular_media(int a, int b, int c) {
    return (a + b + c) / 3;
}

int calcular_soma(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int x = 4, y = 5, z = 6;
    printf("Soma: %d\n", calcular_soma(x, y, z));
    printf("Media: %d\n", calcular_media(x, y, z));
    return 0;
}
```

---

### Questão 03. Tipos `void` e Assinaturas

**a) Análise das assinaturas:**
*   `void exibe_mensagem(char* msg);` → Com parâmetro de entrada (`char*`), sem retorno (`void`).
*   `int obter_codigo(void);` → Sem parâmetro de entrada (`void`), com retorno (`int`).
*   `void limpar_tela(void);` → Sem parâmetro de entrada (`void`), sem retorno (`void`).

**b) Retorno vs. Ação (void):**
Uma função com retorno devolve um dado que pode ser processado ou atribuído a uma variável (ex: `int raiz = calcula_raiz(9);`). Uma função `void` executa uma ação de efeito colateral na máquina (como imprimir na tela ou apagar um arquivo) e não devolve dados de volta para a matemática do programa (ex: `limpar_tela();`).

**c) O erro em `x = limpar_tela();`:**
A instrução é **inválida**. A função `limpar_tela` é do tipo `void`, portanto, não produz nenhum valor (nem mesmo zero) que possa ser armazenado na variável `x`. O compilador bloqueará essa operação.

---

### Questão 04. Recursão e a Pilha (Stack)

**a) Caso Base e Passo Recursivo:**
*   **Caso base:** `(n == 0) ? (long)1`
*   **Passo recursivo:** `(long)n * fatorial(n - 1)`
Sem o caso base, a função chamaria a si mesma infinitamente (especialmente para valores negativos de `n`), causando o esgotamento da memória reservada para a função, o que gera o erro de *Stack Overflow* (estouro de pilha).

**b) Rastreamento da chamada `fatorial(4)`:**
1.  **Empilhamento (Ida):**
    `fat(4)` → `4 * fat(3)` → `3 * fat(2)` → `2 * fat(1)` → `1 * fat(0)`
2.  **Desempilhamento (Volta):**
    `fat(0)` retorna `1` → `fat(1)` retorna `1 * 1 = 1` → `fat(2)` retorna `2 * 1 = 2` → `fat(3)` retorna `3 * 2 = 6` → `fat(4)` retorna `4 * 6 = 24`.

**c) Dinâmica da Pilha de Execução:**
A cada chamada recursiva, um novo *frame* (bloco de memória) é alocado na pilha (*Stack*) contendo as variáveis locais daquela rodada e o endereço de retorno de quem a chamou. Sem um caso base, a memória da pilha continua empilhando esses frames indefinidamente até esgotar o limite imposto pelo sistema operacional, travando o programa.

---

### Questão 05. Macros vs. Funções

**a) O perigo da falta de parênteses:**
A saída será **25** e **8**.
*   `SQR(2+3)` utiliza parênteses de proteção na sua definição: `((2+3)*(2+3))` = `(5)*(5)` = **25**.
*   `DOBRO(2+3)` não tem proteção: o compilador substitui literalmente como `2+3*2`. Pela precedência matemática, a multiplicação ocorre primeiro, resultando em `2 + 6` = **8**.

**b) Sintaxe do `#define`:**
O `#define` **não** termina com ponto e vírgula (`;`) porque ele não é um comando da linguagem C em si, mas sim uma diretiva de pré-processamento que faz substituição de texto "copiar e colar" linha a linha. Usamos letras MAIÚSCULAS por convenção, para que o programador saiba bater o olho e distinguir o que é uma macro do que é uma variável ou função normal.

**c) Erro de espaçamento e overhead:**
`#define PRN (n) printf("%d", n)` é **incorreto** porque o pré-processador enxerga o espaço entre `PRN` e `(n)` e entende que o nome da macro acabou ali, tratando `(n)` como parte do texto a ser substituído. O correto é sempre sem espaço: `#define PRN(n) ...`.
*   **Macro:** Substitui o texto antes da compilação. Pode causar "inchaço" do arquivo executável se usada muitas vezes (o mesmo código repetido em vários lugares).
*   **Função:** Gera um único bloco de instruções compilado na memória que é invocado (chamado) várias vezes, economizando espaço, mas gerando um leve *overhead* (atraso) no tempo de processamento devido ao salto de memória (ida e volta).

---

### Questão 06. Pré-Processador

**a) `<stdio.h>` vs `"areas.h"`:**
*   `#include <stdio.h>` (com chaves) instrui o compilador a buscar o arquivo nos diretórios padrões e nativos do sistema (bibliotecas oficiais do C).
*   `#include "areas.h"` (com aspas) instrui o compilador a procurar o arquivo **primeiro no diretório atual** onde o seu projeto está salvo.

**b) O uso do `#undef`:**
A diretiva `#undef SOMA` anula (apaga) a definição da macro SOMA a partir daquela linha do código para baixo. A forma `#undef SOMA(x,y)` está **incorreta** porque a diretiva espera apenas o nome (identificador) da macro para removê-la da tabela de registros do compilador, não a sua assinatura completa.

**c) Compilação Condicional:**
Se houvesse um bloco avaliando um `#ifdef DEBUG`, seria impressa a mensagem correspondente dependendo da condição (ex: "Modo normal\n" se a macro não estiver ativada). Essa decisão é tomada no pré-processamento, muito antes do código virar um `.exe`. As diretivas (como `#define`, `#ifdef`) nunca aparecem no arquivo executável final porque o pré-processador atua como um "filtro" no código fonte, entregando ao compilador de verdade apenas as instruções em C (como os `printf`) correspondentes à condição que deu verdadeiro.