// sub_08034708 at 0x08034708 (thumb)

undefined4 sub_08034708(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar3;
  if (*(int *)(param_1 + 0x4c) < iVar3) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  iVar3 = *(int *)(param_1 + 0x50) + iVar3;
  *(int *)(param_1 + 0x50) = iVar3;
  iVar2 = *(int *)(param_1 + 0xc0) + -0x4000;
  if (iVar2 < iVar3) {
    *(int *)(param_1 + 0x50) = iVar2;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

