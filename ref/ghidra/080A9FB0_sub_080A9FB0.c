// sub_080A9FB0 at 0x080A9FB0 (thumb)

undefined4 sub_080A9FB0(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x11) == '\0') || (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2)) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b6498 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

