#include <windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <iostream>
#include <stdlib.h>

//paleta de colores basicos para ir llamando con punteros

float blanco[]={1,1,1};
float negro[]={0,0,0},azul[]={0,0,1};
float rojo[]={1,0,0},verde[]={0,1,0}, amarillo[]={1,1,0};
float cyan[]={0,1,1}, rosa[]={1,0.5,0.5}, naranja[]={1,0.8,0}, gris[]={0.6,0.6,0.6};

//funcion para trabajar con mas valores en pantalla y no restringido a -1 a 1


void pantalla()
{
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-6,6,-6,6);

}

void cuadrado(float x, float y, float z, float a, float b, float c, float d, float e, float *color, float s)
{
    glColor3fv(color);
    glLineWidth(s);
    glBegin(GL_QUADS);
    glVertex2f(x,y);
    glVertex2f(z,a);
    glVertex2f(b,c);
    glVertex2f(d,e);

    glEnd();
}


void triangulo (float x, float y, float z, float a, float b, float c, float *color, float s)
{
    glColor3fv(color);
    glLineWidth(s);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x,y);
    glVertex2f(z,a);
    glVertex2f(b,c);
    glEnd();

}

void linea (float x, float y, float w, float z, float *color, float s)
{
    glColor3fv(color);
    glLineWidth(s);
    glBegin(GL_LINE_LOOP);
    glVertex2f(x,y);
    glVertex2f(w,z);

    glEnd();

}


