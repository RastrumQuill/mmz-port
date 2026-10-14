// sub_08038F68 at 0x08038F68 (thumb)

int sub_08038F68(int param_1,int param_2)

{
  return ((param_2 + (0x100 - param_1) & 0xffU) + 0x80 & 0xff) - 0x80;
}

