// sub_080DDEA8 at 0x080DDEA8 (thumb)

undefined4 sub_080DDEA8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 1;
  sub_080127E4(param_1,0x410b);
  sub_080DDEC8(param_1);
  return in_lr;
}

