// sub_0801753C at 0x0801753C (thumb)

undefined8 sub_0801753C(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) != '\x03') {
    uVar5 = 1;
    goto LAB_0801762e;
  }
  bVar1 = *(byte *)(param_1 + 0xc2);
  uVar4 = (uint)bVar1;
  pcVar8 = (char *)(param_1 + 0xc3);
  cVar2 = *pcVar8;
  *(char *)(param_1 + 0xc1) = *(char *)(param_1 + 0xbe);
  *(char *)(param_1 + 0xbe) = '\x03';
  *(byte *)(param_1 + 0xc2) = *(byte *)(param_1 + 0xbf);
  *(byte *)(param_1 + 0xbf) = bVar1;
  pcVar6 = (char *)(param_1 + 0xc0);
  *pcVar8 = *pcVar6;
  *pcVar6 = cVar2;
  cVar3 = *(char *)(param_1 + 0xbd);
  uVar12 = (int)*(char *)(param_1 + 0x72);
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (cVar3 == '\0') {
      cVar3 = cVar2;
    }
    if (cVar3 == '\x01') {
      uVar12 = (uint)*(byte *)(param_1 + 0x121);
    }
  }
  uVar9 = (uint)*(byte *)(param_1 + 0xd);
  uVar10 = (uint)*(byte *)(param_1 + 0xe);
  uVar7 = uVar9 + 2;
  if (uVar9 == 0) {
    uVar7 = uVar10;
  }
  bVar1 = (&DAT_082a80f4)[uVar7];
  iVar11 = uVar4 - 1;
  uVar7 = (uint)*(byte *)(param_1 + 0x121);
  if (uVar4 != 3) {
    uVar7 = uVar12;
  }
  *(char *)(param_1 + 0x121) = (char)uVar7;
  if (uVar9 == 0) {
    if (uVar10 == 0) {
      if (*(char *)(param_1 + 0xbc) != '\x01') goto LAB_08017614;
      *pcVar8 = *pcVar6;
      *pcVar6 = '\x01';
      iVar11 = uVar4 + 0x2f;
    }
    else {
      if (uVar10 != 1) goto LAB_08017614;
      iVar11 = (uint)bVar1 + iVar11;
    }
    sub_08018BE8(param_1,iVar11);
    uVar5 = 3;
  }
  else {
LAB_08017614:
    if (uVar4 == 3) {
      iVar11 = 1;
      uVar12 = 1;
    }
    sub_08018C20(param_1,(uint)bVar1,iVar11,uVar12);
    uVar5 = 3;
  }
LAB_0801762e:
  return CONCAT44(in_lr,uVar5);
}

