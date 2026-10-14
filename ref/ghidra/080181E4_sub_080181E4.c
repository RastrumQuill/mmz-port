// sub_080181E4 at 0x080181E4 (thumb)

undefined4 sub_080181E4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 2;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 1;
  sub_08018BE8(param_1,0x1f);
  sub_08027188(param_1,0xb,0);
  return in_lr;
}

