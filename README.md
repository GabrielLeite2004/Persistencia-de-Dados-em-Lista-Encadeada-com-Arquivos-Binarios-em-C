# Persistência de Dados em Lista Encadeada Simples em C

## Descrição
Este projeto em C implementa uma lista encadeada simples com funcionalidades para persistência de dados, permitindo salvar e carregar a lista de um arquivo binário. Isso garante que os dados da lista sejam mantidos entre diferentes execuções do programa.

## Funcionalidades
- **Carregar Lista de Arquivo**: Carrega os elementos da lista a partir de um arquivo binário (`dados.dat`).
- **Gravar Lista em Arquivo**: Salva os elementos da lista em um arquivo binário (`dados.dat`).
- **Gestão de Lista Encadeada**: Inclui, altera, exclui e obtém elementos da lista, preservando sua estrutura encadeada.

## Como Usar
1. Compile o código utilizando um compilador C. Exemplo:
   ```bash
   gcc -o lista_encadeada_persistencia lista_encadeada_persistencia.c
   ```
2. Execute o programa, utilizando as funções para manipular a lista e, ao final, salve as alterações:
   - Carregue a lista com `carregar_lista(&la)`.
   - Manipule a lista (inclusão, exclusão, alteração) conforme necessário.
   - Salve as alterações com `gravar_lista(la)`.

## Estrutura de Dados
O projeto utiliza uma estrutura de lista encadeada (`tipo_lista`) para armazenar os elementos. Cada nodo da lista (`nodo`) contém um `elemento` e um ponteiro para o próximo nodo na lista (`prox`).

### Funções Principais
- **carregar_lista(tipo_lista *la)**: Carrega os elementos da lista a partir do arquivo `dados.dat`.
- **gravar_lista(tipo_lista la)**: Grava os elementos da lista no arquivo `dados.dat`.
- **incluir_elemento(tipo_lista *la, int i, elemento e)**: Insere um elemento na posição `i` da lista.
- **obter_elemento(tipo_lista la, int i, elemento *e)**: Obtém o elemento na posição `i` da lista.
- **tamanho(tipo_lista la)**: Retorna o tamanho atual da lista.

## Persistência de Dados
Os dados da lista são salvos em um arquivo binário chamado `dados.dat`, que é lido ao iniciar o programa para restaurar o estado anterior da lista. Este arquivo garante que todas as alterações feitas na lista sejam preservadas entre as execuções do programa.

## Exemplo de Uso
```c
tipo_lista la;
inicializa_lista(&la);

if (carregar_lista(&la)) {
    printf("Lista carregada com sucesso.\n");
} else {
    printf("Erro ao carregar a lista.\n");
}

// Manipule a lista...

if (gravar_lista(la)) {
    printf("Lista salva com sucesso.\n");
} else {
    printf("Erro ao salvar a lista.\n");
}
```

## Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou enviar pull requests.

## Licença
Este projeto está licenciado sob a [MIT License](LICENSE).
