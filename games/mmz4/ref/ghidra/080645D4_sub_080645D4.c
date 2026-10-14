// sub_080645D4 at 0x080645D4 (thumb)

undefined4 sub_080645D4(int param_1)

{
  undefined4 in_lr;
  
  if ((bool)(*(byte *)(param_1 + 10) >> 4 & 1) ==
      *(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xd0) + 0x7800) {
    *(undefined *)(param_1 + 0xe) = 3;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885767c + (uint)*(byte *)(param_1 + 0xe) * 4));
  return in_lr;
}

