// sub_08031418 at 0x08031418 (thumb)

undefined4 sub_08031418(int param_1,int param_2)

{
  undefined4 in_lr;
  
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
  }
  else {
    *(undefined *)(param_1 + 0x14) = 2;
    *(undefined2 *)(param_1 + 0xe) = 0xffff;
  }
  return in_lr;
}

