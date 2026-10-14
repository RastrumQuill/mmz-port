// sub_080DA05C at 0x080DA05C (thumb)

undefined4 sub_080DA05C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x12) = 0x10;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x8000;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  sub_0801CF00(param_1,0x2509);
  return in_lr;
}

