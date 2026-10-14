// sub_0803C354 at 0x0803C354 (thumb)

undefined4 sub_0803C354(int param_1)

{
  undefined4 in_lr;
  
  if ((((*(ushort *)(param_1 + 0x90) & 0x40) == 0) && (*(short *)(param_1 + 0x8c) != 0)) ||
     ((DAT_02022b64 & 0x10) != 0)) {
    if (*(char *)(param_1 + 0xd) != '\0') {
      sub_0803D78C(param_1);
    }
    if ((*(ushort *)(param_1 + 0x90) & 1) != 0) {
      *(bool *)(param_1 + 0xcc) = *(int *)(param_1 + 0x4c) < *(int *)(DAT_0202286c + 0x4c);
      if ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x20) {
        *(undefined2 *)(param_1 + 0xe4) = 1;
        *(undefined *)(param_1 + 0xd) = 0x13;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      else {
        *(undefined2 *)(param_1 + 0xe4) = 0;
      }
    }
    sub_080C8A98(param_1,*(undefined4 *)(&DAT_082add64 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082acbf8 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xe) = 1;
    sub_0803C41C(param_1);
  }
  return in_lr;
}

