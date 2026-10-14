// sub_0800EF98 at 0x0800EF98 (thumb)

undefined4 sub_0800EF98(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000fd0 = (ushort)*(undefined4 *)(param_1 + 0x5c) | 0x3f40;
    DAT_02000fd2 = 0x1010;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    DAT_0202e048 = '\0';
    DAT_0202e049 = '\0';
    *(undefined *)(param_1 + 0xe) = 1;
  }
  if (DAT_0202e048 == '\0') {
    if (*(short *)(param_1 + 0x10) == 0) goto LAB_0800f006;
    sVar1 = *(short *)(param_1 + 0x10) + -1;
  }
  else {
    if (0x3f < *(ushort *)(param_1 + 0x10)) goto LAB_0800f006;
    sVar1 = *(ushort *)(param_1 + 0x10) + 1;
  }
  *(short *)(param_1 + 0x10) = sVar1;
LAB_0800f006:
  if (DAT_0202e049 == '\0') {
    if (*(short *)(param_1 + 0x12) == 0) {
      DAT_0202e048 = 0;
      DAT_0202e049 = 0;
      return in_lr;
    }
    sVar1 = *(short *)(param_1 + 0x12) + -1;
  }
  else {
    if (0x3f < *(ushort *)(param_1 + 0x12)) {
      DAT_0202e048 = 0;
      DAT_0202e049 = 0;
      return in_lr;
    }
    sVar1 = *(ushort *)(param_1 + 0x12) + 1;
  }
  *(short *)(param_1 + 0x12) = sVar1;
  DAT_0202e048 = 0;
  DAT_0202e049 = 0;
  return in_lr;
}

