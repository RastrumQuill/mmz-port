// sub_080B0728 at 0x080B0728 (thumb)

undefined4 sub_080B0728(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  int local_2c;
  int local_28;
  int local_24;
  
  if ((*(byte *)(param_1 + 0xe) < 10) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined *)(param_1 + 0xe) = 10;
  }
  if (((*(byte *)(DAT_0202f5c0 + 10) & 1) == 0) && (*(byte *)(param_1 + 0xe) < 0x14)) {
    *(undefined *)(param_1 + 0xe) = 0x14;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_08017700(param_1,*(undefined2 *)(param_1 + 0xbc));
    *(undefined *)(param_1 + 0x12) = 0x24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
LAB_080b09ea:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    break;
  case 2:
    iVar5 = 0;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    local_2c = *(int *)(*(int *)(param_1 + 0x28) + 100);
    cVar1 = *(char *)(param_1 + 0x11);
    if (cVar1 == '\0') {
      local_2c = local_2c + -0x4400;
      *(undefined4 *)(param_1 + 0x5c) = 0xffffffed;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffe9;
      iVar5 = 2;
    }
    else if (cVar1 == '\x01') {
      local_2c = local_2c + -0x7400;
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffffd;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffde;
      iVar5 = 3;
    }
    else if (cVar1 == '\x02') {
      local_2c = local_2c + -0xa400;
      *(undefined4 *)(param_1 + 0x5c) = 0x23;
      *(undefined4 *)(param_1 + 0x60) = 0xffffffd3;
      iVar5 = 4;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) << 8;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) << 8;
    sub_080AFAC8(param_1,&local_2c);
    sub_08017700(param_1,*(short *)(param_1 + 0xbc) + 1);
    sub_0800471C(0x134);
    if ((*(byte *)(DAT_0202f5c0 + 10) & 1) != 0) {
      iVar2 = sub_080C96BC(*(undefined4 *)(param_1 + 0x28));
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x2c) = param_1;
      }
      DAT_0200241e = DAT_0200241e & 0xe1 | 0x1f;
      DAT_03002ac0 = 0xffff;
      DAT_02002416 = 0;
      DAT_0200241a = 0;
    }
    iVar2 = DAT_020302c4;
    local_28 = DAT_020302c4 + 0x3fff;
    *(int *)(param_1 + 100) = local_2c;
    *(int *)(param_1 + 0x68) = local_28;
    local_24 = *(int *)(param_1 + 0x60);
    if ((*(byte *)(DAT_0202f5c0 + 10) & 1) != 0) {
      DAT_0200241a = (ushort)((uint)((*(int *)(param_1 + 0x68) + 0x5000) - iVar2) >> 8) & 0xff |
                     (ushort)((((*(int *)(param_1 + 0x58) + 0x5000) - iVar2) + local_24 >> 8) << 8);
      DAT_02002410 = DAT_02002410 & 0xbfff;
    }
    iVar6 = ((*(int *)(param_1 + 0x54) + -0x77ff) - DAT_020302c0) + *(int *)(param_1 + 0x5c);
    iVar2 = (iVar6 >> 8) + -0x10;
    DAT_0203060c = 0;
    iVar6 = iVar6 - ((*(int *)(param_1 + 100) + -0x77ff) - DAT_020302c0);
    DAT_02030624 = iVar6 + iVar5 * 0x100;
    iVar6 = iVar6 + iVar5 * -0x100;
    iVar5 = (*(int *)(param_1 + 0x68) + 0x5000) - DAT_020302c4 >> 8;
    iVar7 = ((*(int *)(param_1 + 0x58) + 0x5000) - DAT_020302c4) + local_24 >> 8;
    DAT_02030604 = iVar2;
    DAT_02030608 = iVar6;
    DAT_02030614 = iVar2;
    DAT_0203061c = iVar2;
    uVar3 = FUN_080fe2f8(DAT_02030624,iVar5 - iVar7);
    DAT_02030624 = uVar3;
    uVar4 = FUN_080fe2f8(iVar6,iVar5 - iVar7);
    DAT_02030608 = uVar4;
    DAT_02030610 = iVar7;
    DAT_02030618 = iVar5;
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0x74) = iVar2;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x78) = iVar7;
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x7c) = DAT_02030600;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x80) = iVar5;
      iVar5 = *(int *)(param_1 + 0x2c);
      *(undefined4 *)(iVar5 + 0x5c) = uVar3;
      *(undefined4 *)(iVar5 + 100) = uVar4;
    }
    *(undefined *)(param_1 + 0x12) = 0x14;
    goto LAB_080b09ea;
  case 3:
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    if ((*(byte *)(DAT_0202f5c0 + 10) & 1) != 0) {
      DAT_03002ac0 = 0xffff;
      if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
        DAT_02002410 = DAT_02002410 | 0x4000;
        DAT_0200241d = 1;
      }
      else {
        DAT_02002410 = DAT_02002410 & 0xbfff;
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(int *)(*(int *)(param_1 + 0x2c) + 0x74) = DAT_0203061c;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x78) = DAT_02030610;
      *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x7c) = DAT_02030600;
      *(int *)(*(int *)(param_1 + 0x2c) + 0x80) = DAT_02030618;
      iVar5 = *(int *)(param_1 + 0x2c);
      *(int *)(iVar5 + 0x5c) = DAT_02030624;
      *(int *)(iVar5 + 100) = DAT_02030608;
    }
    sub_080177F4(param_1);
    if ((*(char *)(param_1 + 0x12) == '\0') ||
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      *(undefined *)(param_1 + 0xe) = 10;
    }
    break;
  case 10:
  case 0x14:
    DAT_02002410 = DAT_02002410 & 0xbfff;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

