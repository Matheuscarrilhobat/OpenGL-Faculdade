/* Centro Universitário Carioca
// Computação Gráfica
// Professora Catiúscia Borges
// Projeto Para AV2
//Nome 1:Matheus Carrilho Batista
//Nome 2:
// Parte 03 - Objetos e Manipulações */
#include <GL\glut.h>
#include <cmath>
float cor[3] = {0 , 0, 0};
int obj[4] = {-1,-1,-1,-1};
float raio = 150;
float cx = 250;
float cy = 250;

float T[3][2] = {
	50,75,
	450,75,
	250,425
};

float Q[4][2] = {
      100,100,
      400,100,
      400,400,
      100,400
};

float E[6][2] = {
      75,150,
      425,150,
      250,450,
      75,350,
      425,350,
      250,50
};

void Layout(){
float x, y;
float r = 35;

//Cores
glBegin(GL_QUADS);
//1-Branca
glColor3f(1,1,1);
glVertex2f( 0, 500);
glVertex2f( 0, 550);
glVertex2f( 50, 550);
glVertex2f( 50, 500);

//2-Amarelo
glColor3f(1,1,0);
glVertex2f( 50,500);
glVertex2f(100,500);
glVertex2f(100,550);
glVertex2f( 50,550);

//3 - Laranja
glColor3f(1, 0.5, 0.1);
glVertex2f(100,500);
glVertex2f(150,500);
glVertex2f(150,550);
glVertex2f(100,550);

//4 - Vermelho
glColor3f(1,0,0);
glVertex2f(150,500);
glVertex2f(200,500);
glVertex2f(200,550);
glVertex2f(150,550);

//5 - Rosa
glColor3f(1, 0.75, 0.8);
glVertex2f(200,500);
glVertex2f(250,500);
glVertex2f(250,550);
glVertex2f(200,550);

//6 - Magenta
glColor3f(1,0,1);
glVertex2f(250,500);
glVertex2f(300,500);
glVertex2f(300,550);
glVertex2f(250,550);

//7 - Roxo
glColor3f(0.5,0,1);
glVertex2f(300,500);
glVertex2f(350,500);
glVertex2f(350,550);
glVertex2f(300,550);

//8 - Azul escuro
glColor3f(0,0,0.75);
glVertex2f(350,500);
glVertex2f(400,500);
glVertex2f(400,550);
glVertex2f(350,550);

//9 - Azul claro
glColor3f(0.5,0.75,1);
glVertex2f(400,500);
glVertex2f(450,500);
glVertex2f(450,550);
glVertex2f(400,550);

//10- Verde Escuro
glColor3f(0.1,0.5,0.1);
glVertex2f(450,500);
glVertex2f(500,500);
glVertex2f(500,550);
glVertex2f(450,550);

//11- Verde Claro
glColor3f(0.3,0.8,0.3);
glVertex2f(500,500);
glVertex2f(550,500);
glVertex2f(550,550);
glVertex2f(500,550);

//12- Marron
glColor3f(0.5,0.25,0);
glVertex2f(550,500);
glVertex2f(600,500);
glVertex2f(600,550);
glVertex2f(550,550);
glEnd();

//Triângulo
glColor3f(0,0,0);
glBegin(GL_TRIANGLES);
glVertex2f(525,425);
glVertex2f(575,425);
glVertex2f(550,475);
glEnd();

//Triângulo
glColor3f(0, 0, 0);
glBegin(GL_TRIANGLES);
glVertex2f(520,420);
glVertex2f(580,420);
glVertex2f(550,480);
glEnd();

//Quadrado
glBegin(GL_QUADS);
glVertex2f(520,320);
glVertex2f(580,320);
glVertex2f(580,380);
glVertex2f(520,380);
glEnd();

//Circulo
glBegin(GL_LINES);
for(x = -r; x <= r ; x++){
y = pow(r * r - x * x , 0.5);
glVertex2f( x + 550, y + 250);
glVertex2f( x + 550,-y + 250);
}
glEnd();

//Estrela ou Hexágono
glBegin(GL_TRIANGLES);
glVertex2f(515,130);
glVertex2f(585,130);
glVertex2f(550,190);
glVertex2f(515,170);
glVertex2f(585,170);
glVertex2f(550,110);
glEnd();

/*
glBegin(GL_POLYGON);
glVertex2f(510,150);
glVertex2f(530,115);
glVertex2f(570,115);
glVertex2f(590,150);
glVertex2f(570,185);
glVertex2f(530,185);
glEnd();
*/

//X Saída
glColor3f(1, 0, 0);
glBegin(GL_QUADS);
glVertex2f(520, 30);
glVertex2f(540, 20);
glVertex2f(580, 70);
glVertex2f(560, 80);
glVertex2f(540, 80);
glVertex2f(520, 70);
glVertex2f(560, 20);
glVertex2f(580, 30);
glEnd();

glColor3f(0, 0, 0);
glLineWidth(5); //espessura da linha
glBegin(GL_LINE_LOOP);
glVertex2f( 0, 0);
glVertex2f(600, 0);
glVertex2f(600,550);
glVertex2f( 0,550);
glEnd();

glBegin(GL_LINES);
glVertex2f(500, 0);
glVertex2f(500,500);
glVertex2f(500,500);
glVertex2f( 0,500);

for (int i = 0; i <= 600 ; i += 50){
glVertex2f( i, 500);
glVertex2f( i, 550);
}

for (int i = 0; i <= 550 ; i += 100){
glVertex2f(500, i);
glVertex2f(600, i);
}

glEnd();

glLineWidth(1); //espessura da linha normal
}

