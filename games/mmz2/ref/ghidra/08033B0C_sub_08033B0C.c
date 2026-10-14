// sub_08033B0C at 0x08033B0C (thumb)

undefined8 sub_08033B0C(int param_1)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  int iVar13;
  byte bVar14;
  uint uVar15;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x17a) != '\x03') {
    uVar5 = 1;
    goto LAB_08033c3e;
  }
  bVar14 = *(byte *)(param_1 + 0x17b);
  uVar4 = (uint)bVar14;
  pcVar12 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar12;
  pbVar10 = (byte *)(param_1 + 0x17d);
  bVar2 = *pbVar10;
  *(char *)(param_1 + 0x17a) = *(char *)(param_1 + 0x176);
  *(char *)(param_1 + 0x176) = '\x03';
  *(byte *)(param_1 + 0x17b) = *(byte *)(param_1 + 0x177);
  *(byte *)(param_1 + 0x177) = bVar14;
  pcVar8 = (char *)(param_1 + 0x178);
  *pcVar12 = *pcVar8;
  *pcVar8 = cVar1;
  pbVar6 = (byte *)(param_1 + 0x179);
  *pbVar10 = *pbVar6;
  *pbVar6 = bVar2;
  bVar14 = *(byte *)(param_1 + 0x2b9);
  uVar15 = (int)*(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0x174) == '\0') {
    cVar3 = *(char *)(param_1 + 0x175);
    if (*(char *)(param_1 + 0x175) == '\0') {
      cVar3 = cVar1;
    }
    if (cVar3 == '\x01') {
      uVar15 = (uint)bVar14;
    }
  }
  uVar9 = (uint)*(byte *)(param_1 + 0xd);
  uVar11 = (uint)*(byte *)(param_1 + 0xe);
  uVar7 = uVar9 + 2;
  if (uVar9 == 0) {
    uVar7 = uVar11;
  }
  bVar2 = (&DAT_08334560)[uVar7];
  iVar13 = uVar4 - 1;
  if (uVar4 != 3) {
    bVar14 = (byte)uVar15;
  }
  *(byte *)(param_1 + 0x2b9) = bVar14;
  if (uVar9 == 0) {
    if (uVar11 == 0) {
      if (*(char *)(param_1 + 0x174) != '\x01') goto LAB_08033c24;
      *pcVar12 = *pcVar8;
      *pcVar8 = '\x01';
      *pbVar10 = *pbVar6;
      *pbVar6 = *(byte *)(param_1 + 0xe);
      iVar13 = uVar4 + 0x1f;
    }
    else {
      if (uVar11 != 1) goto LAB_08033c24;
      iVar13 = (uint)bVar2 + iVar13;
    }
    sub_0801E9FC(param_1,iVar13);
    uVar5 = 3;
  }
  else {
LAB_08033c24:
    if (uVar4 == 3) {
      iVar13 = 1;
      uVar15 = 1;
    }
    sub_0801EA38(param_1,(uint)bVar2,iVar13,uVar15);
    uVar5 = 3;
  }
LAB_08033c3e:
  return CONCAT44(in_lr,uVar5);
}

