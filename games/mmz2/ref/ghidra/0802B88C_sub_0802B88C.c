// sub_0802B88C at 0x0802B88C (thumb)

undefined4 sub_0802B88C(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x2b9);
  bVar1 = *pbVar3;
  bVar2 = (byte)(bVar1 - 1);
  *pbVar3 = bVar2;
  if (bVar1 - 1 == 0) {
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 2;
    *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x178);
    *(byte *)(param_1 + 0x178) = bVar2;
    *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x179);
    *(byte *)(param_1 + 0x179) = bVar2;
    sub_0801EA38(param_1,0x18,(int)*(char *)(param_1 + 0x71),(int)*(char *)(param_1 + 0x72));
    *pbVar3 = 4;
  }
  return in_lr;
}

