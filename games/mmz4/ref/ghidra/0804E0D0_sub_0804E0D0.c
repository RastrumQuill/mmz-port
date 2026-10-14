// sub_0804E0D0 at 0x0804E0D0 (thumb)

undefined4 sub_0804E0D0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  sub_0801CFF0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    cVar1 = sub_08041354(iVar5,param_1 + 0x54);
    if (cVar1 != '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 0xc);
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (*(int *)(iVar5 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x180;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      uVar4 = 0xfffffa00;
    }
    else {
      if (*(int *)(iVar5 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
      }
      else {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0;
      uVar4 = 0xfffffd00;
    }
    *(undefined4 *)(param_1 + 0x60) = uVar4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_088545cc,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x804e515;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0803AA58(iVar5);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0xd) = 1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar2 = sub_0804E540(*(undefined4 *)(param_1 + 0x54));
  if (uVar2 == 0) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1004) == 0) {
      return in_lr;
    }
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  }
  iVar3 = *(int *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (uVar2 < 2) {
    if (iVar3 < 1) {
      sub_0803F03C(iVar5,param_1,0,0,0x400,0x80,2,2);
      sub_0803F03C(iVar5,param_1,0,0,0x400,0x50,2,2);
      uVar4 = 0xb0;
    }
    else {
      sub_0803F03C(iVar5,param_1,0,0,0x400,0,2,2);
      sub_0803F03C(iVar5,param_1,0,0,0x400,0xd0,2,2);
      uVar4 = 0x30;
    }
  }
  else if (uVar2 < 4) {
    sub_0803F03C(iVar5,param_1,0,0,0x400,0x10,2,2);
    sub_0803F03C(iVar5,param_1,0,0,0x400,0xe0,2,2);
    uVar4 = 0x40;
  }
  else if (uVar2 < 8) {
    sub_0803F03C(iVar5,param_1,0,0,0x400,8,2,2);
    sub_0803F03C(iVar5,param_1,0,0,0x400,0xd8,2,2);
    uVar4 = 0x38;
  }
  else if (uVar2 < 10) {
    sub_0803F03C(iVar5,param_1,0,0,0x400,0xf0,2,2);
    sub_0803F03C(iVar5,param_1,0,0,0x400,0xc0,2,2);
    uVar4 = 0x20;
  }
  else {
    if (0xd < uVar2) {
      sub_0803F03C(iVar5,param_1,0,0,0x400,0,2,2);
      sub_0803F03C(iVar5,param_1,0,0,0x400,0xd0,2,2);
      sub_0803F03C(iVar5,param_1,0,0,0x400,0x30,2,2);
      goto LAB_0804e480;
    }
    sub_0803F03C(iVar5,param_1,0,0,0x400,0xf8,2,2);
    sub_0803F03C(iVar5,param_1,0,0,0x400,200,2,2);
    uVar4 = 0x28;
  }
  sub_0803F03C(iVar5,param_1,0,0,0x400,uVar4,2,2);
LAB_0804e480:
  sub_080D0894(2,param_1 + 0x54);
  sub_08002B10(0x35);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
  sub_0804E4B8(param_1);
  return in_lr;
}

