//
//  ch08_08.c
//
#include <stdio.h>

//#define DEBUG_MODE

#ifdef DEBUG_MODE
    #define DEBUG_PRINT(str) printf("DEBUG:%-16s %04d %s\n",  \
        __FILE__, __LINE__, str)
#endif

#define PHONE_NUMBER_CORRECT         0
#define PHONE_NUMBER_FORMAT_ERROR   -1
#define PHONE_NUMBER_TOO_SHORT      -2
#define PHONE_NUMBER_TOO_LONG       -3

int checkPhoneNumber(char *format, char *phoneNumber) {
#ifdef DEBUG_MODE
    if( format == NULL ) DEBUG_PRINT("format == NULL");
    if( *format == NULL ) DEBUG_PRINT("format string is NULL string");
    if( phoneNumber == NULL ) DEBUG_PRINT("phoneNumber == NULL");
    if( *phoneNumber == NULL ) DEBUG_PRINT("phone number string is NULL string");
#endif

    while( *format && *phoneNumber) {
        switch( *format ) {
            case '9':
                if( *phoneNumber >= '0' )
                    if( *phoneNumber <= '9' )
                        break;
                return PHONE_NUMBER_FORMAT_ERROR;
            default:
                if( *format == *phoneNumber )
                    break;
                else
                    return PHONE_NUMBER_FORMAT_ERROR;
        }
        format++;
        phoneNumber++;
    }
    if( *format )
        return PHONE_NUMBER_TOO_SHORT;
    if( *phoneNumber )
        return PHONE_NUMBER_TOO_LONG;
    return PHONE_NUMBER_CORRECT;
}

int main() {
    int returnCode;
    char phoneNumber[80] = "";

    printf("Input phone number (99)999-99999 : ");
    scanf("%s", phoneNumber);
    returnCode = checkPhoneNumber("(99)999-99999", phoneNumber);
    
    //returnCode = checkPhoneNumber("(99)999-99999", NULL);
    
    switch( returnCode ) {
        case PHONE_NUMBER_CORRECT:
            printf("Phone number is correct\n");
            break;
        case PHONE_NUMBER_FORMAT_ERROR:
            printf("Phone number format error\n");
            break;
        case PHONE_NUMBER_TOO_SHORT:
            printf("Phone number too short\n");
            break;
        case PHONE_NUMBER_TOO_LONG:
            printf("Phone number too long\n");
            break;
#ifdef DEBUG_MODE
        default:
            DEBUG_PRINT("checkPhoneNumber() return unknow value");
#endif         
    }    
    return 0;
}