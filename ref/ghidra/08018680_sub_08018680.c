// sub_08018680 at 0x08018680 (thumb)

undefined4 sub_08018680(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x58) * *(int *)(param_1 + 0x60) < 0) {
    sub_08018C20(param_1,5,1,1);
  }
  else if (*(int *)(param_1 + 0x58) + 0x3f < 0x7f) {
    sub_08018BE8(param_1,6);
  }
  else {
    sub_08018C20(param_1,6,1,1);
  }
  return in_lr;
}

