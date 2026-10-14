// sub_08065148 at 0x08065148 (thumb)

undefined4 sub_08065148(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08065A40(param_1,0);
    iVar3 = *(int *)(param_1 + 0xd0);
    iVar8 = *(int *)(param_1 + 0x54);
    if ((iVar8 == iVar3 + 0x2800) || (iVar6 = iVar3 + 0xc800, iVar8 == iVar6)) {
      bVar12 = false;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      iVar6 = iVar8;
    }
    else {
      if (iVar8 < iVar3 + 0x7800) {
        iVar6 = iVar3 + 0x2800;
      }
      bVar12 = iVar8 < iVar6;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 100) = (uint)bVar12 * 0x10 + -8;
    }
    *(int *)(param_1 + 0xdc) = iVar6;
    iVar3 = (uint)(*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd4) + 0x8800) * 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (iVar3 + -1) * 8;
    *(byte *)(param_1 + 0x13) = (byte)iVar3 | bVar12;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar9 = *(byte *)(param_1 + 0x13) & 1;
  uVar4 = *(byte *)(param_1 + 0x13) >> 1 & 1;
  iVar11 = *(int *)(param_1 + 0xdc);
  iVar8 = *(int *)(param_1 + 0xd4) + (uVar4 * 2 + -1) * -0x1800 + 0x8800;
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar3 = -*(int *)(param_1 + 100);
  iVar6 = FUN_081288bc(-iVar10,iVar3);
  if (-1 < (int)(((*(int *)(param_1 + 0x54) + ((iVar10 * 2 + iVar3 * iVar6) * (iVar6 + 1) >> 1)) -
                 iVar11) * (uVar9 * 2 + -1))) {
    *(int *)(param_1 + 100) = iVar3;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar3;
  if (iVar3 < 0) {
    uVar5 = 0xfffffe00;
    if (iVar3 < -0x200) {
LAB_080652e8:
      *(undefined4 *)(param_1 + 0x5c) = uVar5;
    }
  }
  else if ((0 < iVar3) && (uVar5 = 0x200, 0x200 < iVar3)) goto LAB_080652e8;
  if (-1 < (int)((uVar9 * 2 + -1) * (*(int *)(param_1 + 0x54) - iVar11))) {
    *(int *)(param_1 + 0x54) = iVar11;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  iVar10 = *(int *)(param_1 + 0x60);
  iVar3 = -*(int *)(param_1 + 0x68);
  iVar6 = FUN_081288bc(-iVar10,iVar3);
  iVar7 = uVar4 * 2;
  if (-1 < ((*(int *)(param_1 + 0x58) + ((iVar10 * 2 + iVar3 * iVar6) * (iVar6 + 1) >> 1)) - iVar8)
           * (iVar7 + -1)) {
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar10;
  iVar10 = iVar10 + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar10;
  if (iVar10 < 0) {
    uVar5 = 0xfffffe00;
    if (-0x201 < iVar10) goto LAB_0806535e;
  }
  else if ((iVar10 < 1) || (uVar5 = 0x200, iVar10 < 0x201)) goto LAB_0806535e;
  *(undefined4 *)(param_1 + 0x60) = uVar5;
LAB_0806535e:
  if (-1 < (iVar7 + -1) * (*(int *)(param_1 + 0x58) - iVar8)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  if ((*(int *)(param_1 + 0x54) == iVar11) &&
     ((*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0x58)) + 0xa000U < 0x3001)) {
    if ((bool)(bVar1 >> 4 & 1) == *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xd0) + 0x7800) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 0xe) = uVar2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

