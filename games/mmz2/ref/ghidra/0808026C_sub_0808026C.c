// sub_0808026C at 0x0808026C (thumb)

undefined4 sub_0808026C(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0x10) * '\x02' + -1;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0xc0) = 0x80;
  *(undefined *)(param_1 + 0xba) = 1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar1 = param_1 + 0x54;
  sub_08006DE4(param_1 + 0x74,&DAT_08340bd4,iVar1,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8080a05;
  *(undefined4 *)(param_1 + 0x9c) = 0x8080a31;
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(DAT_0202e130 + 0x54) < *(int *)(param_1 + 0x54)) {
      sub_0801DD2C(0,iVar1);
    }
  }
  else if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
    sub_0801DD2C(7,iVar1);
  }
  sub_08080368(param_1);
  return in_lr;
}

