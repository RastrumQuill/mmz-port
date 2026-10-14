// sub_080F9DD8 at 0x080F9DD8 (thumb)

undefined4 sub_080F9DD8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088671fc + (uint)*(byte *)(param_1 + 0xd) * 4));
    *(undefined *)(param_1 + 0xbe) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080F9E28(param_1);
  }
  return in_lr;
}

