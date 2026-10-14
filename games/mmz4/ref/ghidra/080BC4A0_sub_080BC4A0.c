// sub_080BC4A0 at 0x080BC4A0 (thumb)

undefined4 sub_080BC4A0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    sub_080BC5A0(param_1);
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080BC654(param_1);
  }
  return in_lr;
}

