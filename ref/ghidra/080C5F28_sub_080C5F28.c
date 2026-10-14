// sub_080C5F28 at 0x080C5F28 (thumb)

undefined4 sub_080C5F28(int param_1)

{
  undefined4 in_lr;
  
  sub_08001904(0x7b,0);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cc3e4 + (uint)*(byte *)(param_1 + 3) * 4));
  return in_lr;
}

