// sub_0805011C at 0x0805011C (thumb)

undefined4 sub_0805011C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa412);
    sub_080032EC(0x86);
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffb80;
    uVar2 = 0xfffffb80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x480;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (0x18 < *(byte *)(param_1 + 0x12)) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    iVar1 = *(int *)(param_1 + 0x5c) * 0xeb;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar1 >> 8;
  }
  sub_0804EBC4(param_1);
  if ((byte)(&DAT_0833c136)[*(byte *)(param_1 + 0x13)] <= *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_08006E08(param_1 + 0x74,
               &DAT_0833b87c + (uint)(byte)(&DAT_0833c132)[*(byte *)(param_1 + 0x13)] * 0x30);
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

