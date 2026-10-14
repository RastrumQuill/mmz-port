// sub_08027E48 at 0x08027E48 (thumb)

undefined4 sub_08027E48(int param_1)

{
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
  return 0;
}

