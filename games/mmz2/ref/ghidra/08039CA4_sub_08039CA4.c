// sub_08039CA4 at 0x08039CA4 (thumb)

undefined4 sub_08039CA4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xf) = 1;
  sub_08039CB4();
  return in_lr;
}

