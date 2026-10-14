// sub_080721F0 at 0x080721F0 (thumb)

undefined4 sub_080721F0(int param_1)

{
  undefined uVar1;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202dbf0 + 0x54) ==
      (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
    uVar1 = 0x1c;
  }
  else {
    uVar1 = 0x1a;
  }
  *(undefined *)(param_1 + 0xe) = uVar1;
  *(undefined *)(param_1 + 0xf) = 0;
  sub_08128884(param_1,*(undefined4 *)(&DAT_088592ac + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

