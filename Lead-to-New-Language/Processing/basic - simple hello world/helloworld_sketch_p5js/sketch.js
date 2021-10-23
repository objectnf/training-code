/* 
 * p5js是基于JavaScript实现的Processing兼容库
 * 与Processing for Java 语法基本一致
 */

function setup() {
  createCanvas(400, 400);
  background(220);
}

function draw() {
  ellipse(mouseX, mouseY, 40, 40);
}

function mousePressed() {
  background(220);
}