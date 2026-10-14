// sub_08005410 at 0x08005410 (thumb)

void sub_08005410(int param_1)

{
  DAT_0200001c = param_1;
  *(int *)(param_1 + 0xc) = param_1 + 0x14;
  return;
}

