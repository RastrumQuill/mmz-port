// sub_080C3B7C at 0x080C3B7C (thumb)

undefined4 sub_080C3B7C(int param_1)

{
  undefined4 in_lr;
  
  if (-1 < *(char *)(param_1 + 7)) {
    *(undefined *)(*(int *)(param_1 + 0x10) + 0x180 + (int)*(char *)(param_1 + 7)) = 0;
    sub_080B4518();
  }
  return in_lr;
}

