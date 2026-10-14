// sub_0807E898 at 0x0807E898 (thumb)

int sub_0807E898(int param_1,uint param_2)

{
  return *(int *)(param_1 + 0xb4) + (&DAT_0885a328)[(param_2 << 0x18) >> 0x19] + 0x7800 +
         ((param_2 & 1) * 2 + -1) * 0xf00;
}

