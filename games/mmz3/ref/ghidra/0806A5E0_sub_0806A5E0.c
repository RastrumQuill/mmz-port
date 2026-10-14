// sub_0806A5E0 at 0x0806A5E0 (thumb)

undefined4 sub_0806A5E0(int param_1)

{
  byte *pbVar1;
  undefined4 in_lr;
  
  sub_080175BC();
  *(undefined *)(param_1 + 0x24) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  pbVar1 = (byte *)(param_1 + 0x4a);
  *pbVar1 = *pbVar1 & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 6;
  sub_0800736C(param_1 + 0x74,&DAT_08362bf8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x806bcc1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffed00;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffc600;
  }
  else {
    *(undefined *)(param_1 + 0x25) = 0x17;
    *(undefined4 *)(param_1 + 0xb4) = 0x1500;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffc800;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xdf;
    *(undefined *)(param_1 + 0x4d) = 0;
    *pbVar1 = *pbVar1 & 0xdf;
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined *)(param_1 + 0x1d) = *(undefined *)(*(int *)(param_1 + 0x28) + 0x1c);
  sub_0806A6E8(param_1);
  return in_lr;
}

