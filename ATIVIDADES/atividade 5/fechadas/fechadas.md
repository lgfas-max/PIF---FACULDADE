## PARTE I: QUESTÕES TEÓRICAS E ANALÍTICAS

**Questão 01. Anatomia de uma Função e o Papel do Protótipo**

a) 
* **Protótipo:** `float celsius(float);` - Avisa ao compilador sobre a existência da função, seu tipo de retorno e os parâmetros que recebe, permitindo a verificação de tipos na chamada antes da função ser implementada.
* **Chamada:** `c = celsius(f);` - Suspende a execução da `main`, passa o argumento `f` para a função e atribui o retorno à variável `c`.
* **Definição:** `float celsius(float fahr) { ... }` - Contém o corpo (bloco de código) e a lógica real que será executada quando a função for chamada.

b) A função do protótipo é garantir a checagem de tipos em tempo de compilação. Se omitido, em C clássico, o compilador assumiria que a função retorna `int` e não verificaria se os argumentos passados estão corretos. Isso poderia causar falhas graves de execução por incompatibilidade de tipos ou estouro de memória.

c) O tipo da função é `float`. O tipo é determinado pelo valor de retorno porque, ao finalizar sua execução, a chamada da função é substituída pelo valor devolvido por ela dentro da expressão que a invocou.

**Questão 02. O Comando return e suas Limitações**
a) O comando `return` pode devolver apenas **um** valor. O programador tentou retornar a soma e a média simultaneamente, mas na expressão `return soma, media;` o operador vírgula avalia as duas expressões, descarta a primeira e retorna apenas o resultado da última, ou seja, `media`.

b) O comando `return;` encerra imediatamente a execução da função e devolve o controle a quem a chamou. Não é obrigatório no final de funções `void`, pois elas retornam naturalmente após a última instrução, mas é útil para interromper a execução antecipadamente (ex: validação de erros).

c) O C não suporta múltiplos retornos simultâneos diretamente. Para devolver dois resultados, precisamos de duas funções distintas (ou usar ponteiros/structs).
```c
int calcular_media(int a, int b, int c) {
    return (a + b + c) / 3;
}
int calcular_soma(int a, int b, int c) {
    return a + b + c;
}