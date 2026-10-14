// sub_080C88D0 at 0x080C88D0 (thumb)

void sub_080C88D0(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x27) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

