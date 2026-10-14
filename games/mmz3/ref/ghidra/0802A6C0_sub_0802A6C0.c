// sub_0802A6C0 at 0x0802A6C0 (thumb)

undefined4 sub_0802A6C0(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    sub_08017700(param_1,0x200);
    *(undefined *)(param_1 + 0xf) = 1;
    sub_0802A710(param_1);
  }
  else {
    sub_080177CC(param_1,0x200,1,4);
    *(undefined *)(param_1 + 0xf) = 2;
    sub_0802A800(param_1);
  }
  return in_lr;
}

