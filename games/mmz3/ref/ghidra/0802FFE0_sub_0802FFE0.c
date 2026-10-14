// sub_0802FFE0 at 0x0802FFE0 (thumb)

undefined4 sub_0802FFE0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0x126) = 0x10;
  sub_080328E4(param_1,0x3c00);
  *(short *)(param_1 + 0x138) = (short)*(undefined4 *)(param_1 + 0x5c);
  if (*(char *)(param_1 + 0x135) != '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 3;
    *(undefined *)(param_1 + 0xed) = 10;
    *(undefined *)(param_1 + 0xee) = 0;
  }
  return in_lr;
}

