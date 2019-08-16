/* -------------------------------------------------------------------------
 * @brief Example on how to capture mouse clicks in OpenGL
 * @author Leonardo Flórez-Valencia (florez-l@javeriana.edu.co)
 * -------------------------------------------------------------------------
 * Compilation on linux:
 *
 * g++ -std=c++17 mouse_click.cxx -lm -lGL -lGLU -lglut -o myMouseClickTest
 *
 * -------------------------------------------------------------------------
 */

#include <GL/glut.h>
#include <cmath>
#include <iostream>

// -------------------------------------------------------------------------
void Init( )
{
  glClearColor( 1.0, 1.0, 1.0, 0.0 );
  glColor3f( 0.0f, 0.0f, 0.0f );
  glPointSize( 1.0f );
  gluOrtho2D( 0.0f, 640.0f, 0.0f, 480.0f );
}

// -------------------------------------------------------------------------
void MouseCbk( int button, int state, int x, int y )
{
  if( button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
  {
    std::cout
      << "Left button down on (" << x << ", " << y << ")"
      << std::endl;
  }
  else if( button == GLUT_LEFT_BUTTON && state == GLUT_UP )
  {
    std::cout
      << "Left button up on (" << x << ", " << y << ")"
      << std::endl;
  } // end if
}

// -------------------------------------------------------------------------
void DisplayCbk( )
{
}

// -------------------------------------------------------------------------
int main( int argc, char* argv[] )
{
  glutInit( &argc, argv );
  glutInitDisplayMode( GLUT_SINGLE | GLUT_RGB );
  glutInitWindowPosition( 50, 50 );
  glutInitWindowSize( 640, 480 );
  glutCreateWindow( "mouse_click test!!!" );
  glutDisplayFunc( DisplayCbk );
  glutMouseFunc( MouseCbk );
  Init( );
  glutMainLoop( );

  return( 0 );
}

// eof - mouse_click.cxx
