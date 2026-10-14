// sub_080A83E0 at 0x080A83E0 (thumb)

undefined4 sub_080A83E0(int param_1)

{
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x20) + 0xc) < 2) {
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b6308 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    sub_080A7F38(param_1);
  }
  return in_lr;
}

