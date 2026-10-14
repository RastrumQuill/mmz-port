// sub_08051D2C at 0x08051D2C (thumb)

undefined4 sub_08051D2C(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    uVar3 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11 & 0x1f;
    if (uVar3 < 5) {
      uVar3 = 0;
    }
    else if (uVar3 < 8) {
      uVar3 = 1;
    }
    else if (uVar3 < 0xd) {
      uVar3 = 2;
    }
    else if (uVar3 < 0x11) {
      uVar3 = 3;
    }
    else if (uVar3 < 0x14) {
      uVar3 = 4;
    }
    else if (uVar3 < 0x19) {
      uVar3 = 5;
    }
    else if (uVar3 < 0x1c) {
      uVar3 = 6;
    }
    else {
      uVar3 = 7;
    }
    if (*(char *)(param_1 + 0xda + uVar3) != '\0') {
      return in_lr;
    }
    sub_0801CF00(param_1,0xa11a);
    sub_08005784(param_1 + 0x74,&DAT_08854ba0);
    uVar4 = sub_08008988(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    if (uVar3 < 3) {
      *(undefined *)(param_1 + 0x4d) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x20;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
      iVar7 = sub_08008748(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_1 + 0xb8));
      *(int *)(param_1 + 0xcc) = iVar7;
      *(int *)(param_1 + 0x58) = iVar7 + -0x2c00;
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar3 * 0x2800 + 0x3000;
    }
    else {
      *(undefined *)(param_1 + 0x4d) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
      *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x2c00;
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (uVar3 - 3) * 0x2c00 + 0x1000;
    }
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar1 = 0x28;
      }
      else {
        uVar1 = 0x32;
      }
    }
    else {
      uVar1 = 0x3c;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    if ((uint)(byte)(&DAT_08854ca0)[*(byte *)(param_1 + 0xd7)] < (uVar5 * 2 >> 0x11 & 0x1f) + 1) {
      uVar1 = 0x19;
    }
    else {
      uVar1 = 0x12;
    }
    *(undefined *)(param_1 + 0xf) = uVar1;
    *(undefined *)(param_1 + 0xe2) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    *(undefined *)(param_1 + 0xe2) = 1;
  }
  if (*(char *)(param_1 + 0xf) != '\x12') goto LAB_08051fd0;
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    iVar7 = *(int *)(param_1 + 0x54);
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    local_20 = iVar7 + 0x1000 + (uVar5 * 2 >> 0x11 & 0x1f) * -0x100;
    if ((*(byte *)(param_1 + 0x13) & 7) == 0) {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_1c = sub_08008534(iVar7,*(undefined4 *)(param_1 + 0x58));
        puVar6 = &DAT_08854bb8;
      }
      else {
        local_1c = sub_08008748(iVar7,*(undefined4 *)(param_1 + 0x58));
        puVar6 = &DAT_08854c7c;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        local_1c = sub_08008534(iVar7,*(undefined4 *)(param_1 + 0x58));
        uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar5 & 0x7fffffff;
        sub_080D4898(&local_20,&DAT_08854bd4,0,(uVar5 * 2 >> 0x11 & 1) << 4);
        goto LAB_08051fb6;
      }
      local_1c = sub_08008748(iVar7,*(undefined4 *)(param_1 + 0x58));
      puVar6 = &DAT_08854c60;
    }
    uVar5 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar5 & 0x7fffffff;
    sub_080D4898(&local_20,puVar6,0,(uVar5 * 2 >> 0x11 & 1) << 4);
  }
LAB_08051fb6:
  if ((*(byte *)(param_1 + 0x13) & 0xf) == 0) {
    sub_080DC924(param_1,3,*(byte *)(param_1 + 0x13) >> 4);
  }
  *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
LAB_08051fd0:
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

