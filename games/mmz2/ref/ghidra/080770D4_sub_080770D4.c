// sub_080770D4 at 0x080770D4 (thumb)

undefined4 sub_080770D4(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x13);
  local_18 = *(int *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + -0xc00;
  sub_080032EC(0x2a);
  uVar3 = (uint)bVar2 | (bVar1 >> 4 & 1) << 4;
  sub_080B0ACC(&local_18,&DAT_0833fb78,0,uVar3);
  sub_080B0ACC(&local_18,&DAT_0833fb94,0,uVar3);
  sub_080B0ACC(&local_18,&DAT_0833fbb0,0,uVar3);
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  local_18 = local_18 + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  local_14 = local_14 + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
  sub_080AC60C(1,&local_18);
  return in_lr;
}

