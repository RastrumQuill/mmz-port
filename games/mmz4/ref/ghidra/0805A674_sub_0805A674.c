// sub_0805A674 at 0x0805A674 (thumb)

undefined4 sub_0805A674(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 10);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      goto LAB_0805a7f8;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    iVar7 = *(int *)(param_1 + 200);
    if ((iVar7 != 0) && (*(char *)(param_1 + 0xbf) == '\0')) {
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfc;
      *(undefined4 *)(iVar7 + 0x8c) = 0;
      *(undefined4 *)(iVar7 + 0x90) = 0;
      *(undefined *)(iVar7 + 0x94) = 0;
      *(byte *)(iVar7 + 10) = *(byte *)(iVar7 + 10) & 0xfb;
      *(undefined4 *)(iVar7 + 0xc) = 3;
      *(undefined4 *)(iVar7 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar7 + 9)] + 0xc);
      *(int *)(param_1 + 200) = 0;
      *(char *)(param_1 + 0xbf) = -1;
    }
    sub_08005784(param_1 + 0x74,&DAT_088553a8);
    if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != -0x5cff) {
      sub_0801CF00(param_1);
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    uVar5 = (bVar2 >> 4 & 1) + 1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar5;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar5 << 4);
    if (uVar5 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar6 = uVar5 * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar6 * 0x240;
    iVar7 = iVar6 * -0x20;
    *(int *)(param_1 + 100) = iVar7;
    *(int *)(param_1 + 0x68) = iVar6;
    iVar4 = FUN_081288bc(iVar6 * -0x240,iVar7);
    *(int *)(param_1 + 0x60) = iVar6 * ((iVar6 * 0x480 + iVar7 * iVar4) * (iVar4 + 1) >> 1);
    if (uVar5 == 0) {
      iVar7 = sub_0805C370(param_1);
      iVar4 = 0xd000;
    }
    else {
      iVar7 = sub_0805C370(param_1);
      iVar4 = 0x2000;
    }
    *(int *)(param_1 + 0xc0) = iVar7 + iVar4;
    cVar3 = FUN_081288bc(-*(int *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 100));
    *(char *)(param_1 + 0x12) = cVar3 + '\x01';
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar7 = *(int *)(param_1 + 0x68) * (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x54));
  if (iVar7 - *(int *)(param_1 + 0x60) != 0 && *(int *)(param_1 + 0x60) <= iVar7) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    return in_lr;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0805a7f8:
  sub_0801CFF0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  return in_lr;
}

