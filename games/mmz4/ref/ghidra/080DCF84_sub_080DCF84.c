// sub_080DCF84 at 0x080DCF84 (thumb)

undefined4 sub_080DCF84(int param_1)

{
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\x11')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_0801CF00(param_1,0x3d03);
    }
    else {
      sub_0801CF00(param_1,0x3d05);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  sub_0801CFF0(param_1);
  if ((*(char *)(param_1 + 0xd) == '\x01') && (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DC9FC(param_1);
  }
  return in_lr;
}

