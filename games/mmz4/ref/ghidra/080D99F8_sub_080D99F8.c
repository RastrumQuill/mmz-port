// sub_080D99F8 at 0x080D99F8 (thumb)

undefined4 sub_080D99F8(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if ((cVar2 == '\0') || (sVar1 = sub_08007C7C(iVar4,iVar3), sVar1 != 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080D9A74(param_1);
  }
  else {
    sub_0801CFF0(param_1);
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x58) = iVar3;
    iVar3 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar3;
    if (0x700 < iVar3) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    cVar2 = *(char *)(param_1 + 0x75) + *(char *)(param_1 + 0x74);
    *(char *)(param_1 + 0x74) = cVar2;
    *(char *)(param_1 + 0x24) = cVar2;
  }
  return in_lr;
}

