#define kosong void
#define angka_bulet int
#define hurup char
#define mangap {
#define mingkem }
#define sahur (
#define buka_puasa )
#define tikom ;
#define kurang_dari <
#define qoma ,
#define gua_ditambah +=
#define gua_dikurang -=
#define dikali *
#define titik2 glVertex2f
#define kalo if
#define pulang return
#define dosa sin
#define koskosan cos

#include <iostream>
#include <GL/glut.h>
#include <math.h>

#define DEG_TO_RAD 0.017453

GLfloat theta = 0.0 tikom
    
kosong mydisplay sahur kosong buka_puasa
mangap
    glClear sahur GL_COLOR_BUFFER_BIT buka_puasa tikom
    glColor3f sahur 1.0 qoma  0.0 qoma  0.0 buka_puasa tikom
    glBegin sahur GL_POLYGON buka_puasa tikom
        titik2 sahur  koskosan sahur DEG_TO_RAD dikali theta buka_puasa qoma  dosa sahur DEG_TO_RAD dikali theta buka_puasa buka_puasa tikom
        titik2 sahur -dosa sahur DEG_TO_RAD dikali theta buka_puasa qoma  koskosan sahur DEG_TO_RAD dikali theta buka_puasa buka_puasa tikom
        titik2 sahur -koskosan sahur DEG_TO_RAD dikali theta buka_puasa qoma  -dosa sahur DEG_TO_RAD dikali theta buka_puasa buka_puasa tikom
        titik2 sahur  dosa sahur DEG_TO_RAD dikali theta buka_puasa qoma  -koskosan sahur DEG_TO_RAD dikali theta buka_puasa buka_puasa tikom
    glEnd sahur  buka_puasa tikom
    glutSwapBuffers sahur  buka_puasa tikom
mingkem
    
kosong spinDisplay sahur kosong buka_puasa
mangap
    theta gua_dikurang 0.001 tikom
    kalo  sahur theta kurang_dari -360.0 buka_puasa theta gua_ditambah 360.0 tikom
    glutPostRedisplay sahur  buka_puasa tikom
mingkem
    
angka_bulet main sahur angka_bulet argc qoma  hurup **argv buka_puasa
mangap
    glutInit sahur &argc qoma  argv buka_puasa tikom
    glutInitDisplayMode sahur GLUT_STENCIL | GLUT_RGB buka_puasa tikom
    glutInitWindowPosition sahur 310 qoma  0 buka_puasa tikom
    glutCreateWindow sahur "Tugas1 Grafkom Asdos" buka_puasa tikom

    // Inisialisasi Glut
    glClearColor sahur 0.0 qoma  0.0 qoma  0.0 qoma  0.0 buka_puasa tikom
    glColor3f sahur 1.0 qoma  1.0 qoma  1.0 buka_puasa tikom
    glMatrixMode sahur GL_PROJECTION buka_puasa tikom
    glLoadIdentity sahur  buka_puasa tikom
    gluOrtho2D sahur -1.0 qoma  1.0 qoma  -1.0 qoma  1.0 buka_puasa tikom

    glutDisplayFunc sahur mydisplay buka_puasa tikom
    glutIdleFunc sahur spinDisplay buka_puasa tikom
    glutMainLoop sahur  buka_puasa tikom
    pulang 0 tikom
mingkem
