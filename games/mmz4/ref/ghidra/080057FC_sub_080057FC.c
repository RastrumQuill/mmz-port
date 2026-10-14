// sub_080057FC at 0x080057FC (thumb)

void sub_080057FC(undefined4 *param_1,undefined4 param_2,undefined param_3)

{
  *param_1 = param_2;
  *(undefined *)((int)param_1 + 0x3b) = param_3;
  *(undefined *)((int)param_1 + 0x36) = 0;
  return;
}

