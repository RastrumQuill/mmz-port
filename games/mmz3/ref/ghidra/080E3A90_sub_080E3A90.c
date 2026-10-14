// sub_080E3A90 at 0x080E3A90 (thumb)

undefined4 sub_080E3A90(int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0xb4);
  iVar2 = (uint)*(byte *)(iVar6 + 0x147) * 8;
  iVar4 = *(int *)(&DAT_0835b034 + iVar2);
  iVar5 = *(int *)(&DAT_0835b038 + iVar2);
  piVar3 = (int *)(param_1 + 0xc0);
  iVar2 = *piVar3;
  *piVar3 = iVar2 + -0x60;
  if (iVar2 + -0x60 < 0xc01) {
    *piVar3 = 0xc00;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836e24c)[*(byte *)(param_1 + 9)] + 8);
  }
  sVar1 = (short)iVar4;
  if (*(char *)(param_1 + 0xba) == '\0') {
    iVar2 = *(int *)(iVar6 + 0x54) + (int)sVar1;
    iVar4 = *(int *)(iVar6 + 0x58) + (iVar4 >> 0x10) + -0x200;
  }
  else if (*(char *)(param_1 + 0xba) == '\x01') {
    iVar2 = *(int *)(iVar6 + 0x54) + (int)sVar1;
    iVar4 = *(int *)(iVar6 + 0x58);
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x54) + (int)sVar1;
    iVar4 = *(int *)(iVar6 + 0x58) - (iVar5 >> 0x10);
  }
  iVar7 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58);
  iVar6 = 0x2800 - *(int *)(param_1 + 0xc0);
  iVar2 = FUN_080fe2f8(iVar6 * (iVar2 - iVar7),0x2800);
  iVar4 = FUN_080fe2f8(iVar6 * (iVar4 - iVar5),0x2800);
  *(int *)(param_1 + 0x54) = iVar7 + iVar2;
  *(int *)(param_1 + 0x58) = iVar5 + iVar4;
  return in_lr;
}

