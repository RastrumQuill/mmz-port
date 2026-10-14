// sub_08088D4C at 0x08088D4C (thumb)

undefined4 sub_08088D4C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_080032EC(0xed);
  iVar1 = param_1 + 0x54;
  sub_080B0ACC(iVar1,&DAT_08341820,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080B0ACC(iVar1,&DAT_0834183c,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080B0ACC(iVar1,&DAT_08341858,0,*(byte *)(param_1 + 10) & 0x10);
  sub_080B0ACC(iVar1,&DAT_08341874,0,*(byte *)(param_1 + 10) & 0x10);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

