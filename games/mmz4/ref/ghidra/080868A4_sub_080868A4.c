// sub_080868A4 at 0x080868A4 (thumb)

undefined4 sub_080868A4(int param_1,undefined param_2)

{
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xb6) = param_2;
  *(undefined *)(param_1 + 0xb5) = param_2;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885b908 + (uint)*(byte *)(param_1 + 0xb4) * 4));
  sub_0801CFF0(param_1);
  return in_lr;
}

