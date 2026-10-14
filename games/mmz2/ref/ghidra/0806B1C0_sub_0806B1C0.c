// sub_0806B1C0 at 0x0806B1C0 (thumb)

undefined4 sub_0806B1C0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((DAT_0202ebbd & 0x20) == 0) {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    if (*(char *)(param_1 + 0x11) == '\0') {
      sub_080127E4(param_1,0x800);
    }
    else {
      sub_080127E4(param_1,0x808);
    }
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833e3d0,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x806c299;
    *(undefined4 *)(param_1 + 0x9c) = 0x806c2c5;
    uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined *)(param_1 + 0xbf) = 0;
    *(byte *)(param_1 + 0xbd) = *(char *)(param_1 + 0x11) + 1U & 1;
    *(undefined *)(param_1 + 0xc1) = 1;
    *(undefined *)(param_1 + 0xc2) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 4;
    sub_0806B2E0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

