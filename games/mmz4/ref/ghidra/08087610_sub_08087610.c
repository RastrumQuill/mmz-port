// sub_08087610 at 0x08087610 (thumb)

undefined4 sub_08087610(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb4) = 3;
  *(undefined *)(param_1 + 0xe) = 1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,0x8087635);
  return in_lr;
}

