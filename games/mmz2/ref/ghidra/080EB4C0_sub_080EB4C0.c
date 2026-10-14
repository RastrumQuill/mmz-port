// sub_080EB4C0 at 0x080EB4C0 (thumb)

undefined4 sub_080EB4C0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined *)(param_1 + 0xddb) = 4;
  sub_080EB4DC();
  return in_lr;
}

