// sub_080917E4 at 0x080917E4 (thumb)

undefined4 sub_080917E4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0801CF00(param_1,0x3c07);
    sub_08005784(param_1 + 0x74,&DAT_0885cd10);
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar1 = sub_08090C00(param_1);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) && (*(short *)(iVar2 + 0xd2) == 0)) {
    sub_08005784(param_1 + 0x74,&DAT_0885cda0);
    *(undefined *)(param_1 + 0xd) = 4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xc1) = 1;
  }
  return in_lr;
}

