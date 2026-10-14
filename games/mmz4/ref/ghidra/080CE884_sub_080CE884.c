// sub_080CE884 at 0x080CE884 (thumb)

undefined4 sub_080CE884(int param_1)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  byte abStack_28 [4];
  char acStack_24 [8];
  undefined4 uStack_4;
  
  sub_08128B5C(abStack_28,&DAT_08129b28,3);
  sub_08128B5C(acStack_24,&DAT_08129b2b,8);
  pbVar5 = (byte *)(param_1 + 0xb4);
  bVar1 = *pbVar5;
  bVar2 = *(byte *)(param_1 + 0x10);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x100,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    sub_080CE824(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 1,*pbVar5);
    sub_080CE824(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 2,*pbVar5);
  }
  uStack_4 = in_lr;
  abStack_28[*(byte *)(param_1 + 0x11)] =
       acStack_24[(uint)bVar1 * 4 + (uint)bVar2 & 0xff] + abStack_28[*(byte *)(param_1 + 0x11)];
  *(int *)(param_1 + 0x5c) =
       *(short *)((int)&DAT_08128c10 +
                 ((abStack_28[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >> 0x17)) * 3;
  sVar3 = (&DAT_08128c10)[abStack_28[*(byte *)(param_1 + 0x11)]];
  *(int *)(param_1 + 0x60) = sVar3 * 3;
  iVar4 = sVar3 * -0x300;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  *(undefined *)(param_1 + 0x12) = 0xb4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,&DAT_088636f8,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  sub_080CE9B0(param_1);
  return uStack_4;
}

