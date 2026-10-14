// sub_080B6BCC at 0x080B6BCC (thumb)

undefined4 sub_080B6BCC(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(*(int *)(param_1 + 0x28) + 0x28) + 0xc) < 2) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088608e4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B6D5C(param_1);
  }
  return in_lr;
}

