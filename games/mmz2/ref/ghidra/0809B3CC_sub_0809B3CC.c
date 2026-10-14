// sub_0809B3CC at 0x0809B3CC (thumb)

undefined4 sub_0809B3CC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined *)(param_1 + 0x22) = 1;
  sub_0801260C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x1520);
  sub_080128D4(param_1);
  uVar4 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar4 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08343740,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  *(undefined *)(param_1 + 0xbd) = 0;
  pbVar5 = (byte *)(param_1 + 0xbe);
  *pbVar5 = (&DAT_08343770)
            [(*(byte *)(param_1 + 0x11) & 1) + (uint)(*(byte *)(param_1 + 0x11) >> 4) * 2];
  *(int *)(param_1 + 0x5c) = (int)(short)(&DAT_080ef450)[*pbVar5 + 0x40 & 0xff] << 2;
  *(int *)(param_1 + 0x60) = (int)(short)(&DAT_080ef450)[*pbVar5] << 2;
  *(undefined *)(param_1 + 0x12) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 4);
  sub_0809B23C(param_1);
  return in_lr;
}