void Objeto0(){
//Triângulo
glColor3f(cor[0],cor[1],cor[2]);
 glBegin(GL_TRIANGLES);
 glVertex2f( T[0][0],T[0][1]);
 glVertex2f(T[1][0],T[1][1]);
 glVertex2f(T[2][0],T[2][1]);
glEnd();
}

void Objeto1(){
//Quadrado
glColor3f(cor[0],cor[1],cor[2]);
glBegin(GL_QUADS);
 glVertex2f(Q[0][0],Q[0][1]);
 glVertex2f(Q[1][0],Q[1][1]);
 glVertex2f(Q[2][0],Q[2][1]);
 glVertex2f(Q[3][0],Q[3][1]);
glEnd();
}

void Objeto2(){
 //Círculo
float x, y;
 glColor3f(cor[0],cor[1],cor[2]);
glBegin(GL_LINES);
 for ( x = -raio; x<= raio; x++){
 y = pow(raio*raio - x*x, 0.5);
 glVertex2f(x + cx , y + cy);
 glVertex2f(x + cx ,-y + cy);
}
glEnd();
}

void Objeto3(){
//Estrela ou Pentágono ou Hexágono
glColor3f(cor[0],cor[1],cor[2]);
glBegin(GL_TRIANGLES);
glVertex2f(E[0][0],E[0][1]);
 glVertex2f(E[1][0],E[1][1]);
 glVertex2f(E[2][0],E[2][1]);
 glVertex2f(E[3][0],E[3][1]);
 glVertex2f(E[4][0],E[4][1]);
 glVertex2f(E[5][0],E[5][1]);
glEnd();
}

void Display(){
glClearColor(0.85, 0.85, 0.85, 0);
glClear(GL_COLOR_BUFFER_BIT );
if (obj[0] == 1)
 Objeto0();
if (obj[1] == 1)
 Objeto1();
if (obj[2] == 1)
 Objeto2();
if (obj[3] == 1)
 Objeto3();

Layout();
glFlush();
}

void glutPassiveMotionFunc(void (*mouse) (int mousex,int mousey));
void Mouse(int button, int state, int x, int y)
{
	
 if (button == GLUT_RIGHT_BUTTON)
 if (state == GLUT_UP) {

 }
 if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN)){
		if (obj[0] == 1){
			T[0][0] = x - 200;
			T[0][1] = y - 175;
			T[1][0] = x + 200;
			T[1][1] = y - 175;
			T[2][0] = x;
			T[2][1] = y + 175; 
			
		}
	}


 if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN)){
 	
 
 	
 if (y < 50){
 if ( x < 50){
 cor[0] = 1;
 cor[1] = 1;
 cor[2] = 1;
}

else if ( x < 100){
 cor[0] = 1;
 cor[1] = 1;
 cor[2] = 0;
}

else if ( x < 150){
 cor[0] = 1;
 cor[1] = 0.5;
 cor[2] = 0.1;
}

else if ( x < 200){
 cor[0] = 1;
 cor[1] = 0;
 cor[2] = 0;
}
else if ( x < 250){
 cor[0] = 1;
 cor[1] = 0.75;
 cor[2] = 0.8;
}
else if ( x < 300){
 cor[0] = 1;
 cor[1] = 0;
 cor[2] = 1;
}
else if ( x < 350){
 cor[0] = 0.5;
 cor[1] = 0;
 cor[2] = 1;
}
else if ( x < 400){
 cor[0] = 0;
 cor[1] = 0;
 cor[2] = 0.75;
}
else if ( x < 450){
 cor[0] = 0.5;
 cor[1] = 0.75;
 cor[2] = 1;
}
else if ( x < 500){
 cor[0] = 0.1;
 cor[1] = 0.5;
 cor[2] = 0.1;
}
else if ( x < 550){
 cor[0] = 0.3;
 cor[1] = 0.8;
 cor[2] = 0.3;
}
else {
 cor[0] = 0.5;
 cor[1] = 0.25;
 cor[2] = 0;
}
}

if (x > 500){
 if (y > 50 && y < 150)
 obj[0] = -1 * obj[0];
 if (y > 150 && y < 250)
 obj[1] = -1 * obj[1];
 if (y > 250 && y < 350)
 obj[2] = -1 * obj[2];
 if (y > 350 && y < 450)
 obj[3] = -1 * obj[3];
 if (y > 450) {
 	obj[0] = -1;
 	obj[1] = -1;
 	obj[2] = -1;
 	obj[3] = -1;
 	cor[0] = 0;
 	cor[1] = 0;
 	cor[2] = 0;
 }
}

}

