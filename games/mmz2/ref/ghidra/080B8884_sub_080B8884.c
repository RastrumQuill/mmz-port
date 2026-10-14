// sub_080B8884 at 0x080B8884 (thumb)

undefined4 sub_080B8884(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  DAT_0202f06a = 4;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 4);
  sub_080B8854(param_1);
  return in_lr;
}

