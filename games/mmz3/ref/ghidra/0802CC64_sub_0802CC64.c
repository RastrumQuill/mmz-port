// sub_0802CC64 at 0x0802CC64 (thumb)

undefined4 sub_0802CC64(int param_1)

{
  undefined4 in_lr;
  
  sub_08017700(param_1,0x3300);
  if (*(int *)(param_1 + 0xf4) != 0) {
    *(undefined *)(*(int *)(param_1 + 0xf4) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  *(undefined *)(param_1 + 0xec) = 0;
  DAT_0202f5c8 = 1;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0802CCA8(param_1);
  return in_lr;
}

