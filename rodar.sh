#!/bin/bash

att="Rodando..."
echo "$att"
gcc -o main main.c Cliente/funcoesCliente.c TelasUteis/telas.c Produto/funcoesProduto.c Relatorios/relatorios.c Retirada/retirada.c Validacao/validacoes.c
./main
rm main
