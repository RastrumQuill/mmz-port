// sub_080843A4 at 0x080843A4 (thumb)

undefined4 sub_080843A4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CFF0();
  iVar1 = *(int *)(param_1 + 0x58) + -0x200;
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 < *(int *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x13) = 0x7f;
  }
  return in_lr;
}

