// sub_080472DC at 0x080472DC (thumb)

undefined4 sub_080472DC(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    iVar3 = *(int *)(DAT_0202286c + 0x4c);
    *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar3;
    if (*(int *)(param_1 + 0x4c) < iVar3) {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffc80;
      iVar3 = *(int *)(DAT_0202286c + 0x4c);
      iVar4 = -0x3000;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x380;
      iVar3 = *(int *)(DAT_0202286c + 0x4c);
      iVar4 = 0x3000;
    }
    *(int *)(param_1 + 0xd0) = iVar3 + iVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082ae9fc);
    *(undefined *)(param_1 + 0x1f) = 0;
    sub_08001EAC(0xb6);
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (iVar3 < *(int *)(param_1 + 0xd0)) goto LAB_080473ae;
    iVar4 = -0x1200;
  }
  else {
    if (*(int *)(param_1 + 0xd0) < iVar3) {
LAB_080473ae:
      *(undefined *)(param_1 + 0xd) = 3;
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 2;
      *(undefined *)(param_1 + 0x12) = 0x18;
      return in_lr;
    }
    iVar4 = 0x1200;
  }
  cVar2 = sub_080079CC(iVar3 + iVar4,*(int *)(param_1 + 0x50) + -0x800);
  if (cVar2 != '\0') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

