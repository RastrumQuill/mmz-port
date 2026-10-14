// sub_080C9A48 at 0x080C9A48 (thumb)

undefined4 sub_080C9A48(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb4) = 0;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_08862d48,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar1 = *(byte *)(param_1 + 10);
  bVar3 = bVar1 & 0xfe;
  *(byte *)(param_1 + 10) = bVar3;
  if (*(byte *)(param_1 + 0xb7) == 0) {
    bVar1 = bVar1 & 0xee;
  }
  else {
    bVar1 = bVar3 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  uVar2 = *(byte *)(param_1 + 0xb7) & 1;
  *(undefined *)(param_1 + 0x4c) = (char)uVar2;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar2 << 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined *)(param_1 + 0x12) = 0xc4;
    *(undefined *)(param_1 + 0xb5) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    sub_0801CF00(param_1,0x7509);
  }
  else if (*(char *)(param_1 + 0x11) == '\x03') {
    sub_0801CF00(param_1,0x7509);
    bVar1 = *(byte *)(param_1 + 10);
    uVar2 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar2 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(undefined *)(param_1 + 0x4c) = (char)uVar2;
    *pbVar4 = *pbVar4 & 0xef | (byte)(uVar2 << 4);
  }
  else {
    sub_0801CF00(param_1,0x750a);
  }
  sub_080C9F08(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0x200;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(char *)(param_1 + 0xb7) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
  }
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

