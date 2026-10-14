// sub_080D266C at 0x080D266C (thumb)

undefined4 sub_080D266C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  DAT_0202ed52 = 4;
  uVar1 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  if ((*(byte *)(iVar2 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_080D263C(param_1);
  return in_lr;
}

