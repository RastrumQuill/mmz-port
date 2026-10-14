// sub_08071B08 at 0x08071B08 (thumb)

undefined4 sub_08071B08(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar2 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar2 & 0x7fffffff;
  iVar1 = param_1 + 0x54;
  uVar3 = uVar2 * 2 >> 0x11 & 1;
  uVar2 = uVar3 << 4 | uVar3 ^ 1;
  sub_080B0ACC(iVar1,&DAT_08343a04,0,uVar2);
  uVar3 = (uVar3 ^ 1) << 4 | uVar3;
  sub_080B0ACC(iVar1,&DAT_08343a20,0,uVar3);
  sub_080B0ACC(iVar1,&DAT_08343a3c,0,uVar2);
  sub_080B0ACC(iVar1,&DAT_08343a58,0,uVar3);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

