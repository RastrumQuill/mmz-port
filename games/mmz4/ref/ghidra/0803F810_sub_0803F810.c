// sub_0803F810 at 0x0803F810 (thumb)

undefined4 sub_0803F810(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x2c) + 0xfa) == '\x02') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0803F9B8(param_1);
    return in_lr;
  }
  puVar6 = (uint *)(param_1 + 0x8c);
  if ((*puVar6 & 0x1000) != 0) {
    sub_08002B10(0x2b);
  }
  if ((*puVar6 & 4) != 0) {
    *puVar6 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xd) == '\x03') {
    iVar5 = *(int *)(param_1 + 0x5c) >> 2;
    iVar3 = *(int *)(param_1 + 0x54);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54);
    iVar5 = *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar3 + iVar5;
  uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  uVar7 = uVar4 & 0x7fffffff;
  DAT_0202dc38 = uVar7;
  uVar4 = sub_08128A9C(uVar4 * 2 >> 0x11,3);
  *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + (1 - (uVar4 & 0xff)) * 0x100;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0x800e);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 4;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    sub_0801CF00(param_1,0x800f);
    sub_0801CFF0(param_1);
    *(undefined *)(param_1 + 0x12) = 4;
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      sub_0803F9B8(param_1);
      return in_lr;
    }
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) {
      return in_lr;
    }
    uVar4 = uVar7 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    if ((uVar4 * 2 >> 0x11 & 1) == 0) {
      sub_0801CF00(param_1,0x8011);
    }
    else {
      sub_0801CF00(param_1,0x8010);
    }
    sub_0801CFF0(param_1);
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}

