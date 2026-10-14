// sub_080224E4 at 0x080224E4 (thumb)

undefined4 sub_080224E4(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  pbVar2 = (byte *)(param_1 + 0x121);
  bVar1 = *pbVar2;
  *pbVar2 = (byte)(bVar1 - 1);
  if (bVar1 - 1 == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
    sub_08018C20(param_1,0x19,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *pbVar2 = 8;
    sub_08027188(param_1,3,0);
  }
  return in_lr;
}

