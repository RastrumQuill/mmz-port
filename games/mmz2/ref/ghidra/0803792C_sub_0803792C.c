// sub_0803792C at 0x0803792C (thumb)

undefined8 sub_0803792C(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = -1;
  if ((*(byte *)(param_1 + 10) >> 5 & 1) == 0) {
    iVar1 = 1;
  }
  return CONCAT44(in_lr,iVar1 * *(int *)(*(int *)(*(char *)(param_1 + 0x71) * 4 +
                                                 *(int *)((uint)*(byte *)(param_1 + 0x17f) * 4 +
                                                         *(int *)(&DAT_08335698 +
                                                                 ((uint)(param_2 << 0x18) >> 0x16)))
                                                 ) + 4) + *(int *)(param_1 + 0x58));
}

