// sub_080DA540 at 0x080DA540 (thumb)

undefined4 sub_080DA540(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080127E4(param_1,0x410b);
  sub_080DA560(param_1);
  return in_lr;
}

