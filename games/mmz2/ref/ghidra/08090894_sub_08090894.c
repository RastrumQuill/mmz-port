// sub_08090894 at 0x08090894 (thumb)

undefined4 sub_08090894(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
    sub_08012580(param_1);
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    sub_080127E4(param_1,0x8e02);
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083422c0,param_1 + 0x54,0xc);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8091355;
    uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080126A0(param_1);
    *(undefined *)(param_1 + 0x24) = 0;
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(undefined2 *)(param_1 + 0x52) = 0x80;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    sub_080127E4(param_1,0x8e03);
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_083422f0,param_1 + 0x54,0x10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x200;
    *(undefined4 *)(param_1 + 0x60) = 0xfffffd80;
    *(undefined2 *)(param_1 + 0xb4) = 0x80;
    *(char *)(param_1 + 0xb8) = *(char *)(param_1 + 0x11) * '\x02' + -1;
    *(undefined2 *)(param_1 + 0xb6) = 0;
    *(undefined *)(param_1 + 0xb9) = 1;
    *(undefined *)(param_1 + 0x12) = 8;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08090A20(param_1);
  return in_lr;
}

