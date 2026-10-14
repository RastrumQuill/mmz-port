// sub_08049CE0 at 0x08049CE0 (thumb)

undefined4 sub_08049CE0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) | 1;
        sub_08017700(param_1,0xa725);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      sub_080177F4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    sub_08007390(param_1 + 0x74,&DAT_0835f244);
    *(undefined *)(param_1 + 0xbe) = 0;
    sub_08017700(param_1,0xa723);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x71) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined *)(param_1 + 0x12) = 1;
    *(byte *)(param_1 + 0xc1) = *(byte *)(param_1 + 0xc1) & 0xfe;
    sub_0800471C(0x5d);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = -0x2400;
    }
    else {
      iVar2 = 0x2400;
    }
    sub_080A0360(param_1,*(int *)(param_1 + 0x54) + iVar2,*(int *)(param_1 + 0x58) + -0x3700,
                 *(byte *)(param_1 + 10) >> 4 & 1);
    sub_08007390(param_1 + 0x74,&DAT_0835f2a4);
  }
  if (*(char *)(param_1 + 0xbe) != '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}

