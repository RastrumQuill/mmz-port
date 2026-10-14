// sub_0805437C at 0x0805437C (thumb)

undefined4 sub_0805437C(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
    sub_0800471C(0xd1);
    sub_08017700(param_1,0xb01e);
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      *(undefined *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      *(undefined *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined *)(param_1 + 0x12) = 0x28;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x5c) * -8 >> 8);
  iVar2 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if ((0 < *(int *)(param_1 + 0x5c)) &&
     (iVar2 = sub_08009E14(iVar2 + 0x1c00,iVar3 + -0xc00), iVar2 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  }
  if ((*(int *)(param_1 + 0x5c) < 0) &&
     (iVar2 = sub_08009F80(*(int *)(param_1 + 0x54) + -0x1c00,*(int *)(param_1 + 0x58) + -0xc00),
     iVar2 != 0)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
  }
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + -0x400);
  if (iVar2 != 0) {
    *(undefined *)(param_1 + 0x13) = 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
  }
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  if (*(short *)(param_1 + 0x12) == 0x100) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x400;
    *(undefined *)(param_1 + 200) = 0;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0xff;
  }
  return in_lr;
}

