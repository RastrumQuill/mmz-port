// sub_080ED2DC at 0x080ED2DC (thumb)

undefined4 sub_080ED2DC(undefined4 param_1,int param_2)

{
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return param_1;
}

