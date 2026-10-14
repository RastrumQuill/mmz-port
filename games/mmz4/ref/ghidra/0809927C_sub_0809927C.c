// sub_0809927C at 0x0809927C (thumb)

undefined4 sub_0809927C(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(undefined4 *)(param_1 + 0x58);
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080D4898(&local_18,&DAT_0885d79c,0,bVar1);
  bVar1 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  sub_080D4898(&local_18,&DAT_0885d7d4,0,bVar1);
  sub_080D0894(1,&local_18);
  sub_08002B10(0x2a);
  sub_0802AB70(3,0x2d,param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

