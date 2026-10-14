// sub_080313F8 at 0x080313F8 (thumb)

undefined4 sub_080313F8(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined2 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x13) = 4;
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
  }
  return in_lr;
}

