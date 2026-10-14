// sub_080012B8 at 0x080012B8 (thumb)

void sub_080012B8(int param_1,undefined4 param_2)

{
  (&DAT_03002a6c)[param_1 * 6] = param_2;
  (&DAT_03002a70)[param_1 * 6] = *(ushort *)(&DAT_08827a84 + param_1 * 2) + 0x3001760;
  (&DAT_03002a6a)[param_1 * 0xc] = 0;
  (&DAT_03002a69)[param_1 * 0x18] = 0;
  (&DAT_03002a68)[param_1 * 0x18] = 2;
  return;
}

