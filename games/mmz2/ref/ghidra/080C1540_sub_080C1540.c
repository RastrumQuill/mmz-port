// sub_080C1540 at 0x080C1540 (thumb)

undefined4 sub_080C1540(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_080BFD88();
  return in_lr;
}

