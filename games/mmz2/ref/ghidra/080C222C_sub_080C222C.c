// sub_080C222C at 0x080C222C (thumb)

undefined4 sub_080C222C(int param_1)

{
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0x58) =
       *(int *)(param_1 + 0xb4) +
       ((uint)DAT_02000fa4._2_2_ - *(int *)(param_1 + 0x68)) * 0x100 + 0xff;
  sub_080128D4();
  return in_lr;
}

