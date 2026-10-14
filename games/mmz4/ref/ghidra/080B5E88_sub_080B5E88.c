// sub_080B5E88 at 0x080B5E88 (thumb)

undefined4 sub_080B5E88(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    if (((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) &&
        ((*(uint *)(param_1 + 0x8c) & 0x200) == 0)) &&
       ((*(byte *)(*(int *)(param_1 + 0x28) + 0xbf) & 1) == 0)) {
      sub_08128884(param_1,*(undefined4 *)(&DAT_08860604 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  sub_080B5FF4(param_1);
  return in_lr;
}

