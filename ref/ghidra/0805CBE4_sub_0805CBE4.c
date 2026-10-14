// sub_0805CBE4 at 0x0805CBE4 (thumb)

undefined4 sub_0805CBE4(int param_1)

{
  undefined4 in_lr;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) || ((DAT_02022b64 & 8) == 0)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0044 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

