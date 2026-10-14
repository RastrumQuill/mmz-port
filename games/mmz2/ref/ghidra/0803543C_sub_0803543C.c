// sub_0803543C at 0x0803543C (thumb)

undefined4 sub_0803543C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) * *(int *)(param_1 + 0x68) < 0) {
    sub_0801EA38(param_1,5,1,1);
  }
  else if (*(int *)(param_1 + 0x60) + 0x3f < 0x7f) {
    sub_0801E9FC(param_1,6);
  }
  else {
    sub_0801EA38(param_1,6,1,1);
  }
  return in_lr;
}

