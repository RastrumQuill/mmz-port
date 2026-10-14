// sub_080148FC at 0x080148FC (thumb)

undefined4 sub_080148FC(int param_1)

{
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
  return 0;
}

