// sub_080A74EC at 0x080A74EC (thumb)

undefined4 sub_080A74EC(int param_1)

{
  undefined4 in_lr;
  
  if (((*(char *)(param_1 + 0x10) == '\0') || (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2)) ||
     (*(char *)(*(int *)(param_1 + 0x24) + 0x10) != '\0')) {
    if ((*(ushort *)(param_1 + 0x90) & 0x40) == 0) {
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b61f8 + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080C8A98(param_1,*(undefined4 *)(&DAT_082b6210 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
      sub_080A75A4(param_1);
    }
  }
  else {
    do {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      param_1 = *(int *)(param_1 + 0x20);
    } while (param_1 != 0);
  }
  return in_lr;
}

