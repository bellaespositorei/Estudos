/*Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada contém 4 valores inteiros.

Saída
Imprima a mensagem DIFERENCA com todas as letras maiúsculas, conforme exemplo abaixo, com um espaço em branco antes e depois da igualdade.*/

var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

//linhas já inclusas no exercício

var A = parseInt(lines[0]);
var B = parseInt(lines[1]);
var C = parseInt(lines[2]);
var D = parseInt(lines[3]);

var DIFERENCA = A * B - C * D;

console.log("DIFERENCA = " + DIFERENCA);
