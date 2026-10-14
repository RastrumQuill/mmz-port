// sub_08097DB0 at 0x08097DB0 (thumb)

undefined4 sub_08097DB0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  iVar6 = *(int *)(DAT_0202e130 + 0x58) - *(int *)(param_1 + 0x58);
  if (iVar6 < 0) {
    iVar6 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202e130 + 0x58);
  }
  if (iVar6 < 0x3001) {
    iVar7 = *(int *)(DAT_0202e130 + 0x58) + 0x2000;
    iVar6 = *(int *)(param_1 + 0x58);
    if (0 < *(int *)(DAT_0202e130 + 0x58) - iVar6) {
      iVar7 = *(int *)(DAT_0202e130 + 0x58) + -0x2000;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar5 = iVar6 - iVar7;
    if (iVar5 < 0) {
      iVar5 = iVar7 - iVar6;
    }
    if (0x200 < iVar5) {
      if (iVar7 < iVar6) {
        uVar4 = 0xffffff00;
      }
      else {
        uVar4 = 0x100;
      }
      *(undefined4 *)(param_1 + 0x60) = uVar4;
    }
    bVar1 = 0 < *(int *)(param_1 + 0x60);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4d) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar1 << 5;
    cVar3 = sub_080977C8(param_1,*(undefined4 *)(param_1 + 0x60));
    if ((cVar3 == '\0') && (*(int *)(param_1 + 0x60) != 0)) {
      sub_080978A0(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

