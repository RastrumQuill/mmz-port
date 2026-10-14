// sub_080D3AAC at 0x080D3AAC (thumb)

undefined4 sub_080D3AAC(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  pbVar1 = (byte *)(*(int *)(param_1 + 0x28) + 0x142);
  *pbVar1 = *pbVar1 & 0xfb;
  sub_080D083C();
  return in_lr;
}

