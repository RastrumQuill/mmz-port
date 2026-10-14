// sub_0803FF70 at 0x0803FF70 (thumb)

undefined4 sub_0803FF70(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x74);
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      *(char *)(param_1 + 0xd0) = '\0';
      *(undefined4 *)(param_1 + 0xc4) = 0;
      uVar2 = sub_0809EA8C(param_1,2);
      *(undefined4 *)(param_1 + 0xc4) = uVar2;
      *(undefined2 *)(param_1 + 200) = 0;
    }
    if (*(int *)(param_1 + 0xcc) == 0) {
      sub_08017700(param_1,*(short *)(param_1 + 200) + 3U | 0xa200);
    }
    iVar3 = sub_080047C0(0x48);
    if (iVar3 != 0) {
      sub_08004768(0x48);
    }
    iVar3 = sub_080047C0(0x72);
    if (iVar3 != 0) {
      sub_08004768(0x72);
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      uVar2 = 0xfffffe00;
    }
    else {
      uVar2 = 0x200;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -8 >> 8);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar4;
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if ((0 < *(int *)(param_1 + 0x5c)) &&
     (iVar3 = sub_08009E14(iVar3 + 0x2000,iVar4 + -0x800), iVar3 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  if ((*(int *)(param_1 + 0x5c) < 0) &&
     (iVar3 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x2000,*(int *)(param_1 + 0x58) + -0x800),
     iVar3 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar3;
  }
  iVar3 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar3;
  }
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    iVar3 = *(int *)(param_1 + 0xcc);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      if (*(byte *)(iVar3 + 0xc) < 2) {
        return in_lr;
      }
      *(int *)(param_1 + 0xcc) = 0;
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined *)(param_1 + 0xf) = 0xff;
  }
  return in_lr;
}

