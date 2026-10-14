// sub_0806BF20 at 0x0806BF20 (thumb)

undefined4 sub_0806BF20(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 & 0xfe;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1000;
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((bVar3 & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080B0ACC(&local_1c,&DAT_0833e460,0,bVar2);
  pbVar1 = (byte *)(param_1 + 0xbc);
  bVar3 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080B0ACC(&local_1c,&DAT_0833e47c,0,bVar3);
  bVar3 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080B0ACC(&local_1c,&DAT_0833e498,0,bVar3);
  bVar3 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080B0ACC(&local_1c,&DAT_0833e4b4,0,bVar3);
  bVar3 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar3 = bVar3 | 0x10;
  }
  sub_080B0ACC(&local_1c,&DAT_0833e4d0,0,bVar3);
  sub_080AC60C(1,&local_1c);
  sub_080032EC(0x2a);
  sub_0801DD2C(4,param_1 + 0x54);
  if (DAT_0202ebfc < 9999) {
    DAT_0202ebfc = DAT_0202ebfc + 1;
  }
  sub_0801DE2C(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

