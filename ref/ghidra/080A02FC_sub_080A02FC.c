// sub_080A02FC at 0x080A02FC (thumb)

undefined4 sub_080A02FC(int param_1)

{
  undefined4 in_lr;
  byte abStack_10 [8];
  
  sub_080C8D70(abStack_10,&DAT_080c94ac,6);
  *(uint *)(param_1 + 0x50) = DAT_0202164c + (uint)abStack_10[*(byte *)(param_1 + 0x10)] * -0x100;
  if (((DAT_02022adf & 0x80) == 0) && ((DAT_02022ae0 & 0x12) == 0)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5838 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  return in_lr;
}

