// sub_080692A4 at 0x080692A4 (thumb)

undefined4 sub_080692A4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b0cb0);
    sub_080020A4(param_1 + 0x2c,*(undefined4 *)(iVar3 + 0x34),param_1 + 0x4c);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x40;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 1;
    *(undefined *)(param_1 + 0x1f) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0x13) = 0x59;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x12) = cVar1 + '\x01';
  if ((byte)(cVar1 + 1U) == *(byte *)(param_1 + 0x13) >> 4) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) - 3;
  }
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
  if ((*(uint *)(iVar3 + 200) & 8) != 0) {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

