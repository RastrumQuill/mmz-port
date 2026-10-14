// sub_08064528 at 0x08064528 (thumb)

undefined4 sub_08064528(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b0854 + (uint)*(byte *)(param_1 + 0x10) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

