// sub_080C4F08 at 0x080C4F08 (thumb)

undefined4 sub_080C4F08(int param_1)

{
  undefined4 in_lr;
  
  sub_08001904(0x7b,0);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cc384 + *(short *)(param_1 + 4) * 4));
  return in_lr;
}

