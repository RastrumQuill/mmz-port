// sub_080997FC at 0x080997FC (thumb)

undefined4 sub_080997FC(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if ((DAT_02022ae1 & 8) == 0) {
    uVar1 = DAT_02022ae1 & 0x10;
    if ((DAT_02022ae1 & 0x10) != 0) {
      uVar1 = *(int *)(param_1 + 0x4c) + 0x180;
    }
  }
  else {
    uVar1 = *(int *)(param_1 + 0x4c) - 0x180;
  }
  *(uint *)(param_1 + 0x4c) = uVar1;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

