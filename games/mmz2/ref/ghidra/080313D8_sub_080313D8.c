// sub_080313D8 at 0x080313D8 (thumb)

undefined4 sub_080313D8(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 10) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x12) = 2;
    *(undefined2 *)(param_1 + 10) = 0xffff;
  }
  return in_lr;
}

