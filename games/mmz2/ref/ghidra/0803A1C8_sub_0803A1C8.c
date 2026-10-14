// sub_0803A1C8 at 0x0803A1C8 (thumb)

undefined8 sub_0803A1C8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if (((*(char *)(param_1 + 0x10) == '\0') && (*(int *)(param_1 + 0xb4) == 0)) &&
     (*(char *)(*(int *)(param_1 + 0x28) + 0x2b8) != '\0')) {
    uVar1 = (uint)(byte)(&DAT_0833651c)[*(byte *)(*(int *)(param_1 + 0x28) + 0x178)];
  }
  if (uVar1 != *(byte *)(param_1 + 0x13)) {
    *(char *)(param_1 + 0x13) = (char)uVar1;
  }
  return CONCAT44(in_lr,uVar1);
}

