// sub_08088B8C at 0x08088B8C (thumb)

undefined4 sub_08088B8C(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)))
  {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08088D4C(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    iVar4 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar4;
    sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar4 + 0x1b00);
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar4 + -0x1b00;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      uVar3 = 0xfffffff8;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar3 = 8;
    }
    *(undefined4 *)(param_1 + 100) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0;
LAB_08088c7e:
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    return in_lr;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar1 + 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    puVar5 = (ushort *)(param_1 + 0x50);
    *puVar5 = *puVar5 + 8;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x52) + 8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    if (*puVar5 < 0x100) {
      return in_lr;
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    goto LAB_08088c7e;
  }
  if (bVar1 != 2) {
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 0x3f) == 0) {
    sub_080032EC(0x3c);
  }
  iVar6 = *(int *)(param_1 + 0x58);
  iVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),iVar6);
  iVar4 = iVar4 + -0x1b00;
  *(int *)(param_1 + 0x58) = iVar4;
  if (iVar6 < iVar4) {
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (0x2ff < iVar4) goto LAB_08088cf0;
    iVar4 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  else {
    if (iVar6 <= iVar4) goto LAB_08088cf0;
    iVar4 = *(int *)(param_1 + 0x5c);
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (iVar4 < 0x101) goto LAB_08088cf0;
    iVar4 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 0x5c) = iVar4;
LAB_08088cf0:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar4 = *(int *)(param_1 + 0x5c) >> 8;
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) - (char)iVar4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (*(int *)(param_1 + 0xc0) <= *(int *)(param_1 + 0x54)) {
      return in_lr;
    }
  }
  else if (*(int *)(param_1 + 0x54) <= *(int *)(param_1 + 0xc0)) {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

