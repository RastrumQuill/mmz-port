// sub_0806C2A4 at 0x0806C2A4 (thumb)

undefined4 sub_0806C2A4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0e48 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 4;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

