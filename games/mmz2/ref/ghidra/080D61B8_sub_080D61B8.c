// sub_080D61B8 at 0x080D61B8 (thumb)

undefined8 sub_080D61B8(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  pbVar3 = (byte *)(param_1 + 0x283);
  bVar1 = *pbVar3;
  bVar2 = *(byte *)(param_1 + 0x284);
  *(byte *)(param_1 + 0x284) = 0;
  *pbVar3 = *(char *)(param_1 + 0x285) + *pbVar3;
  *(char *)(param_1 + 0x285) = '\0';
  return CONCAT44(in_lr,(uint)bVar1 + (uint)bVar2);
}

