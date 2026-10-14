// sub_080E56B8 at 0x080E56B8 (thumb)

undefined4 sub_080E56B8(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  if (1 < *(byte *)(iVar5 + 0xc)) {
    *(undefined *)(param_1 + 0x12) = 0;
  }
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar3 = (uint)*(byte *)(iVar5 + 10);
  if ((*(byte *)(iVar5 + 10) & 0x40) == 0) {
    if (((uVar3 & 0x30) >> 4 & 1) == 0) {
      iVar6 = *(int *)(iVar5 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar6;
    if (((*(byte *)(iVar5 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar6 = *(int *)(iVar5 + 0x58) + *(int *)(param_1 + 0x78);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x58) - *(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x58) = iVar6;
  }
  else {
    iVar7 = (int)*(short *)((int)&DAT_08128c10 +
                           ((0xff - (uint)*(byte *)(iVar5 + 0x24)) * 0x1000000 >> 0x17));
    iVar6 = (int)*(short *)((int)&DAT_08128c10 +
                           ((0x3f - (uint)*(byte *)(iVar5 + 0x24)) * 0x1000000 >> 0x17));
    if (((uVar3 & 0x30) >> 4 & 1) == 0) {
      iVar4 = *(int *)(param_1 + 0x74);
    }
    else {
      iVar4 = -*(int *)(param_1 + 0x74);
    }
    if (((uVar3 & 0x30) >> 4 & 2) == 0) {
      iVar2 = *(int *)(param_1 + 0x78);
    }
    else {
      iVar2 = -*(int *)(param_1 + 0x78);
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (iVar4 * iVar6 >> 8) + (iVar2 * iVar7 >> 8);
    *(int *)(param_1 + 0x58) =
         (*(int *)(iVar5 + 0x58) - (iVar4 * iVar7 >> 8)) + (iVar2 * iVar6 >> 8);
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') || (2 < *(byte *)(iVar5 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

