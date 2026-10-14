// sub_08063970 at 0x08063970 (thumb)

undefined4 sub_08063970(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 in_lr;
  undefined4 local_28 [3];
  
  uVar7 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xc4) + 0xb4) = 1;
    }
    iVar5 = uVar7 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar5 * 0x200;
    *(int *)(param_1 + 100) = iVar5 * -0x10;
    iVar5 = (uint)(*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xd4) + 0x7000) * 2;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(int *)(param_1 + 0x68) = (iVar5 + -1) * 0x10;
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = (byte)iVar5 | (byte)uVar7;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if ((bVar1 & 1) == 0) {
    iVar5 = *(int *)(param_1 + 0xd0) + 0x2800;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xd0) + 0xc800;
  }
  iVar9 = *(int *)(param_1 + 0xd4) + 0x7000;
  iVar6 = (bVar1 >> 1 & 1) * 2;
  if (*(int *)(param_1 + 100) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      sub_08065A40(param_1,0xc);
      uVar7 = uVar7 + 1 & 1;
      *(char *)(param_1 + 0x4c) = (char)uVar7;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar7 << 4);
      if (uVar7 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    else {
      if ((*(char *)(param_1 + 0x12) != '\x01') || (*(char *)(param_1 + 0x73) != '\x03'))
      goto LAB_08063aa2;
      sub_08065A40(param_1,0);
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    if (-1 < (int)((iVar3 - iVar5) * ((bVar1 & 1) * 2 + -1))) {
      *(int *)(param_1 + 0x54) = iVar5;
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
LAB_08063aa2:
  iVar8 = *(int *)(param_1 + 0x60);
  iVar3 = -*(int *)(param_1 + 0x68);
  iVar2 = FUN_081288bc(-iVar8,iVar3);
  if (-1 < ((*(int *)(param_1 + 0x58) + ((iVar8 * 2 + iVar3 * iVar2) * (iVar2 + 1) >> 1)) - iVar9) *
           (iVar6 + -1)) {
    *(int *)(param_1 + 0x68) = iVar3;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
  iVar8 = iVar8 + *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x60) = iVar8;
  if (iVar8 < 0) {
    uVar4 = 0xfffffe00;
    if (-0x201 < iVar8) goto LAB_08063afa;
  }
  else if ((iVar8 < 1) || (uVar4 = 0x200, iVar8 < 0x201)) goto LAB_08063afa;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
LAB_08063afa:
  if (-1 < (iVar6 + -1) * (*(int *)(param_1 + 0x58) - iVar9)) {
    *(int *)(param_1 + 0x58) = iVar9;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\x02') && (*(int *)(param_1 + 0x54) == iVar5)) &&
     (*(int *)(param_1 + 0x58) == iVar9)) {
    local_28[0] = 0x32;
    local_28[1] = 0x28;
    local_28[2] = 0x1e;
    iVar5 = sub_0806610C(param_1,&stack0xffffffe4);
    *(char *)(param_1 + 0xe0) = (char)local_28[iVar5];
    *(undefined *)(param_1 + 0xd) = 0xd;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

