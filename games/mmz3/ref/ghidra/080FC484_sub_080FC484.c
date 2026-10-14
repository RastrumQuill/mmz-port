// sub_080FC484 at 0x080FC484 (thumb)

undefined4 sub_080FC484(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return param_1;
}

