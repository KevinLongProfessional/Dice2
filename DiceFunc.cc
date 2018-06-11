#include "dotH/globals.h"
#include "dotH/includes.h"
#include "dotH/prototypes.h"
#include "dotH/headers.h"

void SixSide(){
glBindTexture(GL_TEXTURE_2D, One);
glBegin(GL_POLYGON);
glTexCoord2f( 1,0 );glVertex3f(  -0.5,  -0.5, -0.5 );
glTexCoord2f( 0,0 );glVertex3f(  -0.5,  0.5, -0.5 );
glTexCoord2f( 0,1 );glVertex3f(  0.5,  0.5, -0.5 );
glTexCoord2f( 1,1 );glVertex3f(  0.5,  -0.5, -0.5 );
glEnd();
glBindTexture(GL_TEXTURE_2D, Two);
//Front
glBegin(GL_POLYGON);
glTexCoord2f( 1,0 );glVertex3f(  -0.5,  -0.5, 0.5 );
glTexCoord2f( 0,0 );glVertex3f(  -0.5,  0.5, 0.5 );
glTexCoord2f( 0,1 );glVertex3f(  0.5,  0.5, 0.5 );
glTexCoord2f( 1,1 );glVertex3f(  0.5,  -0.5, 0.5 );
glEnd();

glBindTexture(GL_TEXTURE_2D, falconTexture);

glBegin(GL_POLYGON);

glTexCoord2f( 1,0 );glVertex3f(  0.5,  -0.5, -0.5 );
glTexCoord2f( 0,0 );glVertex3f(  0.5,  -0.5, 0.5 );
glTexCoord2f( 0,1 );glVertex3f(  0.5,  0.5, 0.5 );
glTexCoord2f( 1,1 );glVertex3f(  0.5,  0.5, -0.5 );

glEnd();
glBindTexture(GL_TEXTURE_2D, Three);
glBegin(GL_POLYGON);
glTexCoord2f( 1,0 );glVertex3f(  -0.5,  -0.5, -0.5 );
glTexCoord2f( 0,0 );glVertex3f(  -0.5,  -0.5, 0.5 );
glTexCoord2f( 0,1 );glVertex3f(  -0.5,  0.5, 0.5 );
glTexCoord2f( 1,1 );glVertex3f(  -0.5,  0.5, -0.5 );
glEnd();
glBindTexture(GL_TEXTURE_2D, Four);
glBegin(GL_POLYGON);

glTexCoord2f( 1,0 );glVertex3f(  -0.5,  0.5, -0.5 );
glTexCoord2f( 0,0 );glVertex3f(  0.5,  0.5, -0.5 );
glTexCoord2f( 0,1 );glVertex3f(  0.5,  0.5, 0.5 );
glTexCoord2f( 1,1 );glVertex3f(  -0.5,  0.5, 0.5 );
glEnd();

glBindTexture(GL_TEXTURE_2D, Five);

glEnable(GL_TEXTURE_2D);

glRotated(180,1,0,0);

glBegin(GL_QUADS);
glTexCoord2f( 1,0 );glVertex3f(  -0.5,  0.5, -0.5 );
glTexCoord2f( 0,0 );glVertex3f(  0.5,  0.5, -0.5 );
glTexCoord2f( 0,1 );glVertex3f(  0.5,  0.5, 0.5 );
glTexCoord2f( 1,1 );glVertex3f(  -0.5,  0.5, 0.5 );
glEnd();
}

void halfTwentySideMake(double a, double b, double c){

glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_POLYGON);
glVertex3f(a,b,c);
glVertex3f(a,-b,c);
glVertex3f(b,c,a);
glTexCoord2f( 1,0 );
glTexCoord2f( 0,0 );
glTexCoord2f( 0,1 );
glTexCoord2f( 1,1 );
glEnd();
glColor3f(1.0f, 1.0f, 0.0f);
glBegin(GL_POLYGON);
glVertex3f(a,b,c);
glVertex3f(a,-b,c);
glVertex3f(b,c,-a);
glEnd();
glColor3f(1.0f, 0.5f, 0.0f);
glBegin(GL_POLYGON);
glVertex3f(b,c,a);
glVertex3f(-b,c,a);
glVertex3f(c,a,b);
glEnd();
glColor3f(0.0f, 1.0f, 0.0f);
glBegin(GL_POLYGON);
glVertex3f(b,c,a);
glVertex3f(-b,c,a);
glVertex3f(c,-a,b);
glEnd();
glColor3f(0.0f, 0.0f, 1.0f);
glBegin(GL_POLYGON);
glVertex3f(c,a,b);
glVertex3f(c,a,-b);
glVertex3f(a,b,c);
glEnd();
glColor3f(1.0f, 0.0f, 1.0f);
glBegin(GL_POLYGON);
glVertex3f(c,a,b);
glVertex3f(c,a,-b);
glVertex3f(-a,b,c);
glEnd();
glColor3f(1.0f, 1.0f, 1.0f);
glBegin(GL_POLYGON);
glVertex3f(c,a,b);
glVertex3f(b,c,a);
glVertex3f(a,b,c);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(b,c,a);
glVertex3f(c,-a,b);
glVertex3f(a,-b,c);
glEnd();



glBegin(GL_POLYGON);
glVertex3f(b,c,a);
glVertex3f(c,-a,b);
glVertex3f(a,-b,c);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(b,c,a);
glVertex3f(c,-a,b);
glVertex3f(a,-b,c);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(b,c,-a);
glVertex3f(a,b,c);
glVertex3f(c,a,-b);
glEnd();

glBegin(GL_POLYGON);
glVertex3f(c,a,b);
glVertex3f(-b,c,a);
glVertex3f(-a,b,c);
glEnd();




}

//currently only makes half a 20 sider
void twentySideMake(double a, double b, double c){

halfTwentySideMake(a,b,c);
halfTwentySideMake(-a,-b,-c);




}


