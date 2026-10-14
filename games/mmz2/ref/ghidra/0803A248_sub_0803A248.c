// sub_0803A248 at 0x0803A248 (thumb)

undefined4 sub_0803A248(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xb4);
  if ((((iVar1 != 0) && (*(byte *)(iVar1 + 0xc) < 2)) &&
      ((ushort)*(byte *)(iVar1 + 0x1c) == *(ushort *)(param_1 + 0x68))) &&
     (*(int *)(param_1 + 0xb8) != 0)) {
    sub_080EF124(iVar1,0,0,0);
    *(int *)(param_1 + 0xb8) = 0;
  }
  return in_lr;
}

