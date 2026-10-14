// sub_0804C22C at 0x0804C22C (thumb)

undefined4 sub_0804C22C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x12) == ' ') {
    local_18 = *(int *)(param_1 + 0x4c) + 0x400;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      local_18 = *(int *)(param_1 + 0x4c) + -0x400;
    }
    local_14 = *(int *)(param_1 + 0x50) + 0x1300;
    iVar1 = sub_080C88E8((int)(short)((uint)(*(int *)(DAT_0202286c + 0x4c) - local_18) >> 8),
                         (int)(short)((uint)(*(int *)(DAT_0202286c + 0x50) -
                                            (*(int *)(param_1 + 0x50) + 0x1b00)) >> 8));
    sub_080769C4(param_1,&local_18,0x280,((uint)(iVar1 << 0x10) >> 0x18) + 0x80 & 0xff);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

