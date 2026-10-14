// sub_080182C0 at 0x080182C0 (thumb)

undefined4 sub_080182C0(int param_1)

{
  undefined4 uVar1;
  
  if ((((*(byte *)(param_1 + 0xbe) < 3) || (*(char *)(param_1 + 0x11) != '\x02')) ||
      (*(char *)(param_1 + 0xc0) != '\x04')) ||
     ((*(char *)(param_1 + 0x11f) == '\0' || (*(char *)(param_1 + 0x121) == '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

