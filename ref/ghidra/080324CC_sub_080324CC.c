// sub_080324CC at 0x080324CC (thumb)

undefined4 sub_080324CC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    iVar5 = DAT_0202286c;
    iVar4 = *(int *)(param_1 + 0x4c);
    *(int *)(param_1 + 0x54) = *(int *)(DAT_0202286c + 0x4c) - iVar4 >> 5;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
    bVar1 = iVar4 < *(int *)(iVar5 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar5 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar5;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

