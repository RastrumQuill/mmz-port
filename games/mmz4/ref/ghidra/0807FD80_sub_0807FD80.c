// sub_0807FD80 at 0x0807FD80 (thumb)

undefined4 sub_0807FD80(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  if ((0 < *(int *)(param_1 + 0x60)) &&
     (sVar1 = sub_08007C7C(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x40),
     sVar1 != 0)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

