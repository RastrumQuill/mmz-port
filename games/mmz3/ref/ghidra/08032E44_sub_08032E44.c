// sub_08032E44 at 0x08032E44 (thumb)

undefined8 sub_08032E44(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x11d) == 0) {
    iVar1 = 0x700;
  }
  else {
    iVar1 = (0x100 - (uint)*(byte *)(param_1 + 0x11d)) * 7;
  }
  return CONCAT44(in_lr,iVar1);
}

