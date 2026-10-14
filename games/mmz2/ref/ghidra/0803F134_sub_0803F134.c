// sub_0803F134 at 0x0803F134 (thumb)

undefined4 sub_0803F134(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)((&DAT_08336060)[*(byte *)(param_1 + 9)] + 0x10);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    sub_08035878(param_1);
  }
  else {
    sub_0803F3A8();
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(&DAT_08336060)[*(byte *)(param_1 + 9)];
    *(undefined *)(param_1 + 0x11) = 1;
    sub_080032EC(0x40);
    sub_0803EC4C(param_1);
  }
  return in_lr;
}

