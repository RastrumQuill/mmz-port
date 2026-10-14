// sub_080CA1EC at 0x080CA1EC (thumb)

undefined4 sub_080CA1EC(int param_1)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_0801CC9C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,*(undefined2 *)(&DAT_08862e88 + (uint)*(byte *)(param_1 + 0x11) * 2));
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08005760(param_1 + 0x74,
               &UNK_08862d98 + (uint)(byte)(&DAT_08862e90)[*(byte *)(param_1 + 0x11)] * 0x18,
               param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) + *(int *)(&DAT_08862e58 + (uint)*(byte *)(param_1 + 0x11) * 4);
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 +
                   ((uint)((-0x40 - *(int *)(&DAT_08862e78 + (uint)*(byte *)(param_1 + 0x11) * 4)) *
                          0x1000000) >> 0x17)) * 6;
    sVar2 = *(short *)((int)&DAT_08128c10 +
                      ((uint)((-0x80 - *(int *)(&DAT_08862e78 + (uint)*(byte *)(param_1 + 0x11) * 4)
                              ) * 0x1000000) >> 0x17));
  }
  else {
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0x54) - *(int *)(&DAT_08862e58 + (uint)*(byte *)(param_1 + 0x11) * 4);
    *(int *)(param_1 + 0x5c) =
         *(short *)((int)&DAT_08128c10 +
                   ((uint)((*(int *)(&DAT_08862e78 + (uint)*(byte *)(param_1 + 0x11) * 4) + 0x40) *
                          0x1000000) >> 0x17)) * 6;
    sVar2 = (&DAT_08128c10)[(byte)(&DAT_08862e78)[(uint)*(byte *)(param_1 + 0x11) * 4]];
  }
  *(int *)(param_1 + 0x60) = sVar2 * 6;
  bVar1 = (&DAT_08862e94)[*(byte *)(param_1 + 0x11)];
  if (bVar1 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar3;
  uVar4 = bVar1 & 1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | (byte)(uVar4 << 5);
  *(int *)(param_1 + 0x58) =
       *(int *)(param_1 + 0x58) + *(int *)(&DAT_08862e68 + (uint)*(byte *)(param_1 + 0x11) * 4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 4);
  sub_080CA18C(param_1);
  return in_lr;
}

