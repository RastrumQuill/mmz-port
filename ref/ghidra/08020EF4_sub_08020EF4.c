// sub_08020EF4 at 0x08020EF4 (thumb)

undefined4 sub_08020EF4(int param_1)

{
  undefined4 in_lr;
  
  if (DAT_02022880 == '\0') {
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 3;
    sub_08018BE8(param_1,*(undefined *)(param_1 + 0x116));
    sub_08028F3C(param_1);
    sub_08020F30(param_1);
  }
  return in_lr;
}

