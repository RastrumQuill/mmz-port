// sub_0809A2B4 at 0x0809A2B4 (thumb)

undefined4 sub_0809A2B4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080128D4();
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08008CFC();
  if (sVar1 != 0) {
    sub_080032EC(0x34);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
    sub_0809A108(param_1);
  }
  return in_lr;
}

