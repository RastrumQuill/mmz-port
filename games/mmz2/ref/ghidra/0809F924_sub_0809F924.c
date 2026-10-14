// sub_0809F924 at 0x0809F924 (thumb)

undefined4 sub_0809F924(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((*(char *)(param_1 + 0xb4) == '\0') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xb4) = '\x01';
    }
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08343ec8 + (uint)*(byte *)(param_1 + 0xd) * 4));
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08343eec + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

