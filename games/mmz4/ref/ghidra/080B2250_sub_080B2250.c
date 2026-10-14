// sub_080B2250 at 0x080B2250 (thumb)

undefined4 sub_080B2250(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,*(byte *)(param_1 + 0xb5) + 0xc501);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080B27D8(param_1);
  cVar1 = sub_080B2764(param_1);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xd) = *(undefined *)(param_1 + 0xf);
    *(undefined *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xb7) == '\x01') {
      bVar2 = *(byte *)(param_1 + 10);
      uVar3 = ~(uint)(bVar2 >> 4) & 1;
      if (uVar3 == 0) {
        bVar2 = bVar2 & 0xef;
      }
      else {
        bVar2 = bVar2 | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(char *)(param_1 + 0x4c) = (char)uVar3;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      *(char *)(param_1 + 0xb7) = '\0';
    }
  }
  return in_lr;
}

