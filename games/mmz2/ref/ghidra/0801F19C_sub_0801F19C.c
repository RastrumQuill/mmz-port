// sub_0801F19C at 0x0801F19C (thumb)

undefined4
sub_0801F19C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x88) = param_2;
  *(undefined4 *)(param_1 + 0x8c) = param_3;
  *(undefined4 *)(param_1 + 0x90) = param_4;
  *(undefined4 *)(param_1 + 0x94) = param_5;
  return in_lr;
}

