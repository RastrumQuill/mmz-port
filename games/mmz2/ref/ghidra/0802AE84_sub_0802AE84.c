// sub_0802AE84 at 0x0802AE84 (thumb)

undefined4 sub_0802AE84(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x179);
  bVar1 = *pbVar2;
  *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
  *(undefined *)(param_1 + 0x178) = 6;
  *(byte *)(param_1 + 0x17d) = *pbVar2;
  *pbVar2 = bVar1;
  *(undefined *)(param_1 + 0x2b7) = 0x80;
  sub_0801E6AC(0x11);
  sub_080EF118(param_1,(&DAT_08333d34)[bVar1]);
  return in_lr;
}

