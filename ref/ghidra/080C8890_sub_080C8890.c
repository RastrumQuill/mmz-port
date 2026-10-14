// sub_080C8890 at 0x080C8890 (thumb)

void sub_080C8890(undefined4 param_1,int param_2)

{
  *(undefined *)(param_2 + 0x2f) = **(undefined **)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  return;
}

