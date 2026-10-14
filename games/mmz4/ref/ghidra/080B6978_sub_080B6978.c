// sub_080B6978 at 0x080B6978 (thumb)

undefined4 sub_080B6978(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_088608d8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080B6D5C(param_1);
  }
  return in_lr;
}

