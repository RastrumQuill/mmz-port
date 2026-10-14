// sub_08034CA4 at 0x08034CA4 (thumb)

undefined4 sub_08034CA4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,7);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad62c);
    *(undefined *)(param_1 + 0x12) = 0x28;
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x4c) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x40;
  if ((*(ushort *)(param_1 + 0x90) & 4) == 0) {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(undefined *)(param_1 + 0xd) = 0x15;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x88) + 0x40);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar4 = -0xc00;
    }
    else {
      iVar4 = 0xc00;
    }
    *(int *)(iVar2 + 0x4c) = iVar3 + iVar4;
    *(undefined4 *)(iVar2 + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined *)(param_1 + 0xd) = 0x16;
    *(undefined *)(param_1 + 0xe) = 1;
    sub_08001EAC(0x31);
  }
  return in_lr;
}

