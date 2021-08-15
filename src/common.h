
#ifndef _COMMON_H
#define _COMMON_H

#define MAX_FILE_STR 4096
#define MAX_STR_LEN  2048

#define OUTPUT_DEFAULT  0
#define OUTPUT_JSON     1
#define OUTPUT_CSV      2
#define OUTPUT_CSV_BARE 3

// Get string length without trailing terminator
#define sizeof_str_noterm(instr) (sizeof(instr) - 1)

#endif // _COMMON_H
