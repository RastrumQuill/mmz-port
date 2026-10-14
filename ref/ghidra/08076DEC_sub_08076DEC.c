// sub_08076DEC at 0x08076DEC (thumb)

undefined4 sub_08076DEC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = (uint)DAT_02022ae0;
  if ((DAT_02022ae0 & 0x10) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    *(uint *)(param_1 + 0x90) = uVar2 & 0x10;
    *(char *)(param_1 + 0x94) = (char)(uVar2 & 0x10);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar1 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar1 = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return in_lr;
}

