// sub_080E22B4 at 0x080E22B4 (thumb)

undefined4 sub_080E22B4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x1800 < uVar1) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080E2314(param_1);
  }
  return in_lr;
}

