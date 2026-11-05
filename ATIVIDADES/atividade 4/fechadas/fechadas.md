### Questão 01. Avaliação de Expressões Condicionais e Atribuição vs. Igualdade

**a)** A instrução `if (x = 0)` realiza uma **atribuição**, armazenando o valor `0` na variável `x`. O resultado da operação de atribuição é o próprio valor atribuído (zero). Como zero é interpretado como falso em C, o bloco de código associado ao `if` será ignorado. Em contraste, `if (x == 0)` é uma **comparação** relacional que apenas verifica se o valor atual de `x` é igual a zero, retornando verdadeiro se for, sem modificar o valor da variável.

**b)** Na Linguagem C (padrão ANSI), qualquer valor numérico igual a **zero (0)** é avaliado estritamente como **falso**. Qualquer valor numérico **diferente de zero** (seja 1, -5, 3.14, etc.) é avaliado como **verdadeiro**.

**c)** O bloco será **executado**. A instrução `if (x = -5)` atribui o valor `-5` à variável `x`. A expressão inteira resulta em `-5`. Como `-5` é diferente de zero, a linguagem C avalia essa condição como verdadeira.

---

### Questão 02. Associação do Comando else e Aninhamento de Decisões

**a)** A mensagem impressa será **Opção B**.
*Justificativa:* O valor de `x` (15) é maior que 10, então a execução entra no primeiro `if`. Lá dentro, a condição `if (y > 10)` é testada. Como `y` (5) não é maior que 10 (falso), o programa pula o `printf("Opção A\n")` e executa o bloco `else` associado, imprimindo a "Opção B".

**b)** A regra oficial do C ("dangling else") determina que um comando `else` é sempre associado ao comando `if` **imediatamente anterior** e mais próximo no mesmo nível de escopo que ainda não possua um `else`, a menos que o uso de chaves `{ }` restrinja esse comportamento.

**c)** Código reescrito com chaves:
```c
int x = 15, y = 5;
if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

---

### Questão 03. Operador Condicional Ternário vs. Estrutura if-else

**a)** A segunda linha avalia a expressão lógica `(media >= 7.0)`. Se o resultado for verdadeiro, a expressão retorna o primeiro valor (após o `?`), que é `'A'`. Se for falso, retorna o segundo valor (após o `:`), que é `'R'`. Para `media = 6.8`, a condição é falsa, logo o caractere **'R'** será retornado e armazenado na variável `situacao`.

**b)** Código reescrito:
```c
media = (nota1 + nota2) / 2.0;
if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não. O operador ternário é uma **expressão** que deve retornar um valor, enquanto o `if-else` é um **comando/estrutura de fluxo**. O ternário não foi feito para substituir blocos que contenham múltiplos comandos (como laços, declarações de variáveis ou múltiplos `printf` seguidos), e obriga que ambas as partes (verdadeira e falsa) estejam presentes, não sendo possível simular um comando `if` simples (sem `else`).

---

### Questão 04. Seleção Múltipla com switch-case e Efeito Fall-Through

**a)** A saída gerada será:
```text
Prata
Ouro
```
*Explicação:* A variável `codigo` vale 2, então a execução salta diretamente para o `case 2`. O comando `printf("Prata\n")` é executado. Como não há um comando `break` no final deste case, a execução "cai" (continua) para o próximo case imediatamente abaixo (case 3), executando o `printf("Ouro\n")` e encontrando o `break` em seguida, o que finalmente encerra o bloco.

**b)** O papel da instrução `break` é interromper a execução do bloco `switch`, forçando a saída imediata da estrutura. Quando ela é omitida, ocorre o fenômeno conhecido como **Fall-Through** (queda através), onde todos os comandos dos `cases` subsequentes continuam sendo executados até o fim do `switch` ou até que se encontre um `break`.

**c)** Apenas **tipos inteiros** (`int`, `char`, `enum`, `short`, `long`). É **proibido** utilizar `float` ou `double`. O argumento deve ser algo que a máquina consiga comparar através de igualdade exata e contagem discreta, o que não é possível com precisão de ponto flutuante devido à forma como decimais são representados na memória.

---

### Questão 05. Avaliação de Curto-Circuito em Operadores Lógicos

**a)** A saída será: `a = 0, b = 5, c = 8`
O incremento `++b` foi **ignorado**. Como a primeira parte do condicional `a != 0` (0 != 0) é falsa, e o operador é o E-lógico (`&&`), a expressão inteira já é garantidamente falsa. O C aborta a verificação da segunda parte.

**b)** A **avaliação de curto-circuito** é uma otimização executada em tempo de execução:
*   Para o **E lógico (`&&`)**: Se a primeira condição (à esquerda) for falsa, a segunda condição (à direita) sequer é testada, pois o resultado final já será invariavelmente falso.
*   Para o **OU lógico (`||`)**: Se a primeira condição for verdadeira, a segunda condição não é executada, pois o resultado já será invariavelmente verdadeiro.

**c)** O valor final seria `b = 5` e `c = 20`.
Como `a == 0` (0 == 0) é verdadeiro, e o operador agora é o `||`, a linguagem aciona o curto-circuito e não executa o `++b`. A variável `b` continua valendo 5. Como a condição toda foi verdadeira, o bloco do `if` é executado (`c += 10`), elevando `c` de 10 para 20.

---

### Questão 06. Construções else-if e Análise Lógica de Intervalos

**a)** A saída será:
```text
Idoso
Adulto
Jovem
```
*Explicação:* Como foram utilizados comandos `if` independentes, o programa testa todas as condições isoladamente. Se a idade é 65, ela é maior ou igual a 60, 18 e 12 ao mesmo tempo, acionando o print de todas essas condições sucessivamente. Apenas a parte "Criança" não é exibida pois ela é um `else` exclusivo do último `if (idade >= 12)`.

**b)** Em uma sequência de comandos **`if` independentes**, a máquina testa todas as expressões contidas no código obrigatoriamente. Em uma **cadeia `else-if`**, os testes são mutuamente exclusivos: assim que a máquina encontra a primeira condição verdadeira, ela executa aquele bloco e pula/ignora todas as demais condições abaixo dela.

**c)** Código corrigido usando a cadeia `else-if`:
```c
int idade = 25;
if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```