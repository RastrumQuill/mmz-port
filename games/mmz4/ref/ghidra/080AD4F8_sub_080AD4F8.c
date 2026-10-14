// sub_080AD4F8 at 0x080AD4F8 (thumb)

undefined4 sub_080AD4F8(int param_1)

{
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb8) == '\0') {
      sub_080AD638(param_1);
    }
    else {
      sub_080AD8BC(param_1);
    }
    sub_080AD71C(param_1);
    sub_0801CFF0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080AD554(param_1);
  }
  return in_lr;
}

