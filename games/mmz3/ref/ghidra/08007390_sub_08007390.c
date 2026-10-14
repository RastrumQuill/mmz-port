// sub_08007390 at 0x08007390 (thumb)

void sub_08007390(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined *)((int)param_1 + 0x3b) = 0;
  *(undefined *)((int)param_1 + 0x36) = 0;
  return;
}

