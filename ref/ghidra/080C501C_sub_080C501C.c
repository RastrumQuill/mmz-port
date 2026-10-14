// sub_080C501C at 0x080C501C (thumb)

undefined4 sub_080C501C(int param_1)

{
  undefined4 in_lr;
  
  sub_08001904(0x7b,0);
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082cc394 + (uint)*(byte *)(param_1 + 3) * 4));
  return in_lr;
}

