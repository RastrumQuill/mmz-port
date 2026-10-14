// sub_080CA4DC at 0x080CA4DC (thumb)

undefined4 sub_080CA4DC(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  sVar1 = sub_08007C7C(iVar2,*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

