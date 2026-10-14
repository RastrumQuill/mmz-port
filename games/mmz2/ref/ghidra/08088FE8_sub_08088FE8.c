// sub_08088FE8 at 0x08088FE8 (thumb)

undefined4 sub_08088FE8(int param_1)

{
  undefined4 in_lr;
  
  sub_080032EC(0x3f);
  sub_080B0ACC(param_1 + 0x54,&DAT_083418d4,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080B0ACC(param_1 + 0x54,&DAT_083418f0,0,*(byte *)(param_1 + 10) & 0x10);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

