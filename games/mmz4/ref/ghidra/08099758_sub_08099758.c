// sub_08099758 at 0x08099758 (thumb)

undefined4 sub_08099758(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  sub_0801CFF0();
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(int *)(param_1 + 0x58) + -0x1000;
  bVar2 = *(byte *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_1c,&DAT_0885d888,0,bVar2);
  pbVar1 = (byte *)(param_1 + 0xbc);
  bVar2 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_1c,&DAT_0885d8a4,0,bVar2);
  bVar2 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_1c,&DAT_0885d8c0,0,bVar2);
  bVar2 = *pbVar1;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  sub_080D4898(&local_1c,&DAT_0885d8dc,0,bVar2);
  sub_080D0894(1,&local_1c);
  sub_08002B10(0x2a);
  sub_0802AB70(3,0x1b,param_1 + 0x54);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

