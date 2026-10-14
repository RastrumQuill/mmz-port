// sub_080BEB5C at 0x080BEB5C (thumb)

undefined4 sub_080BEB5C(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083485b8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083485c8 + (uint)*(byte *)(param_1 + 0x10) * 4));
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  uVar1 = sub_08015188(&DAT_0202ed18,param_1 + 0x54);
  if (uVar1 < 0x2000) {
    sub_08012A14(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080BED30(param_1);
  }
  return in_lr;
}

