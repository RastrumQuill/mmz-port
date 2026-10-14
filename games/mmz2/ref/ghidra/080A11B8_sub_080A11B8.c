// sub_080A11B8 at 0x080A11B8 (thumb)

undefined4 sub_080A11B8(int param_1)

{
  undefined4 in_lr;
  
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08344494 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080EF118(param_1,*(undefined4 *)(&DAT_083444b4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

