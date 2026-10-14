// sub_08016F38 at 0x08016F38 (thumb)

void sub_08016F38(int param_1)

{
  *(uint *)(param_1 + 0x4c) =
       (*(uint *)(param_1 + 0x4c) & 0xfffff000) + 0x800 +
       ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * -0x100;
  return;
}

