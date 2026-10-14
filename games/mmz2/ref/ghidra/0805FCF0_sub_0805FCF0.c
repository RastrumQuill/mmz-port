// sub_0805FCF0 at 0x0805FCF0 (thumb)

undefined4 sub_0805FCF0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xab01);
    sub_080032EC(0x81);
    *(int *)(param_1 + 0x58) = *(int *)(DAT_0202e130 + 0x58) + -0x2000;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  sub_08006E08(param_1 + 0x74,
               &DAT_0833d13c + (uint)(byte)(&DAT_0833d37c)[*(char *)(param_1 + 0x71)] * 0x18);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (-0x800 < iVar1) {
      *(int *)(param_1 + 0x5c) = iVar1 + -0x20;
    }
    if (*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0) + -0x5000) {
      *(undefined *)(param_1 + 0xd) = 8;
      *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
    }
  }
  else {
    if (iVar1 < 0x800) {
      *(int *)(param_1 + 0x5c) = iVar1 + 0x20;
    }
    if (*(int *)(param_1 + 0xc4) + 0x5000 < *(int *)(param_1 + 0x54)) {
      *(undefined *)(param_1 + 0xd) = 8;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

