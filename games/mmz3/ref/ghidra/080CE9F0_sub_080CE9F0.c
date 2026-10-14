// sub_080CE9F0 at 0x080CE9F0 (thumb)

undefined4 sub_080CE9F0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    sub_080177F4(param_1);
    if (*(int *)(param_1 + 0x60) < 0x700) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x20;
    }
    iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar1;
    *(int *)(param_1 + 0x68) = iVar1;
    uVar2 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
    if (0x3000 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined4 *)(param_1 + 0xc) = 4;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
    }
  }
  return in_lr;
}

