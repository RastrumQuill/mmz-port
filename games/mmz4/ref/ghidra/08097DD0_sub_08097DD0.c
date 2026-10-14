// sub_08097DD0 at 0x08097DD0 (thumb)

undefined4 sub_08097DD0(int param_1)

{
  uint uVar1;
  byte *pbVar2;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = *(undefined4 *)(param_1 + 0x54);
  local_1c = *(undefined4 *)(param_1 + 0x58);
  uVar1 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar1 & 0x7fffffff;
  pbVar2 = (byte *)(param_1 + 0xbc);
  sub_080D4898(&local_20,&DAT_0885d5c0,0,(uVar1 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar2);
  sub_080D4898(&local_20,&DAT_0885d5dc,0,*pbVar2);
  sub_080D4898(&local_20,&DAT_0885d5dc,0,*pbVar2 | 0x10);
  sub_080D4898(&local_20,&DAT_0885d5f8,0,*pbVar2 | 0x10);
  sub_080D0894(1,&local_20);
  sub_08002B10(0x2a);
  sub_0802AB70(2,0x27,param_1 + 0x54);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

