// sub_080BB0E0 at 0x080BB0E0 (thumb)

undefined8 sub_080BB0E0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8c28 + (uint)*(byte *)(param_1 + 0x10) * 4))
  ;
  return CONCAT44(in_lr,(int)(short)(&DAT_080c8e24)[iVar1 * 0x10]);
}

