// sub_080FE064 at 0x080FE064 (thumb)

void sub_080FE064(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x24) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

