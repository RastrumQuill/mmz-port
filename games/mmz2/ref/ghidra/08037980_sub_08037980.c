// sub_08037980 at 0x08037980 (thumb)

undefined8 sub_08037980(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 8) == '\0') && ((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20700)) {
    uVar1 = *(undefined4 *)
             (*(char *)(param_1 + 0x71) * 4 +
             *(int *)(&DAT_08335774 + (uint)*(byte *)(param_1 + 0x17f) * 4));
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(in_lr,uVar1);
}

