// sub_08032E54 at 0x08032E54 (thumb)

void sub_08032E54(int param_1)

{
  *(uint *)(param_1 + 0x54) =
       (*(uint *)(param_1 + 0x54) & 0xfffff000) + 0x800 +
       ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * -0x100;
  return;
}

