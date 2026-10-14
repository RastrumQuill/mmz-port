// sub_0809EBB4 at 0x0809EBB4 (thumb)

undefined4 sub_0809EBB4(int param_1)

{
  undefined4 in_lr;
  
  if ((1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) &&
     (*(char *)(*(int *)(param_1 + 0x20) + 0x10) != '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b5588 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

