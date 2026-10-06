# Lista de Exercícios - Lógica de Programação e Algoritmos

Resolução em **C puro**, usando apenas a biblioteca `stdio.h`, da lista de exercícios
de introdução à construção de algoritmos (entrada, processamento, saída, variáveis,
operadores, estruturas condicionais e estruturas de repetição).

## Parte I - Algoritmos sequenciais

| Arquivo | Exercício |
|---|---|
| `e01_saudacao.c` | 1 - Saudação |
| `e02_soma_dois_numeros.c` | 2 - Soma de dois números |
| `e03_quatro_operacoes.c` | 3 - Quatro operações |
| `e04_media_aluno.c` | 4 - Média do aluno |
| `e05_area_retangulo.c` | 5 - Área do retângulo |
| `e06_area_circulo.c` | 6 - Área do círculo |
| `e07_celsius_fahrenheit.c` | 7 - Conversão de temperatura |
| `e08_salario_mensal.c` | 8 - Salário mensal |
| `e09_consumo_combustivel.c` | 9 - Consumo de combustível |
| `e10_valor_compra.c` | 10 - Valor da compra |

## Parte II - Estruturas condicionais

| Arquivo | Exercício |
|---|---|
| `e11_maior_de_idade.c` | 11 - Maior de idade |
| `e12_positivo_negativo.c` | 12 - Número positivo ou negativo |
| `e13_par_ou_impar.c` | 13 - Número par ou ímpar |
| `e14_maior_entre_dois.c` | 14 - Maior entre dois números |
| `e15_maior_entre_tres.c` | 15 - Maior entre três números |
| `e16_situacao_academica.c` | 16 - Situação acadêmica |
| `e17_desconto_compra.c` | 17 - Desconto na compra |
| `e18_faixa_etaria.c` | 18 - Faixa etária |
| `e19_imc.c` | 19 - Cálculo do IMC |
| `e20_calculadora.c` | 20 - Calculadora |

## Parte III - Estruturas de repetição

| Arquivo | Exercício |
|---|---|
| `e21_contagem_crescente.c` | 21 - Contagem crescente |
| `e22_contagem_regressiva.c` | 22 - Contagem regressiva |
| `e23_numeros_pares.c` | 23 - Números pares |
| `e24_tabuada.c` | 24 - Tabuada |
| `e25_soma_ate_n.c` | 25 - Soma de 1 até N |
| `e26_media_turma.c` | 26 - Média da turma |
| `e27_aprovados_reprovados.c` | 27 - Aprovados e reprovados |
| `e28_maior_numero.c` | 28 - Maior número |
| `e29_senha.c` | 29 - Senha |
| `e30_caixa_eletronico.c` | 30 - Caixa eletrônico |

## Parte IV - Desafios

| Arquivo | Exercício |
|---|---|
| `e31_posto_combustivel.c` | 31 - Posto de combustível |
| `e32_estacionamento.c` | 32 - Sistema de estacionamento |
| `e33_eleicao.c` | 33 - Eleição |
| `e34_sistema_vendas.c` | 34 - Sistema de vendas |
| `e35_sistema_academico.c` | 35 - Sistema acadêmico |

## Desafio Final - Controle de estoque

| Arquivo | Descrição |
|---|---|
| [`desafio-final/DESAFIO_FINAL.md`](desafio-final/DESAFIO_FINAL.md) | Descrição do problema, entradas, processamento, saídas, pseudocódigo, fluxogramas, teste de mesa (5 cenários) e explicação da solução |
| `src/desafio_final_controle_estoque.c` | Programa em C do controle de estoque (cadastro, entrada, saída, listagem e relatório) |

Todos os arquivos de exercícios ficam na pasta `src/`.

## Como compilar e executar

### Dev-C++
Abra o arquivo `.c` desejado, compile (F9) e execute.

### GCC (terminal)
```bash
# compilar um programa
gcc -std=c99 -Wall -Wextra src/e01_saudacao.c -o e01_saudacao
./e01_saudacao

# ou compilar todos de uma vez (gera a pasta bin/)
make
./bin/e30_caixa_eletronico
```

## Observações

- Apenas `stdio.h` é utilizada.
- Os textos de saída não usam acentos para evitar caracteres quebrados no console do Windows.
- Notas aceitas vão de 0 a 10; entradas inválidas são recusadas e pedidas novamente.
- Exercício 30: o saldo inicial definido pelo programa é R$ 1000,00.
- Exercício 32: as horas são números inteiros de 0 a 23, no mesmo dia.
- Exercícios 14 e 15: no 14 o programa exige dois números diferentes; no 15, em caso de empate, o maior valor é o mesmo.
