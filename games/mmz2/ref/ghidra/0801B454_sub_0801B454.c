// sub_0801B454 at 0x0801B454 (thumb)

void sub_0801B454(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = param_2;
  DAT_0202ec42 = DAT_0202ec42 | 1;
  DAT_02000ff0 = 0;
  return;
}

