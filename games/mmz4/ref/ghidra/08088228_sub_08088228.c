// sub_08088228 at 0x08088228 (thumb)

undefined4 sub_08088228(int param_1)

{
  undefined4 in_lr;
  
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885ba74 + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

