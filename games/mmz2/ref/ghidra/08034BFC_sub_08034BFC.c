// sub_08034BFC at 0x08034BFC (thumb)

undefined8 sub_08034BFC(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x1fc) == '\b') ||
     ((1 < *(byte *)(param_1 + 0x176) && (*(char *)(param_1 + 0x2b6) == '\x01')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}

