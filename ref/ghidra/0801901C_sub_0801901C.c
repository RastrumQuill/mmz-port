// sub_0801901C at 0x0801901C (thumb)

int sub_0801901C(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -1;
  if ((*(byte *)(param_1 + 10) >> 4 & 1) != 0) {
    iVar1 = 1;
  }
  return iVar1 * **(int **)(*(char *)(param_1 + 0x71) * 4 +
                           *(int *)((uint)*(byte *)(param_1 + 0x115) * 4 +
                                   *(int *)(&DAT_082a93f8 + ((uint)(param_2 << 0x18) >> 0x16)))) +
         *(int *)(param_1 + 0x4c);
}

