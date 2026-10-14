// sub_080DCB20 at 0x080DCB20 (thumb)

undefined4 sub_080DCB20(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)
           ((uint)*(byte *)(param_1 + 0x12) * 8 +
           *(int *)(&DAT_0834ab24 + (uint)*(byte *)(param_1 + 0x11) * 4));
  *(undefined4 *)(param_1 + 0x54) = *puVar1;
  *(undefined4 *)(param_1 + 0x58) = puVar1[1];
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c0a4 + (uint)*(byte *)(param_1 + 0x10) * 4));
  return in_lr;
}

