// sub_08022534 at 0x08022534 (thumb)

void sub_08022534(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)(param_1 + 0x121);
  bVar1 = *pbVar2;
  *pbVar2 = (byte)(bVar1 - 1);
  if (bVar1 - 1 == 0) {
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 3;
    *pbVar2 = 6;
  }
  return;
}

