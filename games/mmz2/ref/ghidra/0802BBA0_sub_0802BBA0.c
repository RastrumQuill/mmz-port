// sub_0802BBA0 at 0x0802BBA0 (thumb)

undefined4 sub_0802BBA0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x2b9);
  bVar1 = *pbVar2;
  *pbVar2 = (byte)(bVar1 - 1);
  if (bVar1 - 1 == 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 3;
    *pbVar2 = 6;
  }
  return in_lr;
}

