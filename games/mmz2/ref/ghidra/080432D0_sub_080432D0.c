// sub_080432D0 at 0x080432D0 (thumb)

undefined4 sub_080432D0(int param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080127E4(param_1,0xa300);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x12) == '\x1c') {
    uVar1 = ~(uint)(*(byte *)(param_1 + 10) >> 4);
    *(byte *)(param_1 + 0x4c) = (byte)uVar1 & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar1 & 1) << 4);
    if ((uVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
  }
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    sub_08044A4C(param_1);
  }
  return in_lr;
}

