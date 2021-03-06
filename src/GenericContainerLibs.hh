/*--------------------------------------------------------------------------*\
 |                                                                          |
 |  Copyright (C) 2013                                                      |
 |                                                                          |
 |         , __                 , __                                        |
 |        /|/  \               /|/  \                                       |
 |         | __/ _   ,_         | __/ _   ,_                                |
 |         |   \|/  /  |  |   | |   \|/  /  |  |   |                        |
 |         |(__/|__/   |_/ \_/|/|(__/|__/   |_/ \_/|/                       |
 |                           /|                   /|                        |
 |                           \|                   \|                        |
 |                                                                          |
 |      Enrico Bertolazzi                                                   |
 |      Dipartimento di Ingegneria Industriale                              |
 |      Universita` degli Studi di Trento                                   |
 |      email: enrico.bertolazzi@unitn.it                                   |
 |                                                                          |
\*--------------------------------------------------------------------------*/

//
// file: GenericContainerLibs.hh
//

#ifndef GENERIC_CONTAINER_LIBS_HH
#define GENERIC_CONTAINER_LIBS_HH

#include "GenericContainerConfig.hh"

#if defined(_WIN32) || defined(WIN32) || defined(_WIN64) || defined(WIN64)
  #define GENERIC_CONTAINER_ON_WINDOWS
  #ifdef _MSC_VER
    #pragma comment(lib, "kernel32.lib")
    #pragma comment(lib, "user32.lib")
  #endif
#endif

#endif

//
// eof: GenericContainerLibs.hh
//
