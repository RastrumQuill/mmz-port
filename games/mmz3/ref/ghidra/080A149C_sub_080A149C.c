// sub_080A149C at 0x080A149C (thumb)

undefined4 sub_080A149C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined4 in_lr;
  uint local_24;
  uint local_20;
  
  iVar4 = *(int *)(param_1 + 0xbc);
  if (0 < iVar4) {
    *(int *)(param_1 + 0xbc) = iVar4 + -1;
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      sub_080177F4(param_1);
      *(short *)(param_1 + 0x50) = (short)*(undefined4 *)(param_1 + 100);
      *(short *)(param_1 + 0x52) = (short)*(undefined4 *)(param_1 + 100);
      if (0 < *(int *)(param_1 + 100)) {
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -0x20;
      }
      if (0x20 < *(int *)(param_1 + 100)) {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    cVar2 = *(char *)(param_1 + 0xb5);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe10;
      *(undefined4 *)(param_1 + 0x60) = 0x7c;
      sub_08017700(param_1,0xa906);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
LAB_080a161e:
      sub_08007390(param_1 + 0x74,&DAT_08367aa4);
    }
    else {
      if (cVar2 == '\x01') {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffe10;
        *(undefined4 *)(param_1 + 0x60) = 0xffffff84;
        sub_08017700(param_1,0xa906);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
LAB_080a160c:
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        goto LAB_080a161e;
      }
      if (cVar2 == '\x02') {
        *(undefined4 *)(param_1 + 0x5c) = 0x1f0;
        *(undefined4 *)(param_1 + 0x60) = 0xffffff84;
        sub_08017700(param_1,0xa906);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        goto LAB_080a161e;
      }
      if (cVar2 == '\x03') {
        *(undefined4 *)(param_1 + 0x5c) = 0x1f0;
        *(undefined4 *)(param_1 + 0x60) = 0x7c;
        sub_08017700(param_1,0xa906);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        goto LAB_080a160c;
      }
      if (cVar2 == '\x04') {
        *(undefined4 *)(param_1 + 0x5c) = 0xffffff84;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe10;
        sub_08017700(param_1,0xa90a);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
        sub_08007390(param_1 + 0x74,&DAT_08367abc);
      }
      else if (cVar2 == '\x05') {
        *(undefined4 *)(param_1 + 0x5c) = 0x7c;
        *(undefined4 *)(param_1 + 0x60) = 0xfffffe10;
        sub_08017700(param_1,0xa90a);
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        sub_08007390(param_1 + 0x74,&DAT_08367abc);
      }
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar8 = false;
  iVar7 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar7;
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  bVar1 = *(byte *)(param_1 + 0xb5);
  if (bVar1 < 4) {
    if (*(int *)(param_1 + 0x60) < 0) {
      local_24 = (uint)(iVar4 < DAT_020302c4 + -0x5000);
      iVar4 = sub_08009E14(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar7 = sub_08009F80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((iVar4 == 0) || (*(int *)(param_1 + 0x5c) < 1)) {
        if ((iVar7 == 0) || (-1 < *(int *)(param_1 + 0x5c))) {
          if (local_24 == 0) goto LAB_080a18c0;
          *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_24;
          *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
          goto LAB_080a18be;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
        iVar4 = -*(int *)(param_1 + 0x5c);
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar4;
        iVar4 = -*(int *)(param_1 + 0x5c);
      }
    }
    else {
      iVar4 = sub_08009B28(iVar7);
      iVar7 = sub_08009E14(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      iVar5 = sub_08009F80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      if ((iVar7 == 0) || (*(int *)(param_1 + 0x5c) < 1)) {
        if ((iVar5 == 0) || (-1 < *(int *)(param_1 + 0x5c))) {
          if (iVar4 == 0) goto LAB_080a18c0;
          *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
          *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
          goto LAB_080a18be;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
        iVar4 = -*(int *)(param_1 + 0x5c);
      }
      else {
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar7;
        iVar4 = -*(int *)(param_1 + 0x5c);
      }
    }
LAB_080a18bc:
    *(int *)(param_1 + 0x5c) = iVar4;
  }
  else if (*(int *)(param_1 + 0x5c) < 1) {
    local_24 = sub_08009B28(iVar7);
    local_20 = (uint)(*(int *)(param_1 + 0x58) < DAT_020302c4 + -0x5000);
    iVar4 = sub_08009F80(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((local_20 == 0) || (-1 < *(int *)(param_1 + 0x60))) {
      if ((iVar4 == 0) || (*(int *)(param_1 + 0x60) < 1)) goto LAB_080a18ac;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
    else {
      *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_20;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
  }
  else {
    local_24 = sub_08009B28(iVar7);
    local_20 = (uint)(*(int *)(param_1 + 0x58) < DAT_020302c4 + -0x5000);
    iVar4 = sub_08009E14(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if ((local_20 == 0) || (-1 < *(int *)(param_1 + 0x60))) {
      if ((iVar4 == 0) || (*(int *)(param_1 + 0x60) < 1)) {
LAB_080a18ac:
        if (local_24 == 0) goto LAB_080a18c0;
        *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + local_24;
        iVar4 = -*(int *)(param_1 + 0x5c);
        goto LAB_080a18bc;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
    else {
      *(uint *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + local_20;
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
  }
LAB_080a18be:
  bVar8 = true;
LAB_080a18c0:
  if (bVar8) {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    bVar3 = *(byte *)(param_1 + 10);
    uVar6 = (bVar3 >> 4 ^ 1) & 1;
    if (uVar6 == 0) {
      bVar3 = bVar3 & 0xef;
    }
    else {
      bVar3 = bVar3 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar6;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
  }
  if (1 < *(byte *)(param_1 + 0x12)) {
    *(undefined4 *)(param_1 + 100) = 0xff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  bVar3 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar3;
  if ((bVar3 & 7) == 0) {
    sub_080BD968(param_1,param_1 + 0x54,bVar1,*(byte *)(param_1 + 10) >> 4 & 1);
  }
  sub_080177F4(param_1);
  return in_lr;
}

