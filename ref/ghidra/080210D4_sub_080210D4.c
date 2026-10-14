// sub_080210D4 at 0x080210D4 (thumb)

undefined4 sub_080210D4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
  *(undefined2 *)(param_1 + 0xe) = 1;
  sub_080210EC();
  return in_lr;
}

