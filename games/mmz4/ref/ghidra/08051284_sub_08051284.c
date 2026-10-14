// sub_08051284 at 0x08051284 (thumb)

undefined4 sub_08051284(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar4 & 0x7fffffff;
    uVar4 = uVar4 * 2 >> 0x11 & 0x1f;
    sub_08005784(param_1 + 0x74,&DAT_08854948);
    iVar6 = DAT_0202dbf0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar6 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    *(undefined4 *)(param_1 + 100) = 0x18;
    if (uVar4 < 0xc) {
      uVar5 = 0xa000;
    }
    else if (uVar4 < 0x18) {
      uVar5 = 0xf000;
    }
    else {
      uVar5 = 0x14000;
    }
    *(undefined4 *)(param_1 + 0xc0) = uVar5;
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar5 = 0x380;
      }
      else {
        uVar5 = 0x300;
      }
    }
    else {
      uVar5 = 0x280;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    sub_080DC924(param_1,0,0);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  bVar2 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  if ((bVar2 & 1) != 0) {
    if ((bVar2 & 3) == 1) {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(param_1 + 0x54,&DAT_08854bb8,0,(uVar4 * 2 >> 0x11 & 1) << 4);
    }
    else {
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(param_1 + 0x54,&DAT_08854bd4,0,(uVar4 * 2 >> 0x11 & 1) << 4);
    }
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    sVar3 = sub_08007C7C(iVar6 + -0x2300,*(int *)(param_1 + 0x58) + -0x1b00);
    if (sVar3 != 0) {
      local_28 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) + -0x2300;
      local_24 = *(int *)(param_1 + 0x58) + -0x1b00;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854bf0,0,(uVar4 * 2 >> 0x11 & 1) << 4);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854bf0,0,(uVar4 * 2 >> 0x11 & 1) << 4);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854c0c,0,(uVar4 * 2 >> 0x11 & 1) << 4);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854c0c,0,(uVar4 * 2 >> 0x11 & 1) << 4);
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      sub_0801FE64(2,param_1 + 0x54);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    sVar3 = sub_08007C7C(iVar6 + 0x2300,*(int *)(param_1 + 0x58) + -0x1b00);
    if (sVar3 != 0) {
      local_28 = *(int *)(param_1 + 0x54) - (*(int *)(param_1 + 0x5c) + -0x2300);
      local_24 = *(int *)(param_1 + 0x58) + -0x1b00;
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854bf0,0,(uVar4 * 2 >> 0x11 & 1) << 4 | 1);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854bf0,0,(uVar4 * 2 >> 0x11 & 1) << 4 | 1);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854c0c,0,(uVar4 * 2 >> 0x11 & 1) << 4 | 1);
      uVar4 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar4 & 0x7fffffff;
      sub_080D4898(&local_28,&DAT_08854c0c,0,(uVar4 * 2 >> 0x11 & 1) << 4 | 1);
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      sub_0801FE64(2,param_1 + 0x54);
    }
  }
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar6 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar6;
    if (iVar6 < *(int *)(param_1 + 0x60)) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x60);
    }
    if (*(int *)(param_1 + 0xc0) < 0) {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x5c) + -0x18;
    *(int *)(param_1 + 0x5c) = iVar6;
    if (iVar6 < 0x100) {
      *(undefined *)(param_1 + 0xd) = 7;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

