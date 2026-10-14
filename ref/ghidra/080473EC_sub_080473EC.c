// sub_080473EC at 0x080473EC (thumb)

undefined4 sub_080473EC(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,1);
    *(undefined *)(param_1 + 0xe) = 0;
    bVar1 = *(int *)(DAT_0202286c + 0x4c) < *(int *)(param_1 + 0x4c);
    *(bool *)(param_1 + 0x44) = bVar1;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0xfffffc80;
    }
    else {
      uVar4 = 0x380;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    sub_0800561C(param_1 + 0x74,&DAT_082ae9fc);
    *(undefined *)(param_1 + 0x1f) = 0;
    sub_08001EAC(0xb6);
  }
  sub_080297C0(param_1);
  iVar5 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar5;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar6 = -0x1200;
  }
  else {
    iVar6 = 0x1200;
  }
  cVar3 = sub_080079CC(iVar5 + iVar6,*(int *)(param_1 + 0x50) + -0x800);
  if (cVar3 != '\0') {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

