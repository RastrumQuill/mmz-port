// sub_081072F0 at 0x081072F0 (thumb)

undefined4 sub_081072F0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_0801CF00(param_1,0xf600);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x3200;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x5a00;
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0xe34) == 0xff) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    *(undefined *)(param_1 + 0x22) = *(undefined *)(param_1 + 0x11);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_08868eec,param_1 + 0x54,0x80);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x81076c5;
    if (*(char *)(param_1 + 0x10) == '\0') {
      iVar1 = *(int *)(param_1 + 0x54) + -0x3000;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54) + 0x3000;
    }
    *(int *)(param_1 + 0x54) = iVar1;
    if (*(int *)(param_1 + 0x28) == 0) {
      *(undefined *)(param_1 + 0xb5) = 0;
      sub_0801CF00(param_1,0xf600);
    }
    else {
      *(char *)(param_1 + 0xb5) = *(char *)(*(int *)(param_1 + 0x28) + 0xb5) + '\x01';
      sub_0801CFC8(param_1,0xf600,(short)*(char *)(*(int *)(param_1 + 0x28) + 0x71),
                   (short)*(char *)(*(int *)(param_1 + 0x28) + 0x72));
    }
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0xe08) == 0) {
      iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),
                           *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xdc8));
      *(uint *)(param_1 + 0x58) = iVar1 + (uint)*(byte *)(param_1 + 0xb5) * -0x1800 + -0xc00;
      *(undefined *)(param_1 + 0xd) = 0;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
    *(undefined *)(param_1 + 0xb4) = 0;
    *(undefined *)(param_1 + 0xb6) = 0;
    *(undefined *)(param_1 + 0xb7) = 0;
  }
  return in_lr;
}

