// sub_080877C8 at 0x080877C8 (thumb)

undefined4 sub_080877C8(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb4) = 3;
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885ba34 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

