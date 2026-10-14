// sub_080FEA08 at 0x080FEA08 (thumb)

undefined4 sub_080FEA08(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_08002B10(0x1c6);
  iVar1 = param_1 + 0x54;
  sub_080D4898(iVar1,&DAT_08867f58,0,0);
  sub_080D4898(iVar1,&DAT_08867f74,0,0);
  sub_080D4898(iVar1,&DAT_08867f90,0,0);
  sub_080D4898(iVar1,&DAT_08867fac,0,0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

