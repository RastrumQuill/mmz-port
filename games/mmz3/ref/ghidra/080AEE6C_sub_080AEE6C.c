// sub_080AEE6C at 0x080AEE6C (thumb)

undefined4 sub_080AEE6C(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar3 + 0xf) < 3) {
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
    *(int *)(param_1 + 0x54) = iVar4 + iVar3 * 0xe00;
    *(int *)(param_1 + 0x58) = iVar5 + -0x1700;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080AEEEC(param_1);
  }
  return in_lr;
}

