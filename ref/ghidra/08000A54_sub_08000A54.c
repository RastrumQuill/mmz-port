// sub_08000A54 at 0x08000A54 (thumb)

undefined4 sub_08000A54(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 in_lr;
  bool bVar4;
  
  bVar4 = DAT_03000508 != 0;
  if (bVar4) {
    DAT_0300050c = DAT_03000500;
    sub_08000BE8(&DAT_03000500);
  }
  uVar3 = (ushort)bVar4;
  if (DAT_03000524 != 0) {
    DAT_03000528 = DAT_0300051c;
    sub_08000BE8(&DAT_0300051c);
    uVar3 = (ushort)((uint)bVar4 * 0x10000 + 0x20000 >> 0x10);
  }
  if ((short)uVar3 != 0) {
    uVar1 = DAT_04000004;
    DAT_04000004 = uVar1 | 0x10;
    uVar2 = DAT_04000004;
    DAT_03000384 = *(undefined4 *)(&UNK_08290bc4 + (short)uVar3 * 4);
    uVar3 = DAT_04000200._0_2_;
    DAT_04000200._0_2_ = uVar3 | 2;
    uVar2 = DAT_04000200._0_2_;
  }
  return in_lr;
}

