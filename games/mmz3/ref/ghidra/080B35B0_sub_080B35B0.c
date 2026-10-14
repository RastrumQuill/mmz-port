// sub_080B35B0 at 0x080B35B0 (thumb)

undefined4 sub_080B35B0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_080175BC();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xb);
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
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 4);
  sub_080B33E8(param_1);
  return in_lr;
}

