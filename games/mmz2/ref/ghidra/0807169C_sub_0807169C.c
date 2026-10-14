// sub_0807169C at 0x0807169C (thumb)

undefined4 sub_0807169C(int param_1)

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
    sub_080B0ACC(&local_14,&UNK_0833edb8 + (uVar3 & 3) * 0x1c,0,(uint)bVar2 | (bVar1 >> 4 & 1) << 4)
    ;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 8);
  return in_lr;
}

