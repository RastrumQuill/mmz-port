// sub_0803EF7C at 0x0803EF7C (thumb)

undefined4 sub_0803EF7C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,0x12);
    sub_08001EAC(0xaa);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffb80;
    uVar2 = 0xfffffb80;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar2 = 0x480;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (0x18 < *(byte *)(param_1 + 0x12)) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x54) * 0xeb;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x54) = iVar1 >> 8;
  }
  sub_0803D880(param_1);
  if ((byte)(&DAT_082ae3c2)[*(byte *)(param_1 + 0x13)] <= *(byte *)(param_1 + 0x12)) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  sub_0800561C(param_1 + 0x74,
               &DAT_082ade34 + (uint)(byte)(&DAT_082ae3be)[*(byte *)(param_1 + 0x13)] * 0x1c);
  sub_080297C0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

