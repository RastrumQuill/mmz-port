// sub_08053E40 at 0x08053E40 (thumb)

undefined4 sub_08053E40(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082af730 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  return in_lr;
}

