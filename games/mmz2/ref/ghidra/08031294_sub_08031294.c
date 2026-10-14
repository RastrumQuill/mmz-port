// sub_08031294 at 0x08031294 (thumb)

undefined4 sub_08031294(int param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 7 + (param_2 >> 3));
  bVar1 = *pbVar3;
  if (((int)(uint)bVar1 >> (param_2 & 7) & 1U) == 0) {
    bVar2 = *(byte *)(param_1 + 8);
    if (bVar2 < 2) {
      *pbVar3 = bVar1 | (byte)(1 << (param_2 & 7));
      *(byte *)(param_1 + 8) = bVar2 + 1;
      *(undefined *)(param_1 + 10 + (uint)bVar2) = 0;
    }
  }
  return in_lr;
}

