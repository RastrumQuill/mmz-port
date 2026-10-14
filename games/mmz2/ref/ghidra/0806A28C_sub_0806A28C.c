// sub_0806A28C at 0x0806A28C (thumb)

undefined4 sub_0806A28C(int param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  sub_08006DE4(param_1 + 0x74,&DAT_0833e2b0,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x806b195;
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202e130 + 0x54)) {
    sub_080127E4(param_1,0xa0a);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    *(undefined *)(param_1 + 0xc0) = 1;
  }
  else {
    sub_080127E4(param_1,0xa00);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(undefined *)(param_1 + 0xc0) = 0;
  }
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0xb7) = 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    pbVar2 = (byte *)(param_1 + 0xb6);
    *pbVar2 = 0xc0;
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0x58) + 0x1000;
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb8) + (short)(&DAT_080ef450)[*pbVar2 + 0x40 & 0xff] * 0x10;
    iVar1 = (int)(short)(&DAT_080ef450)[*pbVar2] << 4;
  }
  else {
    *(int *)(param_1 + 0xb8) = *(int *)(*(int *)(param_1 + 0x28) + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb8) +
         (short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb6) + 0x40 & 0xff] * 0x18;
    iVar1 = (short)(&DAT_080ef450)[*(byte *)(param_1 + 0xb6)] * 0x18;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + iVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0806A420(param_1);
  return in_lr;
}

