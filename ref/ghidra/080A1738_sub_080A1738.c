// sub_080A1738 at 0x080A1738 (thumb)

undefined4 sub_080A1738(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((DAT_0200520c & 0x7f) == 3) {
    if (0x3c000 < *(int *)(param_1 + 0x4c) - *(int *)(DAT_0202286c + 0x4c)) {
      iVar1 = (int)*(short *)(param_1 + 0xc4);
      if (iVar1 != -1) {
        sub_08001EE8(iVar1);
        *(short *)(param_1 + 0xc4) = -1;
      }
    }
    *(undefined *)(param_1 + 0xd) = 0;
    if ((DAT_02022ae1 & 0x20) != 0) {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    if ((DAT_02022ae1 & 0x40) != 0) {
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
    }
    if (*(char *)(param_1 + 0xd) != *(char *)(param_1 + 0xf)) {
      *(undefined *)(param_1 + 0xe) = 1;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xd);
    sub_080C8A98(param_1,*(undefined4 *)(&UNK_082b5994 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

