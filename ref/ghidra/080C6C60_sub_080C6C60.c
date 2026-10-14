// sub_080C6C60 at 0x080C6C60 (thumb)

undefined4 sub_080C6C60(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return param_1;
}

