// sub_080C8AE4 at 0x080C8AE4 (thumb)

undefined4 sub_080C8AE4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0836a0c8)[*(byte *)(param_1 + 9)] + 8);
    sub_080C8A2C(param_1);
  }
  return in_lr;
}

