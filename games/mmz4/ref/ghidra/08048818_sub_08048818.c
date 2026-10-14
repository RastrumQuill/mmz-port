// sub_08048818 at 0x08048818 (thumb)

undefined4 sub_08048818(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar2 = sub_08048920();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((((cVar1 == -1) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) || (sVar2 != 0)) ||
     ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_08048494(param_1);
  }
  return in_lr;
}

