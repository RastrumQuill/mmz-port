// sub_08031D88 at 0x08031D88 (thumb)

undefined4 sub_08031D88(int param_1)

{
  undefined4 in_lr;
  
  sub_0801CF00(param_1,0x500);
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined *)(param_1 + 0x10c) = 8;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08031DC8(param_1);
  return in_lr;
}

