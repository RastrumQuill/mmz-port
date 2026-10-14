// sub_08030A2C at 0x08030A2C (thumb)

undefined4 sub_08030A2C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    sub_0801CF00(param_1,0x200);
    *(undefined *)(param_1 + 0xf) = 1;
    sub_08030A7C(param_1);
  }
  else {
    sub_0801CFC8(param_1,0x200,1,4);
    *(undefined *)(param_1 + 0xf) = 2;
    sub_08030B70(param_1);
  }
  return in_lr;
}

