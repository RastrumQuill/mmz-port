// sub_080E52B8 at 0x080E52B8 (thumb)

undefined4 sub_080E52B8(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar4 = *(undefined4 *)(param_1 + 0xb4);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  cVar1 = sub_080E538C(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (((cVar1 == '\x01') || ((*(uint *)(param_1 + 0x8c) & 0x1004) != 0)) || (cVar3 == '\0')) {
    sub_080E4B68(uVar4,param_1,3);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
    sub_080E4C9C(param_1);
  }
  return in_lr;
}

