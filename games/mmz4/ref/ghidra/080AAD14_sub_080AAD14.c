// sub_080AAD14 at 0x080AAD14 (thumb)

undefined4 sub_080AAD14(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,0x9002);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,&DAT_0885f6a8);
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + -1;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080AB254(param_1);
  }
  return in_lr;
}

