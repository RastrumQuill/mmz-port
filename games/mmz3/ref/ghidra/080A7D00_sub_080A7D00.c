// sub_080A7D00 at 0x080A7D00 (thumb)

undefined4 sub_080A7D00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  sub_080177F4();
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar3 = -0x1c00;
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x54);
    iVar3 = 0x1c00;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == -1) || (*(byte *)(iVar4 + 0xd) < 6)) || (8 < *(byte *)(iVar4 + 0xd))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

