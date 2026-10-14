// sub_08031438 at 0x08031438 (thumb)

undefined4 sub_08031438(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x15) = 0;
    *(undefined2 *)(param_1 + 0x10) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x15) = 2;
    *(undefined2 *)(param_1 + 0x10) = 0xffff;
  }
  return in_lr;
}

