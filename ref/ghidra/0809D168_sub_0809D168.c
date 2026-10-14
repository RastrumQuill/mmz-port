// sub_0809D168 at 0x0809D168 (thumb)

undefined4 sub_0809D168(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0809C930(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x12) = 0x10;
    bVar2 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x44) = bVar2;
    if (bVar2 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    bVar2 = *(byte *)(param_1 + 0x95);
    if (bVar2 < 0x20) {
      bVar2 = 0;
    }
    else {
      bVar2 = bVar2 - 0x20;
    }
    *(byte *)(param_1 + 0x95) = bVar2;
  }
  sub_0809C980(param_1);
  bVar2 = (byte)*(ushort *)(param_1 + 0x90) & 0x80;
  if ((*(ushort *)(param_1 + 0x90) & 0x80) == 0) {
    *(byte *)(param_1 + 0xd) = bVar2;
    *(byte *)(param_1 + 0xe) = bVar2;
  }
  return in_lr;
}

