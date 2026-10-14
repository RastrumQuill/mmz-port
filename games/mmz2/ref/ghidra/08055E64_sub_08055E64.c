// sub_08055E64 at 0x08055E64 (thumb)

undefined4 sub_08055E64(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar2 = *(byte *)(param_1 + 10) >> 4;
    uVar3 = bVar2 & 1;
    sub_0801260C(param_1);
    sub_080127D0(param_1);
    cVar1 = (char)uVar3;
    *(char *)(param_1 + 0x4c) = cVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 8;
    *(undefined *)(param_1 + 0x24) = 0;
    sub_080127E4(param_1,0xa62a);
    *(char *)(param_1 + 0xd8) = cVar1 * '\x02' + -1;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    sub_08006E08(param_1 + 0x74,&DAT_0833c2e8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

