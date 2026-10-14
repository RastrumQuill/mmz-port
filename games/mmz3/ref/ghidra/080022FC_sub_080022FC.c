// sub_080022FC at 0x080022FC (thumb)

void sub_080022FC(int param_1,undefined4 param_2)

{
  (&DAT_03002a6c)[param_1 * 6] = param_2;
  (&DAT_03002a70)[param_1 * 6] = *(ushort *)(&DAT_08335478 + param_1 * 2) + 0x3001760;
  (&DAT_03002a6a)[param_1 * 0xc] = 0;
  (&DAT_03002a69)[param_1 * 0x18] = 0;
  (&DAT_03002a68)[param_1 * 0x18] = 2;
  return;
}

