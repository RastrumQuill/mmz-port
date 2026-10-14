// sub_080CD4A0 at 0x080CD4A0 (thumb)

undefined4 sub_080CD4A0(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x10) < 2) {
    sub_080CD4D4(param_1);
  }
  else {
    sub_080CD544(param_1);
  }
  return in_lr;
}

