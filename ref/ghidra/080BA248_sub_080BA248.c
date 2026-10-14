// sub_080BA248 at 0x080BA248 (thumb)

undefined4 sub_080BA248(int param_1)

{
  undefined4 in_lr;
  
  if ((byte)(*(char *)(*(int *)(param_1 + 0x20) + 4) - 5U) < 2) {
    *(undefined *)(param_1 + 0xd) = 3;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080BA26C(param_1);
  }
  return in_lr;
}

