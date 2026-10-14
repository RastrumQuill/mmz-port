// sub_08019124 at 0x08019124 (thumb)

undefined4 sub_08019124(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 8) == '\0') && ((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20600)) {
    uVar1 = *(undefined4 *)
             (*(char *)(param_1 + 0x71) * 4 +
             *(int *)(&DAT_082a94ac + (uint)*(byte *)(param_1 + 0x115) * 4));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

