// sub_080D7F98 at 0x080D7F98 (thumb)

undefined4 sub_080D7F98(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08007390(param_1 + 0x74,&DAT_0836d790);
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x58);
  bVar1 = *(int *)(DAT_0202f5c0 + 0x58) < iVar3 + -0xd00;
  if (bVar1) {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x30) = &DAT_0836d7dc;
    *(undefined2 *)(param_1 + 0x26) = 0x801;
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (!bVar1)) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    bVar2 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar2;
    if (0xbf < bVar2) {
      *(undefined *)(param_1 + 0xd) = 4;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0x400;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  iVar4 = (DAT_0202e48c + *(int *)(param_1 + 0x68)) - iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 7;
  }
  *(int *)(param_1 + 0x58) = iVar3 + (iVar4 >> 3);
  sub_080177F4(param_1);
  return in_lr;
}

