// sub_0802F5FC at 0x0802F5FC (thumb)

undefined4 sub_0802F5FC(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0802E0E4();
  return in_lr;
}

