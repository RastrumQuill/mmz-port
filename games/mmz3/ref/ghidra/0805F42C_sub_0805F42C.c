// sub_0805F42C at 0x0805F42C (thumb)

undefined4 sub_0805F42C(int param_1)

{
  undefined4 in_lr;
  
  sub_080608EC();
  if (0 < *(int *)(param_1 + 0x60)) {
    *(undefined2 *)(param_1 + 0xe) = 4;
    sub_08060768(param_1,8);
    *(undefined *)(param_1 + 0x12) = 0;
  }
  return in_lr;
}

