// sub_080378D8 at 0x080378D8 (thumb)

undefined8 sub_080378D8(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = -1;
  if ((*(byte *)(param_1 + 10) >> 4 & 1) != 0) {
    iVar1 = 1;
  }
  return CONCAT44(in_lr,iVar1 * **(int **)(*(char *)(param_1 + 0x71) * 4 +
                                          *(int *)((uint)*(byte *)(param_1 + 0x17f) * 4 +
                                                  *(int *)(&DAT_08335698 +
                                                          ((uint)(param_2 << 0x18) >> 0x16)))) +
                        *(int *)(param_1 + 0x54));
}

