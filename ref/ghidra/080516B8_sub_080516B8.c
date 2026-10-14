// sub_080516B8 at 0x080516B8 (thumb)

undefined4 sub_080516B8(int param_1)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb8);
  iVar5 = *(int *)(param_1 + 0xbc);
  if (*(char *)(param_1 + 0x11) == '\x01') {
    pbVar9 = (byte *)(param_1 + 0xc6);
    bVar1 = *pbVar9;
    *pbVar9 = bVar1 - 1;
    pcVar7 = (char *)(param_1 + 199);
    if ((byte)(bVar1 - 1) == 0) {
      *pbVar9 = 0x3e;
      *pcVar7 = -*pcVar7;
    }
    iVar8 = ((uint)*(byte *)(param_1 + 0xc5) * 0xd2 + 0x60) * (int)*pcVar7;
    if (iVar8 < 0) {
      iVar8 = iVar8 + 0xff;
    }
    iVar8 = iVar8 >> 8;
    if (*pbVar9 < 0x1f) {
      iVar6 = *pbVar9 + 0xe1;
LAB_08051724:
      iVar6 = iVar6 * iVar8;
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      iVar8 = iVar6 >> 8;
    }
    else if (0x2f < *pbVar9) {
      iVar6 = (0x3e - (uint)*pbVar9) * 8;
      goto LAB_08051724;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar8;
  }
  iVar6 = *(int *)(param_1 + 0x58);
  iVar8 = iVar6 + 0x110;
  *(int *)(param_1 + 0x58) = iVar8;
  if (*(char *)(param_1 + 0x11) != '\x01') {
    iVar8 = iVar6 + 0x1a0;
  }
  *(int *)(param_1 + 0x58) = iVar8;
  piVar11 = (int *)(param_1 + 0xb8);
  *piVar11 = *piVar11 + *(int *)(param_1 + 0x54);
  piVar12 = (int *)(param_1 + 0xbc);
  iVar8 = *piVar12 + *(int *)(param_1 + 0x58);
  *piVar12 = iVar8;
  iVar8 = sub_080C88E8((int)(short)((short)*piVar11 - (short)*(undefined4 *)(param_1 + 0x4c)),
                       (int)(short)((short)iVar8 - (short)*(undefined4 *)(param_1 + 0x50)));
  uVar10 = (uint)(iVar8 << 0x10) >> 0x18;
  if (0x3f < uVar10) {
    uVar10 = uVar10 + 1 & 0xff;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    uVar10 = 0x40;
  }
  sVar2 = (&DAT_080c8e24)[uVar10];
  *piVar11 = *(int *)(param_1 + 0x4c) + (short)(&DAT_080c8e24)[uVar10 + 0x40] * 0x14;
  *piVar12 = *(int *)(param_1 + 0x50) + sVar2 * 0x14;
  iVar8 = uVar10 - 0x40;
  *(char *)(param_1 + 0x1f) = (char)iVar8;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    iVar4 = (*piVar11 - iVar4) * 100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar4 >> 8;
    iVar4 = (*piVar12 - iVar5) * 0xf0;
  }
  else {
    iVar4 = (*piVar11 - iVar4) * 100;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar4 >> 8;
    iVar4 = (*piVar12 - iVar5) * 100;
  }
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x58) = iVar4 >> 8;
  if (*(char *)(param_1 + 0x11) == '\0') {
    return in_lr;
  }
  if (*(byte *)(param_1 + 0xc4) == uVar10) {
    if (iVar8 < 0) {
      iVar8 = 0x40 - uVar10;
    }
    if (iVar8 < 10) {
      cVar3 = *(char *)(param_1 + 0x13) + '\x01';
      goto LAB_08051852;
    }
  }
  cVar3 = '\0';
LAB_08051852:
  *(char *)(param_1 + 0x13) = cVar3;
  if (*(char *)(param_1 + 0x13) == '\x03') {
    *piVar11 = *(int *)(param_1 + 0x4c);
    *piVar12 = *(int *)(param_1 + 0x50) + 0x1400;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  *(byte *)(param_1 + 0xc4) = (byte)uVar10;
  return in_lr;
}

