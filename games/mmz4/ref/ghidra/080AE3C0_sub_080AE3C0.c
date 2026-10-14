// sub_080AE3C0 at 0x080AE3C0 (thumb)

undefined4 sub_080AE3C0(int param_1)

{
  short sVar1;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    sub_0801CF00(param_1,0xd500);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885fad0,param_1 + 0x54,0x12);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 +
                   (((byte)(&DAT_0885fb30)[*(byte *)(param_1 + 0x11)] + 0x40) * 0x1000000 >> 0x17))
         * 5 >> 2;
    sVar1 = (&DAT_08128c10)[(byte)(&DAT_0885fb30)[*(byte *)(param_1 + 0x11)]];
  }
  else {
    sub_0801CF00(param_1,0xd501);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_08005760(param_1 + 0x74,&DAT_0885fb00,param_1 + 0x54,9);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x11) + 0x40) * 0x1000000 >> 0x17)) *
         5 >> 2;
    sVar1 = (&DAT_08128c10)[*(byte *)(param_1 + 0x11)];
  }
  *(int *)(param_1 + 0x60) = sVar1 * 5 >> 2;
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = 0x80ae6a1;
  *(undefined *)(param_1 + 0x12) = 2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_080AE4F0(param_1);
  return in_lr;
}

