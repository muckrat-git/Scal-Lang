#include<stdio.h>
#include<time.h>
int pointer=0;int mem[8];int select=0;void delay(int milli_seconds) {clock_t start_time = clock();while (clock() < start_time + (milli_seconds*1000));}
int main() {select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;mem[pointer] = select;select = 0;pointer++;pointer++;select++;select++;select++;select++;select++;select++;select++;select++;select++;select++;mem[pointer] = select;select = 0;pointer = select;while(mem[pointer]) {select = mem[pointer];select--;mem[pointer] = select;pointer++;select = mem[pointer];select++;mem[pointer] = select;printf("%d", select);printf("\n");pointer++;delay(mem[pointer]*10);pointer--;pointer--;}}