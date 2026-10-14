// sub_0802BB34 at 0x0802BB34 (thumb)

undefined4 sub_0802BB34(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x2b9);
  bVar1 = *pbVar2;
  *pbVar2 = (byte)(bVar1 - 1);
  if (bVar1 - 1 == 0) {
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 2;
    sub_0801EA38(param_1,0x36,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *pbVar2 = 8;
    sub_08033A1C(param_1,1,0,0,8,*(undefined *)(param_1 + 0x215),0);
  }
  return in_lr;
}

