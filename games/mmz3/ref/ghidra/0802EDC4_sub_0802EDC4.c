// sub_0802EDC4 at 0x0802EDC4 (thumb)

undefined4 sub_0802EDC4(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_0802E390();
  return in_lr;
}

