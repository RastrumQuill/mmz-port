// sub_080E5888 at 0x080E5888 (thumb)

undefined4 sub_080E5888(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0xb4);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined *)(param_1 + 0xc0) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  *(int *)(param_1 + 0xb8) = *(int *)(iVar2 + 0x54);
  *(int *)(param_1 + 0xbc) = *(int *)(iVar2 + 0x58) + -0x2000;
  uVar3 = sub_080FE390(*(byte *)(param_1 + 0xc0) + 1,0x30);
  *(byte *)(param_1 + 0xc0) = (byte)uVar3;
  iVar4 = sub_080FE390(uVar3,0x30);
  iVar4 = FUN_080fe2f8(iVar4 << 8,0x30);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb8) +
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17)) * 8;
  iVar4 = sub_080FE390(uVar3,0x18);
  iVar4 = FUN_080fe2f8(iVar4 << 8,0x18);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xbc) +
       *(short *)((int)&DAT_080fe64c + ((uint)(iVar4 << 0x18) >> 0x17)) * -8;
  if (*(byte *)(iVar2 + 0x120) < 0x3c) {
    if ((*(byte *)(iVar2 + 0x120) & 3) < 2) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
  }
  if (*(char *)(iVar2 + 0xd) != '\b') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

