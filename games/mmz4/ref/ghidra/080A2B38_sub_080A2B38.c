// sub_080A2B38 at 0x080A2B38 (thumb)

undefined4 sub_080A2B38(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885e828 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080A2DA8(param_1);
  }
  return in_lr;
}

