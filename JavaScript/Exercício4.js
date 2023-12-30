/*Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

Entrada
O arquivo de entrada contém 2 valores inteiros.

Saída
Imprima a mensagem "SOMA" com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B. Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".*/

var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

//Essas duas linhas acima já vieram inclusas no exercício//

const numA = parseInt(lines[0]);
const numB = parseInt(lines[1]);

const SOMA = numA + numB;

console.log("SOMA = " + SOMA);

/* percebi que quando tem mais de uma variável, o site beecrownd faz um array, então tem que dizer onde exatamente quer o número, então tem que botar "lines" e não o input que já usei em questões anteriores.*/
