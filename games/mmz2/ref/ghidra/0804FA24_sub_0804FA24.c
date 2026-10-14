// sub_0804FA24 at 0x0804FA24 (thumb)

undefined4 sub_0804FA24(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = *(undefined4 *)(param_1 + 200);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080032EC(0x85);
    *(undefined *)(param_1 + 0xcd) = 4;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa404);
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  bVar1 = *(char *)(param_1 + 0x12) + 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((byte)(&DAT_0833c0f7)[*(byte *)(param_1 + 0x13)] <= bVar1) {
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) + 1;
  }
  sub_08006E08(param_1 + 0x74,
               &DAT_0833b87c + (uint)(byte)(&DAT_0833c0e7)[*(byte *)(param_1 + 0x13)] * 0x30);
  sub_0809F624(uVar2,(&DAT_0833c0ef)[*(byte *)(param_1 + 0x13)]);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0x15;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

