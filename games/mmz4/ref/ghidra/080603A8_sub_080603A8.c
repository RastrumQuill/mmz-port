// sub_080603A8 at 0x080603A8 (thumb)

undefined4 sub_080603A8(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xd0) = 0xb;
    sub_0801CF00(param_1,0xa50b);
    iVar4 = DAT_0202dbf0;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    sub_08002B10(0x118);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined *)(param_1 + 0xf) = 1;
    }
  }
  else {
    if (*(char *)(param_1 + 0xf) == '\x01') {
      iVar4 = sub_080DA918(param_1 + 0x54,0,0xc1);
      *(int *)(param_1 + 0xc0) = iVar4;
      if (iVar4 == 0) {
        *(undefined *)(param_1 + 0xd) = 0xd;
        *(undefined *)(param_1 + 0xe) = 0;
        return in_lr;
      }
      *(undefined *)(iVar4 + 0x74) = 0xff;
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x75) = 0;
      *(undefined *)(*(int *)(param_1 + 0xc0) + 0x76) = 0;
      iVar4 = *(int *)(param_1 + 0xc0);
      *(int *)(iVar4 + 0x58) = *(int *)(param_1 + 0x58) + -0x1d00;
      *(int *)(iVar4 + 0x68) = *(int *)(param_1 + 0x58) + -0x1d00;
      *(int *)(iVar4 + 0x60) = *(int *)(param_1 + 0x58) + -0x1c00;
      *(int *)(iVar4 + 0x80) = *(int *)(param_1 + 0x58) + -0x1c00;
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar6 = *(int *)(param_1 + 0xc0);
        iVar7 = -0xf000;
        *(int *)(iVar6 + 0x54) = *(int *)(param_1 + 0x54) + -0xf000;
        iVar4 = *(int *)(param_1 + 0x54);
        iVar5 = -0x1800;
      }
      else {
        iVar6 = *(int *)(param_1 + 0xc0);
        iVar7 = 0x1800;
        *(int *)(iVar6 + 0x54) = *(int *)(param_1 + 0x54) + 0x1800;
        iVar4 = *(int *)(param_1 + 0x54);
        iVar5 = 0xf000;
      }
      *(int *)(iVar6 + 100) = iVar4 + iVar5;
      *(int *)(iVar6 + 0x5c) = *(int *)(param_1 + 0x54) + iVar5;
      *(int *)(iVar6 + 0x7c) = *(int *)(param_1 + 0x54) + iVar7;
      *(undefined *)(param_1 + 0x12) = 0x40;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    iVar4 = *(int *)(param_1 + 0xc0);
    if (iVar4 != 0) {
      iVar5 = (uint)*(byte *)(DAT_0202dbf0 + 0x174) * 8;
      iVar6 = *(int *)(&DAT_0884fe30 + iVar5);
      iVar5 = *(int *)(&DAT_0884fe34 + iVar5);
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        *(int *)(iVar4 + 0x54) = *(int *)(param_1 + 0x54) + -0xf000;
        *(int *)(iVar4 + 0x7c) = *(int *)(param_1 + 0x54) + -0xf000;
      }
      else {
        *(int *)(iVar4 + 100) = *(int *)(param_1 + 0x54) + 0xf000;
        *(int *)(iVar4 + 0x5c) = *(int *)(param_1 + 0x54) + 0xf000;
      }
      if ((DAT_0202e918 & 8) == 0) {
        iVar6 = *(int *)(DAT_0202dbf0 + 0x58) + (iVar6 >> 0x10);
        if ((*(int *)(iVar4 + 0x58) < iVar6 + (iVar5 >> 0x11)) &&
           (iVar6 - (iVar5 >> 0x11) < *(int *)(iVar4 + 0x58))) {
          if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
            iVar5 = *(int *)(DAT_0202dbf0 + 0x54);
            if (iVar5 < *(int *)(iVar4 + 100)) {
              *(int *)(iVar4 + 0x54) = iVar5;
              *(int *)(iVar4 + 0x7c) = iVar5;
            }
          }
          else {
            iVar5 = *(int *)(DAT_0202dbf0 + 0x54);
            if (*(int *)(iVar4 + 0x54) < iVar5) {
              *(int *)(iVar4 + 100) = iVar5;
              *(int *)(iVar4 + 0x5c) = iVar5;
            }
          }
        }
      }
      bVar2 = *(byte *)(param_1 + 0x12);
      if ((bVar2 & 1) == 0) {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x78) = 0xff;
        *(byte *)(*(int *)(param_1 + 0xc0) + 0x79) = bVar2 & 1;
      }
      else if (DAT_0202e910 == 0xb) {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x39;
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x79) = 6;
      }
      else {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x78) = 0x35;
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x79) = 10;
      }
      if ((*(char *)(param_1 + 0x12) == '\x06') && (*(int *)(param_1 + 0xc0) != 0)) {
        *(undefined *)(*(int *)(param_1 + 0xc0) + 0x77) = 1;
        *(undefined4 *)(param_1 + 0xc0) = 0;
      }
    }
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      *(undefined *)(param_1 + 0xd) = 0xc;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

