// sub_0807DFC4 at 0x0807DFC4 (thumb)

undefined4 sub_0807DFC4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  
  sub_0801749C();
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 6;
  sub_0800736C(param_1 + 0x74,&DAT_08364560,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x40;
  *(undefined4 *)(param_1 + 0x98) = 0x807f9fd;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(*(int *)(param_1 + 0x28) + 0x1c);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4 & 1;
    if (bVar1 == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined *)(param_1 + 0xb9) = 0;
  *(undefined *)(param_1 + 0xb8) = *(undefined *)(param_1 + 0x11);
  *(undefined *)(param_1 + 0xbb) = 0;
  *(undefined *)(param_1 + 0xc1) = 0;
  *(undefined *)(param_1 + 0xc2) = 0;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 2;
  }
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  iVar3 = sub_08063614(param_1);
  if (iVar3 != 0) {
    sub_08017700(param_1,0xab1b);
    sub_080177F4(param_1);
  }
  sub_0807E0E0(param_1);
  return in_lr;
}

