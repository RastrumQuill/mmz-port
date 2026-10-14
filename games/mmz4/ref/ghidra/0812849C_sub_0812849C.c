// sub_0812849C at 0x0812849C (thumb)

void sub_0812849C(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x1e) = **(undefined **)(param_2 + 0x40);
  *(undefined **)(param_2 + 0x40) = *(undefined **)(param_2 + 0x40) + 1;
  return;
}

