// sub_0805E4EC at 0x0805E4EC (thumb)

undefined4 sub_0805E4EC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 200) +
          (*(int *)(param_1 + 0xcc) - *(int *)(param_1 + 200)) / 2 + 0x1000;
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xaa04);
    iVar5 = DAT_0202e130;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    bVar1 = *(int *)(param_1 + 0x58) < iVar6;
    *(bool *)(param_1 + 0xbe) = bVar1;
    if (bVar1) {
      uVar4 = 0x80;
    }
    else {
      uVar4 = 0xffffff80;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (*(char *)(param_1 + 0xbe) == '\0') {
      iVar5 = *(int *)(param_1 + 0x60) + -8;
      *(int *)(param_1 + 0x60) = iVar5;
      iVar5 = *(int *)(param_1 + 0x58) + iVar5;
      *(int *)(param_1 + 0x58) = iVar5;
      if ((bVar2 < 0x41) && (iVar6 <= iVar5)) goto LAB_0805e628;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x60) + 8;
      *(int *)(param_1 + 0x60) = iVar5;
      iVar5 = *(int *)(param_1 + 0x58) + iVar5;
      *(int *)(param_1 + 0x58) = iVar5;
      if ((bVar2 < 0x41) && (iVar5 <= iVar6)) goto LAB_0805e628;
    }
    *(byte *)(param_1 + 0x12) = bVar2 >> 2;
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      iVar6 = *(int *)(param_1 + 0x60) + 0x20;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x60) + -0x20;
    }
    *(int *)(param_1 + 0x60) = iVar6;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
LAB_0805e628:
  if ((*(char *)(param_1 + 0xbe) != '\0') && (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0x58)))
  {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

