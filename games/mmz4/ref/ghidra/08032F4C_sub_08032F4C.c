// sub_08032F4C at 0x08032F4C (thumb)

undefined4 sub_08032F4C(int param_1)

{
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x100) = 0;
  sub_0803A970(0x803c449);
  DAT_0202dc08 = 1;
  *(undefined *)(param_1 + 0xe) = 2;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08032F98(param_1);
  return in_lr;
}

