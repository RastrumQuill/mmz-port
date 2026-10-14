// sub_0806B80C at 0x0806B80C (thumb)

undefined4 sub_0806B80C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0xaa0a);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe00;
      uVar1 = 0xffffffc0;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0x200;
      uVar1 = 0x40;
    }
    *(undefined4 *)(param_1 + 100) = uVar1;
    sub_08005784(param_1 + 0x74,&DAT_08858c70);
    *(undefined *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  iVar2 = *(int *)(param_1 + 0x5c);
  if (iVar2 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    *(int *)(param_1 + 0x5c) = iVar2 - *(int *)(param_1 + 100);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

