// sub_0803E3B0 at 0x0803E3B0 (thumb)

undefined4 sub_0803E3B0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08001EAC(0xa9);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 8;
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((byte)(&DAT_082ae381)[*(byte *)(param_1 + 0x13)] <= bVar1) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
  }
  sub_0800561C(param_1 + 0x74,
               &DAT_082ade34 + (uint)(byte)(&DAT_082ae371)[*(byte *)(param_1 + 0x13)] * 0x1c);
  sub_08081C8C(uVar2,(&DAT_082ae379)[*(byte *)(param_1 + 0x13)]);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  return in_lr;
}

