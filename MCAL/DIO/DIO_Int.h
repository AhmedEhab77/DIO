#ifndef  _DIO_INTERFACE_H
#define  _DIO_INTERFACE_H
													   
void DIO_VidSetPinDirection(u8 LOC_u8Port,u8 LOC_u8Pin,u8 LOC_u8Status);
/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: DIO_VidSetPinDirection.								**/
/**	Return Type		: void.					   		   		                **/
/**	Arguments		: Port , Pin number and Status(Output or Input).	    **/
/**	Functionality	: Setting the dirction of specific pin at run time.	    **/
/*****************************************************************************/
/*****************************************************************************/
void DIO_VidSetPortDirection(u8 LOC_u8Port,u8 LOC_u8Status);
/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: DIO_VidSetPortDirection.								**/
/**	Return Type		: void.					   		   		                **/
/**	Arguments		: Port number and Status(Output or Input).	    **/
/**	Functionality	: Setting the dirction of specific port at run time.    **/
/*****************************************************************************/
/*****************************************************************************/
void DIO_VidSetPinValue (u8 LOC_u8Port,u8 LOC_u8Pin,u8 LOC_u8Status);
/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: DIO_VidSetPinValue.								    **/
/**	Return Type		: void.					   		   		                **/
/**	Arguments		: Port , pin number and Value(High or Low).	            **/
/**	Functionality	: Setting the value of specific pin at run time.        **/
/*****************************************************************************/
/*****************************************************************************/
void DIO_VidSetPortValue(u8 LOC_u8Port,u8 LOC_u8Value);
/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: DIO_VidSetPortValue.								    **/
/**	Return Type		: void.					   		   		                **/
/**	Arguments		: Port number and Value of port(from 0 to 255).	        **/
/**	Functionality	: Setting the value of specific port at run time.       **/
/*****************************************************************************/
/*****************************************************************************/
u8 DIO_u8GetPinValue(u8 LOC_u8Port,u8 LOC_u8Pin);
/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: DIO_u8GetPinValue.								    **/
/**	Return Type		: u8.					   		   		                **/
/**	Arguments		: Port and pin number.	                                **/
/**	Functionality	: Getting the value of specific pin at run time.        **/
/*****************************************************************************/
/*****************************************************************************/
void DIO_VidTogglePin(u8 LOC_u8Port,u8 LOC_u8Pin);
/*****************************************************************************/
/*****************************************************************************/
/**	Function Name	: DIO_VidTogglePin.								        **/
/**	Return Type		: void.					   		   		                **/
/**	Arguments		: Port and pin number.	                                **/
/**	Functionality	: Toggling specific pin at run time.                    **/
/*****************************************************************************/
/*****************************************************************************/
#endif