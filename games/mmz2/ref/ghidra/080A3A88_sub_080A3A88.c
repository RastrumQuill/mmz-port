// sub_080A3A88 at 0x080A3A88 (thumb)

undefined4 sub_080A3A88(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == -1) || ((*(uint *)(param_1 + 0x8c) & 0x400104) != 0)) ||
     (sVar2 = sub_08008CFC(iVar3,*(undefined4 *)(param_1 + 0x58)), sVar2 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_080A36BC(param_1);
  }
  return in_lr;
}

