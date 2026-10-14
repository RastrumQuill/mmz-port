// sub_080BB094 at 0x080BB094 (thumb)

undefined4 sub_080BB094(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)
           ((uint)*(byte *)(param_1 + 0x12) * 8 +
           *(int *)(&DAT_082b7830 + (uint)*(byte *)(param_1 + 0x11) * 4));
  *(undefined4 *)(param_1 + 0x4c) = *puVar1;
  *(undefined4 *)(param_1 + 0x50) = puVar1[1];
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b8c18 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

