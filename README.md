# Desafio Super Trunfo - Países

## 📌 Descrição
Este projeto foi desenvolvido para o desafio **Super Trunfo - Países**, como parte da disciplina de Lógica de Programação.  
O objetivo é cadastrar informações de duas cidades e compará-las com base em três atributos:
- **População**
- **Área (km²)**
- **PIB (em bilhões)**

No final, o programa determina qual cidade venceu mais comparações ou se houve empate.

---

## 🖥️ Como funciona o programa
1. O usuário informa os dados da **Carta 1** (cidade A):
   - Código da cidade
   - Nome da cidade
   - População
   - Área em km²
   - PIB em bilhões

2. O usuário informa os dados da **Carta 2** (cidade B):
   - Código da cidade
   - Nome da cidade
   - População
   - Área em km²
   - PIB em bilhões

3. O programa compara cada atributo e atribui **1 ponto** para a cidade que tiver o valor maior.

4. Ao final, o programa exibe:
   - O vencedor de cada atributo
   - O resultado final (qual cidade venceu ou se foi empate)

---

## 📂 Estrutura do código
- **Declaração de variáveis** para armazenar dados das duas cidades.
- **Leitura dos dados** usando `scanf`.
- **Comparações** usando estruturas `if`, `else if` e `else`.
- **Contagem de pontos** para determinar a cidade vencedora.
- **Exibição dos resultados** no terminal.

---

## 🚀 Como compilar e executar
Para compilar o código, utilize um compilador C como o `gcc`:

```bash
gcc logicaSuperTrunfo.c -o supertrunfo
./supertrunfo
