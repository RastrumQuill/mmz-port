// sub_08107460 at 0x08107460 (thumb)

undefined4 sub_08107460(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0xe34) == 0xff) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(undefined *)(param_1 + 0xb4) = 0;
    }
    else if (*(char *)(param_1 + 0xb4) == '\0') {
      sub_0801CC9C(param_1);
      *(char *)(param_1 + 0x22) = (char)*(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xe34);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_0801CF00(param_1,0xf600);
      *(char *)(param_1 + 0xb4) = '\x01';
    }
  }
  else if (*(int *)(*(int *)(param_1 + 0x2c) + 0xe08) != 0) {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08868ee4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0xe08) == 3) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

