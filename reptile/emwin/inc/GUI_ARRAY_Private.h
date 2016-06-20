/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
**********************************************************************
*                                                                    *
*        (c) 1996 - 2015  SEGGER Microcontroller GmbH & Co. KG       *
*                                                                    *
*        Internet: www.segger.com    Support:  support@segger.com    *
*                                                                    *
**********************************************************************

** emWin V5.28 - Graphical user interface for embedded applications **
All  Intellectual Property rights  in the Software belongs to  SEGGER.
emWin is protected by  international copyright laws.  Knowledge of the
source code may not be used to write a similar product.  This file may
only be used in accordance with the following terms:

The  software has  been licensed  to Energy  Micro AS whose registered
office is  situated at  Sandakerveien 118,  N-0484 Oslo, NORWAY solely
for  the  purposes  of  creating  libraries  for   Energy  Micros  ARM
Cortex-M3,  M4Fb processor-based devices,  sublicensed and distributed
under  the  terms  and conditions of  the End  User License  Agreement
supplied by Energy Micro AS. 
Full source code is available at: www.segger.com

We appreciate your understanding and fairness.
----------------------------------------------------------------------
File        : GUI_ARRAY_Private.h
Purpose     : Private array handling routines, should be used only
              from within GUI_ARRAY... routines!
---------------------------END-OF-HEADER------------------------------
*/

#ifndef GUI_ARRAY_PRIVATE_H
#define GUI_ARRAY_PRIVATE_H

#include "GUI_ARRAY.h"

#if GUI_WINSUPPORT

/*********************************************************************
*
*       Private types
*
**********************************************************************
*/
typedef struct {
  U16 NumItems;
  WM_HMEM haHandle;   /* Handle to buffer holding handles */
} GUI_ARRAY_OBJ;

/*********************************************************************
*
*       Private functions
*
**********************************************************************
*/
WM_HMEM GUI_ARRAY__GethItem      (const GUI_ARRAY_OBJ * pThis, unsigned int Index);
void  * GUI_ARRAY__GetpItem      (const GUI_ARRAY_OBJ * pThis, unsigned int Index);
void  * GUI_ARRAY__GetpItemLocked(const GUI_ARRAY_OBJ * pThis, unsigned int Index);
int     GUI_ARRAY__SethItem      (      GUI_ARRAY_OBJ * pThis, unsigned int Index, WM_HMEM hItem);

#endif /* GUI_WINSUPPORT */

#endif /* GUI_ARRAY_PRIVATE_H */
