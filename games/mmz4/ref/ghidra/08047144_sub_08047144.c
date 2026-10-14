// sub_08047144 at 0x08047144 (thumb)

undefined4 sub_08047144(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088538c0 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088504bc)[*(byte *)(param_1 + 9)] + 8);
    sub_0804718C(param_1);
  }
  return in_lr;
}

