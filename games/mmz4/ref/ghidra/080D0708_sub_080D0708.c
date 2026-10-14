// sub_080D0708 at 0x080D0708 (thumb)

undefined4 sub_080D0708(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0202dbf0;
  *(int *)(param_1 + 0x54) =
       *(int *)(DAT_0202dbf0 + 0x54) +
       *(int *)(&DAT_08863a08 + ((int)-(*(byte *)(DAT_0202dbf0 + 10) & 0x10) >> 0x1f & 4)) * 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + -0x1400;
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}

