// sub_080C1A70 at 0x080C1A70 (thumb)

undefined4 sub_080C1A70(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202e034;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xbc) +
       (short)(&DAT_080ef450)[(*(int *)(param_1 + 0xc0) >> 8) + DAT_0202e034 & 0xff] * 8;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xc0) +
       (short)(&DAT_080ef450)[(*(int *)(param_1 + 0xbc) >> 7) + iVar1 + 0x40U & 0xff] * 8;
  return in_lr;
}

