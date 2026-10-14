// sub_080C5208 at 0x080C5208 (thumb)

undefined4 sub_080C5208(int param_1)

{
  undefined4 in_lr;
  
  sub_08001904(0x7b,0);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cc39c + (uint)*(byte *)(param_1 + 3) * 4));
  sub_080C5BBC(*(undefined *)(param_1 + 0x9ea));
  return in_lr;
}

