// sub_08000D50 at 0x08000D50 (thumb)

undefined8 sub_08000D50(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  iVar2 = 0;
  do {
    bVar1 = *(byte *)(unaff_r5 + iVar2);
    *(byte *)(param_3 + unaff_r7) = bVar1;
    *(uint *)(unaff_r4 + 8) = *(int *)(unaff_r4 + 8) + (uint)bVar1;
    unaff_r7 = unaff_r7 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return CONCAT44(param_2,param_1);
}

