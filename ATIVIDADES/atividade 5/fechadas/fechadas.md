### Questão 01. Anatomia de uma Função em C

**a) Diferença entre Protótipo, Chamada e Definição:**
*   **Protótipo:** `float celsius(float);`
    Avisa ao compilador sobre a existência da função, seu tipo de retorno e os parâmetros que recebe, permitindo a verificação de tipos na chamada antes da função ser implementada.
*   **Chamada:** `c = celsius(f);`
    Suspende a execução da `main`, passa o argumento `f` para a função e atribui o retorno à variável `c`.
*   **Definição:** `float celsius(float fahr) { ... }`
    Contém o corpo (bloco de código) e a lógica real que será executada quando a função for chamada.

**b) A importância do Protótipo:**
A função do protótipo é garantir a checagem de tipos em tempo de compilação. Se omitido, em C clássico, o compilador assumiria que a função retorna `int` e não verificaria se os argumentos passados estão corretos. Isso poderia causar falhas graves de execução por incompatibilidade de tipos ou estouro de memória. *(Nota: Como estamos definindo as funções antes da `main`, o protótipo separado torna-se opcional, pois a própria definição já avisa o compilador).*

**c) Determinação do Tipo da Função:**
O tipo da função é `float`. O tipo é determinado pelo valor de retorno porque, ao finalizar sua execução, a chamada da função é substituída pelo valor devolvido por ela dentro da expressão que a invocou.

---

### Questão 02. Retorno de Valores

**a) O problema de `return soma, media;`:**
O comando `return` pode devolver apenas um valor. O programador tentou retornar a soma e a média simultaneamente, mas na expressão `return soma, media;` o operador vírgula (`x, y`) avalia as duas expressões, descarta a primeira e retorna apenas o resultado da última, ou seja, `media`.

**b) O uso de `return;` em funções void:**
O comando `return;` encerra imediatamente a execução da função e devolve o controle a quem a chamou. Não é obrigatório em funções `void`, pois elas retornam naturalmente após a última instrução, mas é extremamente útil para interromper a execução antecipadamente (ex: validação de erros ou casos base em recursão).

**c) Alternativa para múltiplos retornos:**
A linguagem C não suporta múltiplos retornos diretamente. Para devolver dois resultados, é necessário criar duas funções distintas (conforme o código abaixo) ou usar ponteiros/estruturas (structs).

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