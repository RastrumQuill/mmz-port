// sub_08126858 at 0x08126858 (thumb)

undefined4 sub_08126858(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return param_1;
}

