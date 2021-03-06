#ifndef LONGTEXT
#define LONGTEXT(TXT) L##TXT
#endif // !LONGTEXT

#define ERR_ERR L"RUNTIME: "
#define ERR_RIGHT L"EXPECTED RIGHT PARAM TO BE "
#define ERR_LEFT L"EXPECTED LEFT PARAM TO BE "
#define ERR_WAS_EXPECTED L"WAS EXPECTED TO BE "
#define ERR_OF_TYPE L"OF TYPE "
#define ERR_TYPES L"EXPECTED PARAMS TO BE "
#define ERR_RIGHT_TYPE ERR_ERR ERR_RIGHT ERR_OF_TYPE
#define ERR_LEFT_TYPE ERR_ERR ERR_LEFT ERR_OF_TYPE
#define ERR_STRING L"STRING"
#define ERR_SCALAR L"SCALAR"
#define ERR_ARRAY L"ARRAY"
#define ERR_ARRAYS L"ARRAYS"
#define ERR_ARRAY_(X) L"ARRAY[" LONGTEXT(#X) L"] "
#define ERR_BOOL L"BOOL"
#define ERR_IF L"IF"
#define ERR_CODE L"CODE"
#define ERR_WHILE L"WHILE"
#define ERR_NAMESPACE L"NAMESPACE"
#define ERR_OBJECT L"OBJECT"
#define ERR_FOR L"FOR"
#define ERR_SWITCH L"SWITCH"
#define ERR_COUNT L"COUNT"
#define ERR_NAN L"NaN"
#define ERR_ARRAY_SIZE(X) L" WITH AT LEAST " LONGTEXT(#X) L" ELEMENTS"
#define ERR_ARRAY_SIZE_EXACT(X) L" WITH EXACTLY " LONGTEXT(#X) L" ELEMENTS"
#define ERR_EQUAL_TYPE L" OF EQUAL TYPE"
#define ERR_SIDE L"SIDE"
#define ERR_GROUP L"GROUP"
#define ERR_SCRIPT L"SCRIPT"

#define ERR_CAN_ONLY_PROCESS ERR_ERR L"CAN ONLY PROCESS "
#define ERR_POSITIVE L"POSITIVE"
#define ERR_NEGATIVE L"NEGATIVE"

#define ERR_NOT_EMPTY L"NOT EMPTY "
#define ERR_NON_EMPTY_STRING L"NON EMPTY STRING"
#define ERR_EXISTING L"EXISTING "

#define ERR_OR L" OR "

#define ERR_SPECIAL_PRIVATE_1 ERR_ERR L"RIGHT PARAMETER IS NOT STARTING WITH '_'"
#define ERR_SPECIAL_FORMAT_1 ERR_ERR L"UNKNOWN INDEX"
#define ERR_SPECIAL_FORMAT_2 ERR_ERR L"PLACEHOLDER EXCEEDS ARRAY LENGTH"
#define ERR_SPECIAL_SELECT_1 ERR_ERR L"INDEX OUT OF RANGE"
#define ERR_SPECIAL_DIVIDE_1 ERR_ERR L"ZERO DIVISOR"
#define ERR_SPECIAL_SWITCH ERR_ERR L"FOREIGN ERROR: INVALID SWITCH BLOCK"
#define ERR_SPECIAL_PARAMS_UNARY_1 ERR_ERR L"CANNOT LOCATE _this VARIABLE"
#define ERR_SPECIAL_PARAMS_FORMAT_ERROR ERR_ERR L"MALFORMED FORMAT ARRAY"
#define ERR_SPECIAL_PARAMS_VARNAME L"VARIABLE NAMES MUST START WITH '_'"
#define ERR_SPECIAL_PARAMS_FORMAT_MISSMATCH ERR_ERR L"FORMAT MISSMATCH ON INPUT ARRAY"
#define ERR_SPECIAL_FOR_1 ERR_SPECIAL_PRIVATE_1
#define ERR_SPECIAL_ISNIL_1 ERR_SPECIAL_PRIVATE_1
#define ERR_SPECIAL_CREATEUNIT_1 ERR_ERR L"GROUP PASSED FOR POSITION HAS NO LEADER"
