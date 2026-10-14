// sub_080668F8 at 0x080668F8 (thumb)

undefined4 sub_080668F8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  uVar3 = DAT_0202ebbd & 0x20;
  if ((DAT_0202ebbd & 0x20) == 0) {
    sub_08012580(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    sub_080127E4(param_1,0x900);
    sub_080128D4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08006DE4(param_1 + 0x74,&DAT_0833dc5c,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x806768d;
    *(undefined4 *)(param_1 + 0x9c) = 0x80676b9;
    *(uint *)(param_1 + 0x60) = uVar3;
    *(uint *)(param_1 + 0x5c) = uVar3;
    uVar4 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar4;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(param_1 + 0xc0) = uVar3;
    if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
      *(undefined *)(param_1 + 0xbd) = 1;
    }
    else {
      *(char *)(param_1 + 0xbd) = (char)uVar3;
    }
    bVar1 = *(byte *)(param_1 + 0xbd);
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((bVar1 & 1) << 4);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(undefined *)(param_1 + 0xd) = 10;
    }
    else if (*(char *)(param_1 + 0x10) == '\0') {
      *(undefined *)(param_1 + 0xd) = 6;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0xf) = 7;
    }
    sub_08066A34(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

