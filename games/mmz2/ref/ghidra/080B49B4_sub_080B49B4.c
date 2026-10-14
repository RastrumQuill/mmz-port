// sub_080B49B4 at 0x080B49B4 (thumb)

undefined4 sub_080B49B4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar4 + 0xc)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08345998)[*(byte *)(param_1 + 9)] + 8);
    sub_080B4A48(param_1);
    return in_lr;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
      iVar3 = *(int *)(iVar4 + 0x54) + 0xd00;
      goto LAB_080b4a2c;
    }
    iVar3 = *(int *)(iVar4 + 0x54);
    iVar1 = -0xd00;
  }
  else {
    if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
      iVar3 = *(int *)(iVar4 + 0x54) + -0x1000;
      goto LAB_080b4a2c;
    }
    iVar3 = *(int *)(iVar4 + 0x54);
    iVar1 = 0x1000;
  }
  iVar3 = iVar3 + iVar1;
LAB_080b4a2c:
  *(int *)(param_1 + 0x54) = iVar3;
  uVar2 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(iVar4 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  sub_080128D4(param_1);
  return in_lr;
}

