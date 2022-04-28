
//ellipse (50, 50, 500, 50); 
//La primera lo mueve para la derecha
// La segunda para abajo
//La tercera lo ensancha
//La cuarta lo hace alto
size(1200,900);
background(255);
int w = 1200;
int h = 1200;
int r = 255;
int g = 0;
int b = 0;
strokeWeight(2);
for(int i = 0; i < 150; i++) {
 if(i % 4 == 0)       stroke(255,0,0);
 else if (i % 3 == 0) stroke(0,255,0);
 else if (i % 2 == 0) stroke(0,0,255);
 else if (i % 1 == 0) stroke(0,0,0);
 else stroke(0);
 ellipse(600, 450, w, h);
 w -= 20;
 h -= 20;
}
