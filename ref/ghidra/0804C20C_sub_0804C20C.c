// sub_0804C20C at 0x0804C20C (thumb)

undefined4 sub_0804C20C(int param_1)

{
  undefined4 in_lr;
  
  if (0x3f < *(byte *)(param_1 + 0x12)) {
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined *)(param_1 + 0xd) = 0xc;
    sub_080033F0(param_1 + 0x6c,9);
  }
  return in_lr;
}

