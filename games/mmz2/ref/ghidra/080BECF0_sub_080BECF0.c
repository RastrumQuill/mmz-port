// sub_080BECF0 at 0x080BECF0 (thumb)

/* WARNING: Removing unreachable block (ram,0x080bed18) */

undefined4 sub_080BECF0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x74) + (short)(&DAT_080ef450)[(*(byte *)(param_1 + 0x12) & 0x3f) * 4] * 2
  ;
  iVar1 = *(byte *)(param_1 + 0x12) + 1;
  *(char *)(param_1 + 0x12) = (char)iVar1 + (char)(iVar1 >> 6) * -0x40;
  return in_lr;
}

