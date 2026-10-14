// sub_08087F7C at 0x08087F7C (thumb)

undefined4 sub_08087F7C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb4) = 3;
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54)) {
    *(undefined *)(param_1 + 0xe) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 5;
  }
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885ba5c + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

