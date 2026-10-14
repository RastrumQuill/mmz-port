// sub_080DFF00 at 0x080DFF00 (thumb)

undefined4 sub_080DFF00(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 in_lr;
  int local_24;
  int local_20;
  
  bVar8 = false;
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    sub_080177F4(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) {
      sub_0800471C(0x147);
      sub_08017700(param_1,0xb403);
      *(undefined *)(param_1 + 0xd) = 0;
    }
    goto LAB_080e0156;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080e0156;
    sub_080177F4(param_1);
    bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 9);
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 2) != 0) {
        sub_08017700(param_1,0xb404);
        *(undefined *)(param_1 + 0x25) = 0x1c;
        *(undefined *)(param_1 + 0xd) = 2;
      }
      goto LAB_080e0156;
    }
    sub_0800471C(0x103);
    sub_08017700(param_1,0xb401);
  }
  else {
    if (bVar1 != 2) goto LAB_080e0156;
    if (*(int *)(param_1 + 0x68) < 0x4000) {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 0x40;
    }
    if (*(int *)(param_1 + 0x5c) < 0x1e0) {
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    }
    iVar6 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar6;
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 7) == 0) {
      uVar7 = DAT_0202f608 * 0x343fd + 0x269ec3;
      local_24 = iVar6 + ((uVar7 * 2 >> 0x11 & 0xfff) - 0x2800);
      uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x58) + ((uVar7 * 2 >> 0x11 & 0xfff) - 0x1000);
      uVar7 = (uVar7 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar7 & 0x7fffffff;
      sub_080B27F0(local_24,local_20,uVar7 * 2 >> 0x11 & 3);
    }
    uVar7 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar7 < 0x2401) {
      if (*(char *)(param_1 + 0x13) == '\0') {
        *(undefined *)(param_1 + 0x13) = 1;
        sub_0800393C(&DAT_085d8708,(DAT_0202fb78 - 0x200) * 0x20 + 0x10000);
        sub_08003E14(&DAT_085d8714,(DAT_0202f978 - 4) * 0x20 + 0x200);
      }
    }
    else {
      *(undefined *)(param_1 + 0x13) = 0;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(param_1 + 0x54) < 0x18c001) {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      }
      else {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
      }
      iVar4 = *(int *)(param_1 + 0x54);
      iVar6 = 0x19b000;
    }
    else {
      if ((*(int *)(param_1 + 0x54) < 0x297001) && (0x1e6000 < *(int *)(param_1 + 0x54))) {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
      }
      else {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
      }
      iVar4 = *(int *)(param_1 + 0x54);
      iVar6 = 0x29e000;
    }
    if (iVar4 <= iVar6) goto LAB_080e0156;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080e0156:
  if (*(int *)(param_1 + 0x60) != 0) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  }
  uVar7 = 0;
  do {
    uVar5 = (uint)(short)uVar7;
    if ((((*(int *)(param_1 + 100) >> (uVar5 & 0xff) & 1U) == 0) &&
        ((int)(&DAT_0836e1c8)[uVar5] <= *(int *)(param_1 + 0x54))) &&
       (1 < *(short *)(DAT_020305f8 + 10))) {
      local_20 = *(int *)(param_1 + 0x58) + 0x1800;
      local_24 = *(int *)(param_1 + 0x54);
      sub_080B2214(&local_24,0);
      local_20 = *(int *)(param_1 + 0x58) + -0x1800;
      sub_080B2214(&local_24,1);
      bVar8 = true;
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 1 << (uVar5 & 0xff);
      sub_0800471C(0x13e);
    }
    uVar5 = uVar7 * 0x10000 + 0x10000;
    uVar7 = uVar5 >> 0x10;
  } while ((int)uVar5 >> 0x10 < 4);
  if ((bVar8) && (*(int *)(param_1 + 0x60) == 0)) {
    sub_0800471C(0x6a);
    *(undefined4 *)(param_1 + 0x60) = 600;
  }
  bVar8 = false;
  uVar7 = 0;
  do {
    local_24 = *(int *)(param_1 + 0x54) + (short)uVar7 * 0x1000 + -0x1800;
    local_20 = *(int *)(param_1 + 0x58) + -0x1800;
    sVar2 = sub_0800D7B4(local_24);
    if (sVar2 != 0) {
      sub_080E0388(local_24,local_20);
      *(undefined4 *)(param_1 + 0x5c) = 0xc0;
      sub_0801ACF8(2,param_1 + 0x54);
      bVar8 = true;
    }
    uVar5 = (int)(short)uVar7 + 1;
    uVar7 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 4);
  uVar7 = 0;
  do {
    local_24 = *(int *)(param_1 + 0x54) + (short)uVar7 * 0x1000 + -0x1800;
    local_20 = *(int *)(param_1 + 0x58) + 0x1800;
    sVar2 = sub_0800D7B4(local_24);
    if (sVar2 != 0) {
      sub_080E0388(local_24,local_20);
      *(undefined4 *)(param_1 + 0x5c) = 0xc0;
      sub_0801ACF8(2,param_1 + 0x54);
      bVar8 = true;
    }
    uVar5 = (int)(short)uVar7 + 1;
    uVar7 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 4);
  uVar7 = 1;
  do {
    local_24 = *(int *)(param_1 + 0x54) + 0x1800;
    local_20 = *(int *)(param_1 + 0x58) + (short)uVar7 * 0x1000 + -0x1800;
    sVar2 = sub_0800D7B4(local_24);
    if (sVar2 != 0) {
      sub_080E0388(local_24,local_20);
      *(undefined4 *)(param_1 + 0x5c) = 0xc0;
      sub_0801ACF8(2,param_1 + 0x54);
      bVar8 = true;
    }
    uVar5 = (int)(short)uVar7 + 1;
    uVar7 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 3);
  if (bVar8) {
    uVar7 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (uVar7 < 0x2401) {
      sub_0800471C(0x140);
    }
    else {
      sub_0800471C(0x13f);
    }
  }
  *(int *)(param_1 + 0x58) = DAT_0202e48c + *(int *)(param_1 + 0x68);
  if (*(char *)(param_1 + 0xd) == '\x02') {
    if (bVar8) {
      if (*(int *)(param_1 + 0x60) != 0) {
        return in_lr;
      }
      uVar3 = 0x69;
    }
    else {
      if (*(int *)(param_1 + 0x60) != 0) {
        return in_lr;
      }
      if (*(int *)(param_1 + 0x54) <= *(int *)(DAT_0202f5c0 + 0x54)) {
        return in_lr;
      }
      uVar3 = 0x68;
    }
    sub_0800471C(uVar3);
    *(undefined4 *)(param_1 + 0x60) = 600;
  }
  return in_lr;
}

