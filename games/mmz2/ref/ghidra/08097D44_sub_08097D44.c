// sub_08097D44 at 0x08097D44 (thumb)

undefined4 sub_08097D44(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0x13) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar1;
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10);
    uVar3 = ~(uint)(bVar2 >> 5) & 1;
    if (uVar3 == 0) {
      bVar2 = bVar2 & 0xdf;
    }
    else {
      bVar2 = bVar2 | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(char *)(param_1 + 0x4d) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar3 << 5);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080128D4(param_1);
  return in_lr;
}

