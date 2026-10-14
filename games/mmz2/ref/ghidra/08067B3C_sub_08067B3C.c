// sub_08067B3C at 0x08067B3C (thumb)

undefined4 sub_08067B3C(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) >> 4;
    uVar4 = bVar1 & 1;
    sub_08012580(param_1);
    bVar3 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar3 | 1;
    if ((bVar1 & 1) == 0) {
      bVar3 = bVar3 & 0xef | 1;
    }
    else {
      bVar3 = bVar3 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = (char)uVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
    sub_080127E4(param_1,0x601);
    *(undefined *)(param_1 + 0xb7) = 8;
    *(undefined *)(param_1 + 0xc3) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar2 = sub_08068800(param_1,*(undefined *)(param_1 + 0xb7));
  if (cVar2 != '\0') {
    *(undefined *)(param_1 + 0xd) = 0xff;
  }
  return in_lr;
}

