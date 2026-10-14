// sub_080292F8 at 0x080292F8 (thumb)

undefined4 sub_080292F8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_08029314();
  return in_lr;
}

