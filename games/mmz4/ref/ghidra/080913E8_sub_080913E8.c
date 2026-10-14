// sub_080913E8 at 0x080913E8 (thumb)

undefined4 sub_080913E8(int param_1)

{
  char *pcVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  pcVar1 = (char *)(*(int *)(param_1 + 0x28) + 0xd5);
  *pcVar1 = *pcVar1 + -1;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x400;
  sub_080D0894(1,&local_14);
  sub_08002B10(0x35);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

