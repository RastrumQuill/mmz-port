// sub_080D6CA8 at 0x080D6CA8 (thumb)

undefined4 sub_080D6CA8(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),iVar2 + 0xa00);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D6B50(param_1);
  }
  return in_lr;
}

