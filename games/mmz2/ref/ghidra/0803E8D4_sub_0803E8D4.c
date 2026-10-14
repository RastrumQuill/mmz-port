// sub_0803E8D4 at 0x0803E8D4 (thumb)

undefined4 sub_0803E8D4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0803E98C(param_1);
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined *)(param_1 + 0x11) = 0x30;
    *(undefined *)(param_1 + 0x13) = 0;
    sub_0803E920(param_1);
  }
  return in_lr;
}

