// sub_0803DC50 at 0x0803DC50 (thumb)

undefined8 sub_0803DC50(int param_1)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0xb4);
  bVar2 = *(byte *)(iVar8 + 10) >> 4;
  uVar4 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(undefined *)(param_1 + 0x4c) = (char)uVar4;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | (byte)(uVar4 << 4);
  *(undefined *)(param_1 + 0x25) = 0x10;
  uVar1 = CONCAT11(*(undefined *)(iVar8 + 0x1e),*(undefined *)(iVar8 + 0x70));
  if (uVar1 == 0xb01) {
    iVar7 = 0x1200;
    if (*(char *)(iVar8 + 0x71) == '\0') {
      iVar7 = 0x1100;
    }
    iVar5 = 0x1600;
  }
  else if (uVar1 < 0xb02) {
    if (uVar1 < 0x903) {
      if (uVar1 < 0x900) {
        if (uVar1 != 0x801) goto LAB_0803ddfa;
        iVar7 = 0x1200;
        if (*(char *)(iVar8 + 0x71) < '\x02') {
          iVar7 = 0x1100;
        }
        iVar5 = 0x1500;
      }
      else {
        iVar5 = *(char *)(iVar8 + 0x71) * 4;
        iVar7 = *(int *)(&DAT_08851dc8 + iVar5);
        iVar5 = *(int *)(&DAT_08851df4 + iVar5);
      }
    }
    else {
      if (uVar1 != 0xa01) goto LAB_0803ddfa;
      iVar7 = 0x1700;
      iVar5 = 0xf00;
    }
  }
  else if (uVar1 == 0xc01) {
    bVar2 = *(byte *)(param_1 + 10);
    uVar4 = ~(uint)(bVar2 >> 4) & 1;
    if (uVar4 == 0) {
      bVar2 = bVar2 & 0xef;
    }
    else {
      bVar2 = bVar2 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x4c) = (char)uVar4;
    *pbVar6 = *pbVar6 & 0xef | (byte)(uVar4 << 4);
    iVar7 = 0xf00;
    if (*(char *)(iVar8 + 0x71) < '\x02') {
      iVar7 = 0xe00;
    }
    iVar5 = 0x1200;
  }
  else if (uVar1 < 0xc02) {
    if ((0xb05 < uVar1) || (uVar1 < 0xb03)) {
LAB_0803ddfa:
      uVar3 = 1;
      goto LAB_0803de2a;
    }
    if (*(char *)(iVar8 + 0x71) == '\0') {
      iVar7 = 0x1200;
      iVar5 = 0x1700;
    }
    else {
      iVar7 = 0x1300;
      iVar5 = 0x1400;
    }
  }
  else {
    if (uVar1 != 0xd01) goto LAB_0803ddfa;
    *(undefined *)(param_1 + 0x25) = 0x11;
    iVar7 = 0xe00;
    if (*(char *)(iVar8 + 0x71) < '\x02') {
      iVar7 = 0xd00;
    }
    iVar5 = 0x1800;
  }
  iVar7 = iVar7 + *(int *)(param_1 + 100);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar7 = *(int *)(iVar8 + 0x54) - iVar7;
  }
  else {
    iVar7 = *(int *)(iVar8 + 0x54) + iVar7;
  }
  *(int *)(param_1 + 0x54) = iVar7;
  *(int *)(param_1 + 0x58) = *(int *)(iVar8 + 0x58) - (iVar5 + *(int *)(param_1 + 0x68));
  uVar3 = 0;
LAB_0803de2a:
  return CONCAT44(in_lr,uVar3);
}

