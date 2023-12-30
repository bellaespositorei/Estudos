/*Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.*/

var input = require("fs").readFileSync("/dev/stdin", "utf8");
var lines = input.split("\n");

//Já tinha essas duas linhas

function calcularAreaTriangulo(base, altura) {
  return (base * altura) / 2;
}

function calcularAreaCirculo(raio) {
  const pi = 3.14159;
  return pi * Math.pow(raio, 2);
}

function calcularAreaTrapezio(base1, base2, altura) {
  return ((base1 + base2) * altura) / 2;
}

function calcularAreaQuadrado(lado) {
  return Math.pow(lado, 2);
}

function calcularAreaRetangulo(lado1, lado2) {
  return lado1 * lado2;
}

const valores = lines[0].split(" ");
const A = parseFloat(valores[0]);
const B = parseFloat(valores[1]);
const C = parseFloat(valores[2]);

const areaTriangulo = calcularAreaTriangulo(A, C);
const areaCirculo = calcularAreaCirculo(C);
const areaTrapezio = calcularAreaTrapezio(A, B, C);
const areaQuadrado = calcularAreaQuadrado(B);
const areaRetangulo = calcularAreaRetangulo(A, B);

console.log("TRIANGULO: " + areaTriangulo.toFixed(3));
console.log("CIRCULO: " + areaCirculo.toFixed(3));
console.log("TRAPEZIO: " + areaTrapezio.toFixed(3));
console.log("QUADRADO: " + areaQuadrado.toFixed(3));
console.log("RETANGULO: " + areaRetangulo.toFixed(3));
