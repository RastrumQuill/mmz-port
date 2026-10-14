// sub_0802B034 at 0x0802B034 (thumb)

undefined4 sub_0802B034(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x179);
  bVar1 = *pbVar2;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 7;
  *(byte *)(param_1 + 0x17d) = *pbVar2;
  *pbVar2 = bVar1;
  if (DAT_0202ec19 != -1) {
    DAT_0202ec19 = DAT_0202ec19 + '\x01';
  }
  sub_080EF118(param_1,(&DAT_08333d4c)[bVar1]);
  return in_lr;
}

