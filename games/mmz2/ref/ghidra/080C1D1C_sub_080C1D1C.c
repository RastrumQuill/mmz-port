// sub_080C1D1C at 0x080C1D1C (thumb)

undefined4 sub_080C1D1C(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar2 = uVar1 * 2 >> 0x11;
  uVar3 = uVar2 & 0xfff;
  local_28 = *(int *)(param_1 + 0x54) + (uVar3 - 0x1000);
  local_24 = *(int *)(param_1 + 0x58) - (uVar3 + 0x1a00);
  uVar2 = uVar2 & 1;
  uVar1 = uVar2 << 4 | uVar2 ^ 1;
  sub_080B0ACC(&local_28,&DAT_08343a04,0,uVar1);
  local_28 = *(int *)(param_1 + 0x54) + uVar3;
  local_24 = *(int *)(param_1 + 0x58) - (uVar3 + 0x1a00);
  uVar2 = (uVar2 ^ 1) << 4 | uVar2;
  sub_080B0ACC(&local_28,&DAT_08343a20,0,uVar2);
  local_28 = *(int *)(param_1 + 0x54) + (uVar3 - 0x1000);
  local_24 = *(int *)(param_1 + 0x58) - uVar3;
  sub_080B0ACC(&local_28,&DAT_08343a3c,0,uVar1);
  local_28 = *(int *)(param_1 + 0x54) + uVar3;
  local_24 = *(int *)(param_1 + 0x58) - uVar3;
  sub_080B0ACC(&local_28,&DAT_08343a58,0,uVar2);
  sub_080032EC(0x3f);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

