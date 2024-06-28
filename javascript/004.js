//Área do Quadrado
var input = require("fs").readFileSync(0, "utf8");
var lines = input.split("\n");

var num = parseInt(lines[0]);
var area = parseInt(num*num);

console.log(area);
