#include "verilated.h"
#include "obj_dir/Vbsg_fma.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char **argv){
    Verilated::commandArgs(argc, argv);

    Vbsg_fma *dut = new Vbsg_fma{};

    srand(time(nullptr));

    for(int i = 0 ; i < 10000; ++i){
        unsigned int opA = rand();
        unsigned int opB = rand();

        dut->opA_i = opA;
        dut->opB_i = opB;

        dut->eval();

        if(dut->mul_o != opA * opB){
            printf("opA: %d, opB: %d, mul_o: %d \b", opA, opB, dut->mul_o);
            return 1;
        } else {
            puts("Correct!");
        }
    }
    return 0;
}