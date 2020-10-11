#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"
#include"DIO_Priv.h"
#include"DIO_Config.h"



void DIO_VidSetPinDirection(u8 LOC_u8Port,u8 LOC_u8Pin,u8 LOC_u8Status)
{
	switch(LOC_u8Status)
	{
		case OUTPUT:
		switch(LOC_u8Port)
		{
			case DIO_PORTA:SET_BIT(DDRA,LOC_u8Pin);
			break;                 
			case DIO_PORTB:SET_BIT(DDRB,LOC_u8Pin);
			break;                
			case DIO_PORTC:SET_BIT(DDRC,LOC_u8Pin);
			break;                 
			case DIO_PORTD:SET_BIT(DDRD,LOC_u8Pin);
			break;
		}
		break;
		case INPUT:
	   switch(LOC_u8Port)
       {
        	case DIO_PORTA:CLR_BIT(DDRA,LOC_u8Pin);
        	break;                 
        	case DIO_PORTB:CLR_BIT(DDRB,LOC_u8Pin);
        	break;                
        	case DIO_PORTC:CLR_BIT(DDRC,LOC_u8Pin);
        	break;                 
        	case DIO_PORTD:CLR_BIT(DDRD,LOC_u8Pin);
        	break;
        }
        break;
	}
}

void DIO_VidSetPortDirection(u8 LOC_u8Port,u8 LOC_u8Status,u8 LOC_u8Value)
{
	
    	switch(LOC_u8Port)
    	{
    		case DIO_PORTA:DDRA=LOC_u8Value;
    		break;                 
    		case DIO_PORTB:DDRB=LOC_u8Value;
    		break;                
    		case DIO_PORTC:DDRC=LOC_u8Value;
    		break;                 
    		case DIO_PORTD:DDRD=LOC_u8Value;
    		break;
    	}
    	
}

void DIO_VidSetPinValue (u8 LOC_u8Port,u8 LOC_u8Pin,u8 LOC_u8Status)
{
	switch(LOC_u8Status)
	{
		case HIGH:
		switch(LOC_u8Port)
		{
			case DIO_PORTA:SET_BIT(PORTA,LOC_u8Pin);
			break;                 
			case DIO_PORTB:SET_BIT(PORTB,LOC_u8Pin);
			break;                
			case DIO_PORTC:SET_BIT(PORTC,LOC_u8Pin);
			break;                 
			case DIO_PORTD:SET_BIT(PORTD,LOC_u8Pin);
			break;
		}
		break;
		case LOW:
	   switch(LOC_u8Port)
       {
        	case DIO_PORTA:CLR_BIT(PORTA,LOC_u8Pin);
        	break;                 
        	case DIO_PORTB:CLR_BIT(PORTB,LOC_u8Pin);
        	break;                
        	case DIO_PORTC:CLR_BIT(PORTC,LOC_u8Pin);
        	break;                 
        	case DIO_PORTD:CLR_BIT(PORTD,LOC_u8Pin);
        	break;
        }
        break;
	}
}

void DIO_VidSetPortValue(u8 LOC_u8Port,u8 LOC_u8Value)
{
	switch(LOC_u8Port)
    	{
    		case DIO_PORTA:PORTA=LOC_u8Value;
    		break;                 
    		case DIO_PORTB:PORTB=LOC_u8Value;
    		break;                
    		case DIO_PORTC:PORTC=LOC_u8Value;
    		break;                 
    		case DIO_PORTD:PORTD=LOC_u8Value;
    		break;
    	}
}

u8 DIO_u8GetPinValue(u8 LOC_u8Port,u8 LOC_u8Pin)
{
	u8 value;
	switch(LOC_u8Port)
    	{
    		case DIO_PORTA:value=GET_BIT(PINA,LOC_u8Pin);
    		break;                 
    		case DIO_PORTB:value=GET_BIT(PINB,LOC_u8Pin);
    		break;                
    		case DIO_PORTC:value=GET_BIT(PINC,LOC_u8Pin);
    		break;                 
    		case DIO_PORTD:value=GET_BIT(PIND,LOC_u8Pin);
    		break;
    	}
		return value;
}

void DIO_VidTogglePin(u8 LOC_u8Port,u8 LOC_u8Pin)
{
	switch(LOC_u8Port)
    	{
    		case DIO_PORTA:TOG_BIT(PORTA,LOC_u8Pin);
    		break;           
    		case DIO_PORTB:TOG_BIT(PORTB,LOC_u8Pin);
    		break;          
    		case DIO_PORTC:TOG_BIT(PORTC,LOC_u8Pin);
    		break;           
    		case DIO_PORTD:TOG_BIT(PORTD,LOC_u8Pin);
    		break;
    	}
}



