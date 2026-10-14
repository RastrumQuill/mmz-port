// sub_0806C9C4 at 0x0806C9C4 (thumb)

undefined4 sub_0806C9C4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0x1901);
    sub_08007390(param_1 + 0x74,&DAT_08362d58);
    if (*(byte *)(param_1 + 0xbc) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    uVar3 = *(byte *)(param_1 + 0xbc) & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    puVar4 = (uint *)(*(int *)(param_1 + 0x2c) + 0xb4);
    *puVar4 = *puVar4 | 2;
    *(undefined *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0'))))
  {
    *(undefined *)(param_1 + 0xd) = 6;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

