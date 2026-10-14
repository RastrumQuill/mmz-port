// sub_0803D350 at 0x0803D350 (thumb)

undefined4 sub_0803D350(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0x11);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(*(int *)(param_1 + 0x24) + 0x10) = 1;
    sub_0800561C(param_1 + 0x74,&DAT_082addcc);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x54) = 0x200;
      *(undefined2 *)(param_1 + 0xce) = 0xfff0;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0xfffffe00;
      *(undefined2 *)(param_1 + 0xce) = 0x10;
    }
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined *)(param_1 + 0x12) = 0x20;
  }
  sub_080297C0(param_1);
  iVar2 = *(int *)(param_1 + 0x54) + (int)*(short *)(param_1 + 0xce);
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + iVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

