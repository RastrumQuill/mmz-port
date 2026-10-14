// sub_0803354C at 0x0803354C (thumb)

undefined4 sub_0803354C(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,2);
    *(undefined4 *)(param_1 + 0x54) = 0xfffffcd0;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffa00;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(undefined *)(param_1 + 0x12) = 0xc;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      *(int *)(param_1 + 0x54) = -*(int *)(param_1 + 0x54);
    }
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar4 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar4;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0xe;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

