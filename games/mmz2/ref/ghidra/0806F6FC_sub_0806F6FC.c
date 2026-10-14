// sub_0806F6FC at 0x0806F6FC (thumb)

undefined4 sub_0806F6FC(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x28) = 0;
  }
  sub_08065A04(param_1);
  return in_lr;
}

