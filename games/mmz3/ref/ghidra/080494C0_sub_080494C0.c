// sub_080494C0 at 0x080494C0 (thumb)

undefined4 sub_080494C0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0835efbc);
    if (*(char *)(param_1 + 0xbd) != '\0') {
      *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      uVar3 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
      if (uVar3 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
    *(char *)(param_1 + 0xbd) = '\0';
    *(undefined *)(param_1 + 0x12) = 8;
    sub_08017700(param_1,0xa706);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (((cVar2 == '\0') && ((*(uint *)(DAT_0202f5c0 + 0x8c) & 0x200) == 0)) &&
     (*(short *)(DAT_0202f5c0 + 0xa4) != 0)) {
    sub_08048EFC(param_1);
  }
  return in_lr;
}

