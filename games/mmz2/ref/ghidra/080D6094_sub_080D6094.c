// sub_080D6094 at 0x080D6094 (thumb)

undefined8 sub_080D6094(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = sub_080EF330(param_3,10);
  iVar2 = sub_080EF2B8(param_3,10);
  return CONCAT44(in_lr,(uint)*(byte *)(iVar2 * 10 + *(int *)(&DAT_0834a85c + param_2 * 4) + iVar1))
  ;
}

