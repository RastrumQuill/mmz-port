// sub_08035014 at 0x08035014 (thumb)

undefined4 sub_08035014(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08033E18();
  return in_lr;
}

