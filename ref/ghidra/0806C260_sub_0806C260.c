// sub_0806C260 at 0x0806C260 (thumb)

undefined4 sub_0806C260(int param_1)

{
  undefined4 in_lr;
  
  if ((DAT_02022ae0 & 0x10) == 0) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0e28 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

