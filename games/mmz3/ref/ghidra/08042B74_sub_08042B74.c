// sub_08042B74 at 0x08042B74 (thumb)

undefined4 sub_08042B74(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_08017700(param_1,0x2b01);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_08007390(param_1 + 0x74,
                   &DAT_0835e8c0 +
                   ((uint)*(byte *)(param_1 + 0x10) * 7 +
                   (uint)(byte)(&DAT_0835ea34)[*(char *)(param_1 + 0x71)]) * 0x18);
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x10) == '\x01') {
      sub_0800471C(0x55);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xc4);
      if (*(char *)(param_1 + 0xc0) == '\0') {
        *(undefined *)(param_1 + 0x4c) = 0;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
        iVar2 = *(int *)(param_1 + 0x54);
        iVar5 = 0x6000;
      }
      else {
        *(undefined *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
        iVar2 = *(int *)(param_1 + 0x54);
        iVar5 = -0x6000;
      }
      *(int *)(param_1 + 0x54) = iVar2 + iVar5;
      uVar3 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0xb4) = uVar3;
    }
    else {
      sub_0800471C(0x55);
    }
    *(undefined *)(param_1 + 0xbb) = *(undefined *)(param_1 + 0xba);
    sub_08007390(param_1 + 0x74,&DAT_0835e8d8 + (uint)*(byte *)(param_1 + 0x10) * 0xa8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + 0x5400;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffeb0;
    sub_08017700(param_1,0x2b00);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar4 & 0x7fffffff;
    iVar2 = sub_080FE4D8(uVar4 * 2 >> 0x11,0x1800);
    sub_080BB990(*(int *)(param_1 + 0x54) + iVar2 + -0xc00,*(int *)(param_1 + 0xb4),
                 *(undefined *)(param_1 + 0x22));
  }
  iVar2 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar2;
  iVar5 = *(int *)(param_1 + 0xb4);
  if (iVar2 < iVar5) {
    *(int *)(param_1 + 0x58) = iVar5;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  return in_lr;
}

