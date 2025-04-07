#ifndef operators_h
#define operators_h

struct BrainfuckOperator {
    int *bits;
    int *actualPosition;
    char operator;
    char *text;
};

void nextMemoryPtr(struct BrainfuckOperator *operator);
void previousMemoryPtr(struct BrainfuckOperator *operator);
void plusOperator(struct BrainfuckOperator *operator);
void minusOperator(struct BrainfuckOperator *operator);
void doOperation(struct BrainfuckOperator *operator);
void printOperator(struct BrainfuckOperator *operator);

#endif