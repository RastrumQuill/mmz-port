// sub_080716F0 at 0x080716F0 (thumb)

undefined4 sub_080716F0(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x13);
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(int *)(param_1 + 0x58) + -0x1000;
  uVar3 = 0;
  do {
    sub_080B0ACC(&local_14,&UNK_0833ee28 + (uVar3 & 3) * 0x1c,0,(uint)bVar2 | (bVar1 >> 4 & 1) << 4)
    ;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 8);
  return in_lr;
}