void display(void)
{
glClearColor(1,1,1,1);//color de la ventana negro
glClear(GL_COLOR_BUFFER_BIT);




   //triangulo (,negro,5);

    triangulo (-0.16,-5.46,1,-2.76,2.54,-3.4,negro,5);
    triangulo (-0.16,-5.46,-1.26,-2.74,-2.9,-3.42,negro,5);
    triangulo (-3.5,-2.24,-2.9,-3.42,-1.64,-1.8,negro,5); //NCE
    triangulo (-3.5,-2.24,-2.9,-3.42,-4.38,-2.68,negro,5); //NCM
    triangulo (-4.38,-2.68,-3.5,-2.24,-3.06,0.56,negro,5); //MNO
    triangulo (-3.5,-2.24,-1.64,-1.8,-0.16,0.76,negro,5); //NEQ
    triangulo (-0.16,0.76,1.28,-1.82,3.14,-2.32,negro,5);  //QJK
    triangulo (2.54,-3.4,3.14,-2.32,3.9,-2.74,negro,5);   //IKL
    triangulo (1.28,-1.82,2.54,-3.4,3.14,-2.32,negro,5);   //JIK
    triangulo (-3.06,0.56,-1.88,-0.76,-1.14,1.58,negro,5);   //OPU
    triangulo (-1.14,1.58,-1.88,-0.76,-0.16,0.76,negro,5);   //UPQ
    triangulo (-0.16,0.76,0.78,1.58,1.06,0.82,negro,5);   //QVS
    triangulo (1.06,0.82,2.8,0.54,1.6,-0.78,negro,5);   //SRT
    triangulo (3.14,-2.32,3.9,-2.74,2.8,0.54,negro,5);   //KLR
    triangulo (-3.06,0.56,-1.14,1.58,-0.16,0.76,negro,5);   //OUQ
    triangulo (-1.64,-1.8,-1.26,-2.74,-0.1,-2.2,negro,5);   //EGF
    triangulo (-0.1,-2.2,1.28,-1.82,1,-2.76,negro,5);   //FJH
    triangulo (0.78,1.58,2.8,0.54,1.6,1.76,negro,5);   //VRW
    triangulo (2.32,2.42,2.76,2.7,3,2,negro,5);   //ZA1B1
    triangulo (2.14,3.54,2.62,3.46,2.36,3.8,negro,5);   //C2B2E1
    triangulo (1.22,4.24,2.36,3.8,2.04,4.3,negro,5);   //C1E1F1
    triangulo (1.22,4.24,1.08,4.86,1.58,5.34,negro,5);   //C1V1W1
    triangulo (1.58,5.34,2.4,5.02,3.2,5.72,negro,5);   //W1Z1A2
    triangulo (-0.1,3.64,1.22,4.24,0.42,3.08,negro,5);   //G1C1D1
    triangulo (-0.1,3.64,-0.8,3,-1.56,4.2,negro,5);   //G1I1H1   //////
    triangulo (-1.38,4.9,-1.56,4.2,-0.22,4.74,negro,5);   //R1H1Q1
    triangulo (-3.06,0.56,-1.14,1.58,-1.88,1.78,negro,5);   //OUP1
    triangulo (-1.82,5.28,-1.38,4.9,-1.56,4.2,negro,5);   //S1R1H1
    triangulo (-2.76,4.9,-1.82,5.28,-3.46,5.6,negro,5);   //T1S1U1
    triangulo (-2.7,3.8,-1.56,4.2,-0.8,3,negro,5);   //J1H1I1  /////
    triangulo (-2.7,3.8,-2.92,3.54,-2.38,3.64,negro,5);   //J1L1K1
    triangulo (-3.24,2.16,-3.08,2.7,-2.58,2.42,negro,5);   //N1M1O1
    triangulo (-0.22,4.74,1.08,4.86,1.22,4.24,negro,5);   //Q1V1C1
    triangulo (1.22,4.24,0.42,3.08,2.46327,3.72656,negro,5);   //C1D1E1
    triangulo (-2.37773,4.24013,-2.7,3.8,-1.56,4.2,negro,5);      //D2J1H1


    linea(2.4,5.02,2.04,4.3,negro,5);    //Z1F1
    linea(-2.76,4.9,-2.37773,4.24013,negro,5);    //T1D2
    linea(-2.92,3.54,-3.08,2.7,negro,5);    //L1M1
    linea(-2.38,3.64,-2.58,2.42,negro,5);    //K1O1
    linea(2.14,3.54,2.32,2.42,negro,5);    //C2Z
    linea(2.62,3.46,2.76,2.7,negro,5);    //B2A1
    linea(2.32,2.42,1.6,1.76,negro,5);    //ZW
    linea(3,2,2.8,0.54,negro,5);    //B1R
    linea(-3.06,0.56,-3.24,2.16,negro,5);    //N1O
    linea(-2.58,2.42,-1.88,1.78,negro,5);    //O1P1
    linea(-0.8,3,-0.14666,2.5984,negro,5);    //I1E2/////
    linea(-0.14666,2.5984,0.42,3.08,negro,5);    //E2D1
    linea(-0.56761,2.84255,-0.1635,1.4113,negro,5);    //H2F2
    linea(-0.1635,1.4113,0.29114,2.86781,negro,5);    //F2G2
    linea(0.06382,2.03432,1.26776,2.17744,negro,5);    //S2R2
    linea(1.26776,2.17744,1.71397,2.68259,negro,5);    //R2Q2
    linea(1.71397,2.68259,1.93287,3.51608,negro,5);    //Q2P2
    linea(-0.41607,2.08483,-1.56107,2.16902,negro,5);    //T2U2
    linea(-1.56107,2.16902,-2.01571,2.65733,negro,5);    //U2V2
    linea(-2.01571,2.65733,-2.18409,3.57502,negro,5);    //V2W2
    linea(0.78,1.58,0.06382,2.03432,negro,5);    //S2V
    linea(1.6,1.76,1.26776,2.17744,negro,5);    //R2W
    linea(2.32,2.42,1.71397,2.68259,negro,5);    //Q2Z
    linea(-1.14,1.58,-0.41607,2.08483,negro,5);    //T2U
    linea(-1.88,1.78,-1.56107,2.16902,negro,5);    //U2P1
    linea(-2.58,2.42,-2.01571,2.65733,negro,5);    //V2O1
    linea(-1.8,3.4,-1.59919,2.73392,negro,5);    //A3B3
    linea(-1.59919,2.73392,-1.19524,2.52007,negro,5);    //B3C3
    linea(-1.19524,2.52007,-0.93386,2.53432,negro,5);    //C3D3
    linea(-0.93386,2.53432,-0.8,3,negro,5);    //D3E3
    linea(-1.43479,3.23825,-1.49464,3.00481,negro,5);    //M2I3
    linea(-1.49464,3.00481,-1.35207,2.86224,negro,5);    //I3H3
    linea(-1.35207,2.86224,-1.18098,2.86224,negro,5);    //H3G3
    linea(-1.18098,2.86224,-1.09069,3.12362,negro,5);    //G3F3
    linea(0.42,3.08,0.63443,2.53432,negro,5);    //D1O3
    linea(0.63443,2.53432,0.86729,2.52007,negro,5);    //O3N3
    linea(0.86729,2.52007,1.29976,2.77194,negro,5);    //N3M3
    linea(1.29976,2.77194,1.52875,3.35612,negro,5);    //M3N2
    linea(0.777,3.14738,0.81977,2.85748,negro,5);    //P3T3
    linea(0.81977,2.85748,1.01462,2.86224,negro,5);    //T3S3
    linea(1.01462,2.86224,1.15719,2.98105,negro,5);    //S3R3
    linea(1.15719,2.98105,1.11442,3.23767,negro,5);    //R3Q3

//////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////

 glutSwapBuffers();                 // opcional funciona para algunos con esta funcion,... glFlush()
}






                            //funcion principal, siempre es de esa manera
int main(int argc, char *argv[])
{

    glutInit(&argc, argv);              //Sirve para inicializar mi ventana de opengl
    glutInitWindowPosition(0,0);        //parte la ventana en 4 partes y en (0,0) esta en el centro,posicion de mi ventana
    glutInitWindowSize(600,600);        //tamaño de mi ventana tamaño normal (600,600)
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE|GLUT_DEPTH);           //tipo de modo de visualizacion de la ventana

    glutCreateWindow("Primer programa");        //Colocar el nombre que se le da a la ventana
    glutDisplayFunc(display);                   //nombre de la función
    pantalla();
                            //glClearColor(1,1,1,1);//color de la ventana negro
    glutMainLoop();             //hace que aparezca la ventana
    return EXIT_SUCCESS;            //tambien se puede usar el return
}
