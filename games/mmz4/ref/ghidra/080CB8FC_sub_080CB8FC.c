// sub_080CB8FC at 0x080CB8FC (thumb)

undefined4 sub_080CB8FC(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x9200);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x58);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  sub_08005784(param_1 + 0x74,&DAT_0886308c);
  iVar2 = (int)*(short *)((int)&DAT_08128c10 +
                         ((0x10 - (uint)*(byte *)(param_1 + 0x12)) * 0x4000000 >> 0x17));
  iVar1 = iVar2 * *(int *)(param_1 + 100);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar1 >> 8);
  iVar2 = iVar2 * *(int *)(param_1 + 0x68);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar2 >> 8);
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

