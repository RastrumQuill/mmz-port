// sub_080A9174 at 0x080A9174 (thumb)

undefined4 sub_080A9174(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(short *)(iVar1 + 0xdc) != 0)) {
    sub_0801CF00(param_1,0x930a);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_0801CFF0(param_1);
  if (*(char *)(iVar1 + 0xd) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

