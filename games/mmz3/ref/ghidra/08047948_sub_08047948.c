// sub_08047948 at 0x08047948 (thumb)

undefined4 sub_08047948(int param_1)

{
  undefined uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 0xa4);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
    *(undefined2 *)(param_1 + 0xc4) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  puVar2 = (ushort *)(param_1 + 0xc4);
  *puVar2 = *puVar2 + 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0xbc);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xbc) + (short)(&DAT_080fe64c)[*(byte *)puVar2] * 0x50;
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xc0) +
       *(short *)((int)&DAT_080fe64c + (((uint)*puVar2 << 0x19) >> 0x17)) * -0x10;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  uVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),0x60);
  *(undefined *)(param_1 + 0x12) = uVar1;
  if (((0xf < (int)*(short *)(param_1 + 0xca) - (int)*(short *)(param_1 + 0xa4)) ||
      ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) != 0)) || (*(short *)(DAT_0202f5c0 + 0xa4) == 0)) {
    *(undefined *)(param_1 + 0xd) = 10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    sub_0800471C(0x118);
    sub_0809F4C4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0);
  }
  sub_080041E4(*(undefined *)(param_1 + 0xc6));
  sub_080177F4(param_1);
  return in_lr;
}

