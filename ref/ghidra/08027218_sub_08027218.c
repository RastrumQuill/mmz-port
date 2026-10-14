// sub_08027218 at 0x08027218 (thumb)

undefined4 sub_08027218(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 9) == '\x01')) &&
     (((*(char *)(param_1 + 0x18a) != '\x01' && (*(char *)(param_1 + 0x18b) != '\x01')) ||
      ((9 < *(byte *)(iVar1 + 0x10) && (*(char *)(param_1 + 0x19d) != *(char *)(iVar1 + 0x54)))))))
  {
    *(undefined4 *)(iVar1 + 0xc) = 2;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((&DAT_082aa198)[*(byte *)(iVar1 + 9)] + 8);
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined *)(iVar1 + 0x94) = 0;
    *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfa;
    for (iVar1 = *(int *)(iVar1 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined *)(iVar1 + 0x94) = 0;
      *(byte *)(iVar1 + 10) = *(byte *)(iVar1 + 10) & 0xfb;
    }
  }
  return in_lr;
}

