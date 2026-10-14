// sub_080D58A8 at 0x080D58A8 (thumb)

undefined8 sub_080D58A8(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (param_2 - (uint)(byte)(&DAT_0834a5ac)[param_1 * 2] < (uint)(byte)(&DAT_0834a5ad)[param_1 * 2])
  {
    iVar1 = (int)((param_2 - (uint)(byte)(&DAT_0834a5ac)[param_1 * 2]) * 0x1000000) >> 0x18;
  }
  else {
    iVar1 = -1;
  }
  return CONCAT44(in_lr,iVar1);
}

