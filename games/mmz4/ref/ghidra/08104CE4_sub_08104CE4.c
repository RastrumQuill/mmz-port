// sub_08104CE4 at 0x08104CE4 (thumb)

undefined4 sub_08104CE4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xb4) == '\x01') && (*(char *)(param_1 + 0x11) != '\x04')) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(iVar1 + 0xdd4) =
         *(int *)(iVar1 + 0xdd4) +
         (6 - *(int *)(iVar1 + 0xdf4)) * (uint)(byte)(&DAT_08868cca)[*(byte *)(param_1 + 0x11)];
    if (*(byte *)(param_1 + 0x11) < 2) {
      sub_08002B10(0x20);
    }
    else if (*(byte *)(param_1 + 0x11) == 2) {
      sub_08002B10(0x1a4);
    }
    else {
      sub_08002B10(6);
    }
    iVar1 = *(int *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0xdf8) = 1;
    *(undefined4 *)(iVar1 + 0xdfc) = 0x1e;
    *(int *)(iVar1 + 0xdf4) = *(int *)(iVar1 + 0xdf4) + -1;
  }
  *(uint *)(*(int *)(param_1 + 0x28) + 0xdf0) =
       *(uint *)(*(int *)(param_1 + 0x28) + 0xdf0) & ~(1 << *(sbyte *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

