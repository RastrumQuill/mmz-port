// sub_0803255C at 0x0803255C (thumb)

undefined4 sub_0803255C(int param_1)

{
  char cVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,6);
    *(undefined *)(param_1 + 0x12) = 0xc;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  sub_080297C0(param_1);
  iVar3 = *(int *)(param_1 + 0x58) + 0x40;
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar3;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    if (*(short *)(param_1 + 0xcc) == 0) {
      uVar2 = 0xf;
    }
    else {
      uVar2 = 0x10;
    }
    *(undefined *)(param_1 + 0xd) = uVar2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

