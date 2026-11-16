#include <stdio.h>

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    // Regra: A vista = 10% de desconto. Outros valores = preço normal.
    if (opcaoPagamento == 1) {
        return valor * 0.90; 
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}

int main() {
    float preco, pago, subtotal, total_com_desconto, troco;
    int qtd, op_pag;
    
    printf("Preco unitario do produto: ");
    scanf("%f", &preco);
    printf("Quantidade: ");
    scanf("%d", &qtd);
    
    printf("Forma de pagamento (1 - A vista, 2 - Prazo): ");
    scanf("%d", &op_pag);
    
    subtotal = calculaSubtotal(preco, qtd);
    total_com_desconto = aplicaDesconto(subtotal, op_pag);
    
    printf("Valor recebido do cliente: ");
    scanf("%f", &pago);
    
    printf("\n--- Recibo ---\n");
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a Pagar (apos descontos): R$ %.2f\n", total_com_desconto);
    
    troco = calculaTroco(total_com_desconto, pago);
    
    // Valida se o dinheiro pago cobre o produto.
    if (troco < 0) {
        printf("Status: Valor insuficiente. Faltam R$ %.2f\n", troco * -1);
    } else {
        printf("Troco: R$ %.2f\n", troco);
    }
    
    return 0;
}