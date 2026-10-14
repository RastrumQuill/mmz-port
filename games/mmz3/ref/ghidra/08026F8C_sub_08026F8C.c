// sub_08026F8C at 0x08026F8C (thumb)

undefined4
sub_08026F8C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x14c) = param_2;
  *(undefined4 *)(param_1 + 0x150) = param_4;
  *(undefined4 *)(param_1 + 0x154) = param_3;
  *(undefined4 *)(param_1 + 0x158) = param_5;
  return in_lr;
}

