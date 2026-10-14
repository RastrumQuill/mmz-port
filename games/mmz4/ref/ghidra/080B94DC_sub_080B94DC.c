// sub_080B94DC at 0x080B94DC (thumb)

undefined4 sub_080B94DC(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    sub_08128884(param_1,*(undefined4 *)(&DAT_08860efc + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    sub_080B9988(param_1);
  }
  cVar1 = sub_080B9A34(param_1);
  if (cVar1 != '\0') {
    sub_080E6230(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined *)(param_1 + 0x13) = 0x1e;
  }
  cVar1 = sub_080B9A74(param_1);
  if (cVar1 != '\0') {
    *(uint *)(*(int *)(param_1 + 0x2c) + 0xdf0) =
         *(uint *)(*(int *)(param_1 + 0x2c) + 0xdf0) & 0xfffffffe | 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_08002B10(0x1a2);
  }
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0xdf0) & 4) != 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_0801CFF0(param_1);
  return in_lr;
}

