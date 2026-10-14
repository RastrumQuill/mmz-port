// sub_08062550 at 0x08062550 (thumb)

undefined4 sub_08062550(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  iVar3 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xd60d);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(char *)(param_1 + 0x13) == '\0') && (*(char *)(param_1 + 0x73) == '\x03')) {
      sub_08017700(param_1,0xd60d);
      *(undefined *)(param_1 + 0x13) = 1;
    }
    if ((*(uint *)(iVar2 + 0xbc) & 2) != 0) {
      sub_08017700(param_1,0xd60e);
      *(undefined *)(param_1 + 0x12) = 1;
    }
  }
  else if ((*(uint *)(iVar2 + 0xbc) & 2) == 0) {
    sub_08017700(param_1,0xd60f);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_080177F4(param_1);
  uVar1 = *(uint *)(iVar2 + 0xbc);
  if ((uVar1 & 1) != 0) {
    *(uint *)(iVar2 + 0xbc) = uVar1 & 0xfffffffe;
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = *(int *)(iVar3 + 0x54);
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x54) = iVar2 + (short)(&DAT_080fe64c)[*(ushort *)(iVar3 + 0xb8) >> 8] * 0xb;
  iVar2 = *(int *)(iVar3 + 0x58);
  *(int *)(param_1 + 0x58) = iVar2;
  *(int *)(param_1 + 0x58) =
       iVar2 + *(short *)((int)&DAT_080fe64c +
                         ((uint)((((int)((uint)*(ushort *)(iVar3 + 0xb8) << 0x10) >> 0x18) + 0x40) *
                                0x1000000) >> 0x17)) * -0xb;
  return in_lr;
}

