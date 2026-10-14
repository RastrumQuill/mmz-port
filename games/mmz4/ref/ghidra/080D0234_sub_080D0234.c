// sub_080D0234 at 0x080D0234 (thumb)

undefined4 sub_080D0234(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_0801CC9C();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  sub_08005760(param_1 + 0x74,&DAT_088639a8,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar2 = *(short *)((int)&DAT_08128c10 +
                    ((uint)*(byte *)(param_1 + 0x10) * 0x20000000 + 0x40000000 >> 0x17)) * 0x180;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  iVar2 = *(short *)((int)&DAT_08128c10 + (((uint)*(byte *)(param_1 + 0x10) << 0x1d) >> 0x17)) *
          0x180;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar2 >> 8;
  sub_0801CF00(param_1,1);
  sub_080D02DC(param_1);
  return in_lr;
}

