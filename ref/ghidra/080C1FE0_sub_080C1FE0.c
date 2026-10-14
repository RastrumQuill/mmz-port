// sub_080C1FE0 at 0x080C1FE0 (thumb)

undefined4 sub_080C1FE0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x6fcc) = 1;
  *(undefined2 *)(param_1 + 0x6fe0) = 1;
  *(undefined2 *)(param_1 + 0x6fe2) = 0;
  *(undefined *)(param_1 + 0x6fe4) = 7;
  *(undefined4 *)(param_1 + 0x6fec) = 1;
  *(undefined4 *)(param_1 + 0x6e94) = 1;
  return in_lr;
}

