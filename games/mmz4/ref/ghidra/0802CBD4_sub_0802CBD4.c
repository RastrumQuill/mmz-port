// sub_0802CBD4 at 0x0802CBD4 (thumb)

undefined4
sub_0802CBD4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x178) = param_2;
  *(undefined4 *)(param_1 + 0x17c) = param_4;
  *(undefined4 *)(param_1 + 0x180) = param_3;
  *(undefined4 *)(param_1 + 0x184) = param_5;
  return in_lr;
}

