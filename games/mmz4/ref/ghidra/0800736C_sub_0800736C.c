// sub_0800736C at 0x0800736C (thumb)

undefined4 sub_0800736C(int param_1,int param_2,short *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 in_lr;
  
  uVar2 = (uint)*(byte *)(*(int *)(*(int *)(&DAT_08829090 +
                                           (uint)(DAT_0202cac0 >> 4) * 4 +
                                           ((byte)DAT_02000c80 & 0x7f) * 8) + 0xc) + 2);
  iVar1 = (int)param_3[3];
  puVar4 = &DAT_02001294 + (uVar2 * 0xf * (param_2 + iVar1) + param_1) * 2;
  puVar5 = &DAT_02001294 + (uVar2 * 0xf * (param_3[1] + iVar1) + (int)*param_3) * 2;
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      puVar4 = puVar4 + uVar2 * -0x1e;
      puVar5 = puVar5 + uVar2 * -0x1e;
      sub_08000B30(puVar5,puVar4,(int)param_3[2] << 1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3[3]);
  }
  DAT_0202cab0 = 1;
  return in_lr;
}

