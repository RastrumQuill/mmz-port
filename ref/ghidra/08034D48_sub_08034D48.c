// sub_08034D48 at 0x08034D48 (thumb)

undefined4 sub_08034D48(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,3);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0800561C(param_1 + 0x74,&DAT_082ad5f4);
  }
  sub_080297C0(param_1);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  iVar2 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  iVar1 = *(int *)(param_1 + 0xc0) + -0x4000;
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x50) = iVar1;
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

