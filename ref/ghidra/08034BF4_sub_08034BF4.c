// sub_08034BF4 at 0x08034BF4 (thumb)

undefined4 sub_08034BF4(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,4);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    iVar4 = *(int *)(DAT_0202286c + 0x4c) - *(int *)(param_1 + 0x4c);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0x3f;
    }
    *(int *)(param_1 + 0x54) = iVar4 >> 6;
    *(undefined4 *)(param_1 + 0x58) = 0xfffffac0;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xc0) + -0x4000;
    *(undefined *)(param_1 + 0x12) = 0x2a;
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x14;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

