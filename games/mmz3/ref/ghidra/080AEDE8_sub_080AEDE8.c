// sub_080AEDE8 at 0x080AEDE8 (thumb)

undefined4 sub_080AEDE8(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar3 + 0x54);
  iVar5 = *(int *)(iVar3 + 0x58);
  bVar1 = *(byte *)(iVar3 + 10) >> 4;
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)(bVar1 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
  iVar3 = -1;
  if ((bVar1 & 1) == 0) {
    iVar3 = 1;
  }
  *(int *)(param_1 + 0x54) = iVar4 + iVar3 * 0x1000;
  *(int *)(param_1 + 0x58) = iVar5 + -0x1c00;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 1;
    sub_08017700(param_1,0x8601);
  }
  return in_lr;
}

