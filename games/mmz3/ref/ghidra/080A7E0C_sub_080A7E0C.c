// sub_080A7E0C at 0x080A7E0C (thumb)

undefined4 sub_080A7E0C(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar1 = *(int *)(iVar3 + 0x54);
    iVar2 = -0x1800;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x54);
    iVar2 = 0x1800;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar3 + 0x58) + -0x1a00;
  if (*(char *)(iVar3 + 0xd) != '\x0f') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

