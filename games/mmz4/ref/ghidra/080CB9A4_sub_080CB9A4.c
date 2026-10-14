// sub_080CB9A4 at 0x080CB9A4 (thumb)

undefined4 sub_080CB9A4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x9200);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_088630ec);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x60) + 0x20;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x300 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x300;
    }
  }
  else {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

