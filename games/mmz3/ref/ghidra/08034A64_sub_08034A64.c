// sub_08034A64 at 0x08034A64 (thumb)

undefined4 sub_08034A64(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080B322C(param_1 + 0x54,0,*(ushort *)(iVar3 + 0x18) >> 4 & 1);
    sub_080177CC(param_1,0xa10c,4,4);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  cVar1 = sub_080FE4D8(*(undefined *)(param_1 + 0x12),3);
  if (cVar1 == '\0') {
    sub_080B322C(param_1 + 0x54,1,*(ushort *)(iVar3 + 0x18) >> 4 & 1);
  }
  if ((*(ushort *)(iVar3 + 0x18) & 0x20) == 0) {
    if ((*(ushort *)(iVar3 + 0x18) & 0x10) == 0) goto LAB_08034b24;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x300;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x300;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_08034b24:
  sub_080177F4(param_1);
  return in_lr;
}

