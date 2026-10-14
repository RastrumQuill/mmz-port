// sub_08056854 at 0x08056854 (thumb)

undefined4 sub_08056854(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
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
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    sub_080127E4(param_1,0xa631);
    *(uint *)(param_1 + 0x5c) = ((uint)*(byte *)(param_1 + 0x13) * -2 + 1) * 0x280;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc80;
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
    sub_08006E08(param_1 + 0x74,&DAT_0833c288);
    *(undefined *)(param_1 + 0xd0) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