Display();
}


void Teclado(unsigned char key, int x, int y){
switch(key) {
	case '+':
		if (obj[0] == 1) {
			for (int i = 0;i < 3;i++){
				
				T[i][0] = 1.1 * T[i][0] - 25;
				T[i][1] = 1.1 * T[i][1] - 25;	
		}
		}
		else if (obj[1] == 1) {
			for (int i = 0;i < 4;i++) {
				Q[i][0] = 1.1 * Q[i][0] - 25;
				Q[i][1] = 1.1 * Q[i][1] - 25;
			}
		}
		else if (obj[2] == 1) {
			raio = 1.1 * raio;
		}
		else if (obj[3] == 1) {
			for (int i = 0; i < 6;i++) {
				E[i][0] = 1.1 * E[i][0] - 25;
				E[i][1] = 1.1 * E[i][1] - 25;
			}
		}
break;
    case'-':
    	if (obj[0] == 1) {
    		for (int i = 0;i < 3;i++) {
    			T[i][0] = 0.9 * T[i][0] + 25;
    			T[i][1] = 0.9 * T[i][1] + 25;
			}
		}
		else if (obj[1] == 1){
			for (int i = 0; i < 4;i++){
				Q[i][0] = 0.9 * Q[i][0] + 25;
				Q[i][1] = 0.9 * Q[i][1] + 25;
			}
		}
		else if (obj[2] == 1){
			raio = 0.9 * raio;
		}
		else if (obj[3] == 1){
			for (int i = 0;i < 6;i++){
				E[i][0] = 0.9 * E[i][0] + 25;
				E[i][1] = 0.9 * E[i][1] + 25;
			}
		}
		
case '0':
break;
case 'a':
case 'A':
break;
}
Display();
}
void TeclasEspeciais(int key, int x, int y) {
	float d=5;
switch(key) {
	case GLUT_KEY_LEFT:
		if (obj[0] == 1){
			for (int i = 0;i < 3;i++)
			if (T[0][0] > 0){
			
			T[i][0] = T[i][0] - d;
		}
		else if (T[0][0] = 1){
			T[0][0] = 0;
			T[1][0] = 400;
			T[2][0] = 200;
		}
		}    
		else if (obj[1] == 1){
			for (int i = 0;i < 4;i++)
			if (Q[0][0] || Q[3][0] > 0){
			
			Q[i][0] = Q[i][0] - d;
		}
		else if (Q[0][0] = 1){
		    Q[0][0] = 0;
		    Q[1][0] = 300;
		    Q[2][0] = 300;
		    Q[3][0] = 0;
		}
		}
		else if (obj[2] == 1){
			if (cx > 150){
			
			cx = cx - d;
		}
		}
		else if (obj[3] == 1){
			for (int i = 0;i < 6;i++)
			if (E[0][0] && E[3][0] > 0){
			E[i][0] = E[i][0] - d;
		}
		else if (E[0][0] = 1){
			E[0][0] = 0;
			E[1][0] = 350;
			E[2][0] = 175;
			E[3][0] = 0;
			E[4][0] = 350;
			E[5][0] = 175;
		}
		}
	else	case GLUT_KEY_RIGHT:
			if(obj[0] == 1){
				for (int i = 0;i < 3;i++)
				if (T[1][0] < 500){
				
				T[i][0] = T[i][0] + d;
			}
			else if (T[1][0] = 499){
				T[0][0] = 100;
				T[1][0] = 500;
				T[2][0] = 300;
			}
			}
			else if (obj[1] == 1){
				for (int i = 0;i < 4;i++)
				if (Q[1][0] && Q[2][0] < 500){
				Q[i][0] = Q[i][0] + d;
			}
			else if (Q[1][0] = 499){
				Q[0][0] = 200;
				Q[1][0] = 500;
				Q[2][0] = 500;
				Q[3][0] = 200;
			}
			}
			else if (obj[2] == 1) {
				if (cx < 350){
				
				cx = cx + d;
			}
			}
			else if (obj[3] == 1){
				for (int i = 0;i < 6;i++)
				if (E[1][0] && E[4][0] < 500){
				E[i][0] = E[i][0] + d;
			}
			else if (E[1][0] = 499){
				E[0][0] = 150;
				E[1][0] = 500;
				E[2][0] = 325;
				E[3][0] = 150;
				E[4][0] = 500;
				E[5][0] = 325;
			}
			}
			else case GLUT_KEY_UP:
				if (obj[0] == 1) {
					for (int i = 0;i < 3;i++)
					if (T[2][1] < 500){
					
					T[i][1] = T[i][1] + d;
				}
				else if (T[2][1] = 499){
					T[0][1] = 150;
					T[1][1] = 150;
					T[2][1] = 500;
				}
				}
				else if (obj[1] == 1) {
				     for (int i = 0;i < 4;i++)
				     if (Q[2][1] && Q[3][1] < 500){
					 
				     Q[i][1] = Q[i][1] + d;
				 }
				 else if (Q[2][1] = 499){
				 	Q[0][1] = 200;
				 	Q[1][1] = 200;
				 	Q[2][1] = 500;
				 	Q[3][1] = 500;
				 }
				}
				else if (obj[2] == 1) {
					if (cy < 350){
					
					cy = cy + d;
				}
				}
				else if (obj[3] == 1) {
					for (int i = 0;i < 6;i++)
					if (E[2][1] < 500){
					E[i][1] = E[i][1] + d;
				}
				else if (E[2][1] = 499){
					E[0][1] = 200;
					E[1][1] = 200;
					E[2][1] = 500;
					E[3][1] = 400;
					E[4][1] = 400;
					E[5][1] = 100;
				}
				}
				else case GLUT_KEY_DOWN:
					if (obj[0] == 1){
						for (int i = 0;i < 3;i++)
						if (T[0][1] || T[1][1] > 0){
						
						T[i][1] = T[i][1] - d;
					}
					else if (T[0][1] = 1){
						T[0][1] = 0; 
						T[1][1] = 0;
						T[2][1] = 350;
					}
					}
					else if (obj[1] == 1) {
						for (int i = 0;i < 4;i++)
						if (Q[0][1] && Q[1][1] > 0){
						Q[i][1] = Q[i][1] - d;
					}
					else if (Q[0][1] = 1){
						Q[0][1] = 0;
						Q[1][1] = 0;
						Q[2][1] = 300;
						Q[3][1] = 300;
					}
					}
					else if (obj[2] == 1){
						if (cy > 150){
						
						cy = cy - d;
					}
					}
					else if (obj[3] == 1) {
						for (int i = 0;i < 6;i++)
						if (E[5][1] > 0){
						E[i][1] = E[i][1] - d;
					}
					else if (E[5][1] = 1){
						E[0][1] = 100;
						E[1][1] = 100;
						E[2][1] = 400;
						E[3][1] = 300;
						E[4][1] = 300;
						E[5][1] = 0;
					}
				}
			
break;
case GLUT_KEY_HOME:
	obj[0] = -1;
 	obj[1] = -1;
 	obj[2] = -1;
 	obj[3] = -1;
 	cor[0] = 0;
 	cor[1] = 0;
 	cor[2] = 0;
break;
case GLUT_KEY_END:
	exit(0);
break;
}
Display();
}
int main(int argc, char **argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
glutInitWindowSize(600,550);
glutInitWindowPosition(450,100);
glutCreateWindow("AV2 - 2022/1 - CG");
glutMouseFunc(Mouse);
glutKeyboardFunc(Teclado);
glutSpecialFunc(TeclasEspeciais);
gluOrtho2D(0,600,0,550);
glutDisplayFunc(Display);
glutMainLoop();
return(0);
}
