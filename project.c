#include "spimcore.h"


/* ALU */
/* 10 Points */
void ALU(unsigned A,unsigned B,char ALUControl,unsigned *ALUresult,char *Zero)
{
    if (ALUControl == 0) 
    {
        *ALUresult = A + B;
    } 
    else if (ALUControl == 1) 
    {
        *ALUresult = A - B;
    }
    else if (ALUControl == 2)
    {
        (A<B)?(*ALUresult=1):(*ALUresult=0);
    } 
    // TODO: what does the unsigned change?
    else if (ALUControl == 3) {
        if (A < B) {
            *ALUresult = 1;
        } else {
            *ALUresult = 0;
        }
    } 
    else if (ALUControl == 4)
    {
        *ALUresult = A & B;
    }
    else if (ALUControl == 5)
    {
        *ALUresult = A | B;
    }
    else if (ALUControl == 6)
    {
        *ALUresult = B << 16;
    }
    else if (ALUControl == 7)
    {
        *ALUresult = ~A;
    }
    *Zero = (*ALUresult == 0) ? 1 : 0;

}

/* instruction fetch */
/* 10 Points */
int instruction_fetch(unsigned PC,unsigned *Mem,unsigned *instruction)
{
    *Mem = PC << 2;
    *instruction = Mem;
}


/* instruction partition */
/* 10 Points */
void instruction_partition(unsigned instruction, unsigned *op, unsigned *r1,unsigned *r2, unsigned *r3, unsigned *funct, unsigned *offset, unsigned *jsec)
{
// unsigned instruction;
// unsigned op,	// instruction [31-26]
// 	r1,	// instruction [25-21]
// 	r2,	// instruction [20-16]
// 	r3,	// instruction [15-11]
// 	funct,	// instruction [5-0]
// 	offset,	// instruction [15-0]
// 	jsec;	// instruction [25-0]

*op = instruction >> 26;
*r1 = (instruction >> 21) & 0x1F;
*r2 = (instruction >> 16) & 0x1F;
*r3 = (instruction >> 11) & 0x1F;
*funct = instruction & 0x3F;
*offset = instruction & 0xFFFF;
*jsec = instruction & 0x3FFFFFF;

    
}


/* instruction decode */
/* 15 Points */
int instruction_decode(unsigned op,struct_controls *controls)
{
    if (op == 0)
    {

    } 
    else if (op == 0x2B)
    {
      
    }
    else if (op == 0x4)
    {

    }
    else if (op == 0x23)
    {

    }
    else if (op == 0x2)
    {

    }


}

/* Read Register */
/* 5 Points */
void read_register(unsigned r1,unsigned r2,unsigned *Reg,unsigned *data1,unsigned *data2)
{

}


/* Sign Extend */
/* 10 Points */
void sign_extend(unsigned offset,unsigned *extended_value)
{

}

/* ALU operations */
/* 10 Points */
int ALU_operations(unsigned data1,unsigned data2,unsigned extended_value,unsigned funct,char ALUOp,char ALUSrc,unsigned *ALUresult,char *Zero)
{

}

/* Read / Write Memory */
/* 10 Points */
int rw_memory(unsigned ALUresult,unsigned data2,char MemWrite,char MemRead,unsigned *memdata,unsigned *Mem)
{

}


/* Write Register */
/* 10 Points */
void write_register(unsigned r2,unsigned r3,unsigned memdata,unsigned ALUresult,char RegWrite,char RegDst,char MemtoReg,unsigned *Reg)
{

}

/* PC update */
/* 10 Points */
void PC_update(unsigned jsec,unsigned extended_value,char Branch,char Jump,char Zero,unsigned *PC)
{

}

