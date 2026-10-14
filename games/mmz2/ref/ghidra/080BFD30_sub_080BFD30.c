// sub_080BFD30 at 0x080BFD30 (thumb)

undefined4 sub_080BFD30(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((byte)(*(char *)(param_1 + 0x10) - 1U) < 6) {
      sub_080127E4(param_1,0x1d02);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  if (*(char *)(iVar1 + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0834863c + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

