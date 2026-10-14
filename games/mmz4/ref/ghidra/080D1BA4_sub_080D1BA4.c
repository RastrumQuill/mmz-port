// sub_080D1BA4 at 0x080D1BA4 (thumb)

undefined4 sub_080D1BA4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CDBC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0xb);
  *(undefined2 *)(param_1 + 0x50) = 0x110;
  *(undefined2 *)(param_1 + 0x52) = 0x110;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = 0x700;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54);
    iVar2 = -0x700;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D19DC(param_1);
  return in_lr;
}

