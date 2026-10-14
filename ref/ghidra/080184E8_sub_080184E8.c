// sub_080184E8 at 0x080184E8 (thumb)

undefined4 sub_080184E8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xc1) = *(undefined *)(param_1 + 0xbe);
  *(undefined *)(param_1 + 0xbe) = 1;
  *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
  *(undefined *)(param_1 + 0xc0) = 0;
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x120) = 0;
  *(undefined *)(param_1 + 0x11f) = 0;
  *(undefined *)(param_1 + 0x120) = 0;
  return in_lr;
}

