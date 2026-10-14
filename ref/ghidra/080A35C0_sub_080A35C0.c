// sub_080A35C0 at 0x080A35C0 (thumb)

void sub_080A35C0(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x11) != '\0') {
    DAT_02004f3a = 0x6647;
    DAT_02004f48._0_2_ = 0;
    DAT_02004f48._2_2_ = 0;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return;
}

