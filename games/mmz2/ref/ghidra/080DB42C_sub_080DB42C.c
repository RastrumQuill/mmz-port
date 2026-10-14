// sub_080DB42C at 0x080DB42C (thumb)

undefined4 sub_080DB42C(int param_1)

{
  undefined4 in_lr;
  
  if ((byte)(*(char *)(*(int *)(param_1 + 0x28) + 4) - 5U) < 2) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB450(param_1);
  }
  return in_lr;
}

