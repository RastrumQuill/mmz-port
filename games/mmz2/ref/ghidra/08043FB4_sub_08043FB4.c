// sub_08043FB4 at 0x08043FB4 (thumb)

undefined4 sub_08043FB4(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar2 = bVar1 & 1;
    sub_0801260C(param_1);
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
    *(undefined *)(param_1 + 0x24) = 0;
    sub_080127E4(param_1,0xa30b);
    sub_08006E08(param_1 + 0x74,&DAT_0833a630);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x1600;
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\x01') {
    *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x24) + '\x18';
    if (*(char *)(param_1 + 0x12) == '\b') {
      bVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
      sub_08012580(param_1);
      sub_080127D0(param_1);
      *(byte *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      if (bVar1 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      sub_080127E4(param_1,0xa30c);
      sub_08006E08(param_1 + 0x74,&DAT_0833a660);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x1600;
      *(undefined *)(param_1 + 0x12) = 0;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080128D4(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  return in_lr;
}

