#define NumberOfStimuli 10

#define IMM_0 12

#define LEN_0 1

#define IMM_1 15

#define LEN_1 13

#define IMM_2 28

#define LEN_2 4

#define IMM_3 20

#define LEN_3 12

#define IMM_4 3

#define LEN_4 3

#define IMM_5 16

#define LEN_5 4

#define IMM_6 7

#define LEN_6 10

#define IMM_7 12

#define LEN_7 9

#define IMM_8 5

#define LEN_8 4

#define IMM_9 7

#define LEN_9 10

unsigned int op_a[] = {
0xFDB0568E,
0xD63A1FF4,
0xE9644CF1,
0x35656D48,
0x15389351,
0xD3338E9D,
0x2514DB3A,
0x99A56A70,
0x33BF59C2,
0x843CF66F,
};

unsigned int op_c[] = {
0x43BE774D,
0x9133B5E5,
0x9F8F38F1,
0xDB10CA6A,
0xBE8CAE48,
0x774FA4EE,
0x48B1573C,
0x59C7A09A,
0x0D6929B8,
0x6AD13BA9,
};

unsigned int res_bset[] = {
0xFDB0568E,
0xDFFF9FF4,
0xF9644CF1,
0xFFF56D48,
0x15389379,
0xD33F8E9D,
0x2515FFBA,
0x99BFFA70,
0x33BF59E2,
0x843DFFEF,
};

unsigned int res_bclr[] = {
0xFDB0468E,
0xD0001FF4,
0x09644CF1,
0x00056D48,
0x15389341,
0xD3308E9D,
0x2514003A,
0x99A00A70,
0x33BF5802,
0x843C006F,
};

unsigned int res_bextract[] = {
0xFFFFFFFF,
0x00000C74,
0xFFFFFFFE,
0x00000356,
0x00000002,
0x00000003,
0x000001B6,
0x00000056,
0xFFFFFFFE,
0x000001EC,
};

unsigned int res_bextractu[] = {
0x00000001,
0x00000C74,
0x0000000E,
0x00000356,
0x00000002,
0x00000003,
0x000001B6,
0x00000056,
0x0000000E,
0x000001EC,
};

unsigned int res_binsert[] = {
0x43BE674D,
0x9FFA35E5,
0x1F8F38F1,
0xD480CA6A,
0xBE8CAE48,
0x774DA4EE,
0x48B19D3C,
0x59C7009A,
0x0D692858,
0x6AD137A9,
};

