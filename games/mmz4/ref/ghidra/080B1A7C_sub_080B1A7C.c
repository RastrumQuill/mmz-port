// sub_080B1A7C at 0x080B1A7C (thumb)

undefined4 sub_080B1A7C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar1 >> 4) & 1;
    if (uVar3 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    sub_0801CF00(param_1,0xc200);
    *(undefined *)(param_1 + 0x13) = *(undefined *)(param_1 + 0x12);
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = sub_080B1D9C(param_1);
  if (cVar2 == '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe);
  if (cVar2 == '\x01') {
    uVar4 = 0xc206;
  }
  else {
    if (cVar2 == '\x02') {
      bVar1 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar1 >> 4) & 1;
      if (uVar3 == 0) {
        bVar1 = bVar1 & 0xef;
      }
      else {
        bVar1 = bVar1 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      goto LAB_080b1b3a;
    }
    if (cVar2 != '\x03') {
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0x12) = *(undefined *)(param_1 + 0x13);
      return in_lr;
    }
    uVar4 = 0xc200;
  }
  sub_0801CF00(param_1,uVar4);
LAB_080b1b3a:
  *(undefined *)(param_1 + 0x12) = 8;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

