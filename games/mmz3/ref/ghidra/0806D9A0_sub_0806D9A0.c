// sub_0806D9A0 at 0x0806D9A0 (thumb)

undefined4 sub_0806D9A0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080177F4();
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

