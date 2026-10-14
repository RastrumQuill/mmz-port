// sub_08044678 at 0x08044678 (thumb)

undefined4 sub_08044678(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar2 = bVar1 & 1;
    sub_08012580(param_1);
    sub_080127D0(param_1);
    *(char *)(param_1 + 0x4c) = (char)uVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar2 << 4);
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    sub_080127E4(param_1,0xa305);
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_08006E08(param_1 + 0x74,&DAT_0833a750);
    if (*(short *)(param_1 + 0xe0) != 0) {
      sub_08003338();
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(int *)(param_1 + 0xb8) == 0) {
    sub_08044A4C(param_1);
  }
  return in_lr;
}

