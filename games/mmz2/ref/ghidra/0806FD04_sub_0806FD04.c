// sub_0806FD04 at 0x0806FD04 (thumb)

undefined4 sub_0806FD04(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x1806);
    cVar1 = -1;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      cVar1 = '\x01';
    }
    *(char *)(param_1 + 0xb7) = cVar1;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
    *(int *)(param_1 + 0x5c) = (int)*(char *)(param_1 + 0xb7) << 8;
    *(undefined *)(param_1 + 0xb5) = 3;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x71) == '\0') {
    local_30 = *(int *)(param_1 + 0x54) + *(char *)(param_1 + 0xb7) * -0x1200;
    local_2c = *(int *)(param_1 + 0x58) + -0x1600;
    sub_080AC60C(3,&local_30);
  }
  cVar1 = sub_080708D0(param_1,*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x800);
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x5c) + -0x1400;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c) + 0x1400;
  }
  iVar3 = *(int *)(param_1 + 0x54) + iVar3;
  local_20 = *(int *)(param_1 + 0x58) + -0x800;
  sVar2 = sub_08008CFC(iVar3,local_20);
  if (sVar2 != 0) {
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar3 = sub_08009774(iVar3,local_20);
      iVar5 = *(int *)(param_1 + 0x54) + -0x1400;
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        goto LAB_0806fe28;
      }
      iVar3 = sub_08009684(iVar3,local_20);
      iVar5 = *(int *)(param_1 + 0x54) + 0x1400;
    }
    *(int *)(param_1 + 0x5c) = iVar3 - iVar5;
  }
LAB_0806fe28:
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x5c) + -0x1400;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5c) + 0x1400;
  }
  iVar3 = *(int *)(param_1 + 0x54) + iVar3;
  local_1c = *(int *)(param_1 + 0x58) + 0x800;
  sVar2 = sub_08008CFC(iVar3,local_1c);
  if (sVar2 == 0) {
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(int *)(param_1 + 0x5c) < 0) {
      iVar3 = sub_08009684(iVar3,local_1c);
      iVar5 = *(int *)(param_1 + 0x54) + -0x1400;
    }
    else {
      if (*(int *)(param_1 + 0x5c) < 1) {
        *(undefined4 *)(param_1 + 0x5c) = 0;
        goto LAB_0806fea4;
      }
      iVar3 = sub_08009774(iVar3,local_1c);
      iVar5 = *(int *)(param_1 + 0x54) + 0x1400;
    }
    *(int *)(param_1 + 0x5c) = iVar3 - iVar5;
  }
LAB_0806fea4:
  uVar4 = (uint)*(byte *)(param_1 + 0xbe);
  if (uVar4 != 0) {
    local_28 = *(int *)(*(int *)(param_1 + 0x2c) + 0x54);
    local_24 = *(int *)(*(int *)(param_1 + 0x2c) + 0x58) + uVar4 * -0x1000;
    if (((local_28 - (*(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c))) + 0x2400U < 0x4801) &&
       (uVar4 * 0x1000 + (local_24 - (*(int *)(param_1 + 0x58) + -0x1000)) + 0xf00 <=
        (uVar4 * 0x1000 + 0xf00) * 2)) {
      *(int *)(param_1 + 0x54) = local_28 + *(char *)(param_1 + 0xb7) * -0x2400;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(int *)(param_1 + 100) - iVar3) + 0x4000U < 0x8001) {
    *(int *)(param_1 + 0x54) = iVar3;
  }
  else {
    sub_080705DC(param_1);
  }
  return in_lr;
}

