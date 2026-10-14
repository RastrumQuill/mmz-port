// sub_080CF734 at 0x080CF734 (thumb)

undefined4 sub_080CF734(int param_1)

{
  undefined4 in_lr;
  
  sub_080025D8(0xc5);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08863848 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CF85C(param_1);
  }
  return in_lr;
}

