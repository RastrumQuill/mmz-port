// sub_080DB4A8 at 0x080DB4A8 (thumb)

undefined4 sub_080DB4A8(int param_1)

{
  undefined4 in_lr;
  
  if (1 < (byte)(*(char *)(*(int *)(param_1 + 0x28) + 4) - 5U)) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB3D4(param_1);
  }
  return in_lr;
}

