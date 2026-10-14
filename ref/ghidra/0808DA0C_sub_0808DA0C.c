// sub_0808DA0C at 0x0808DA0C (thumb)

undefined4 sub_0808DA0C(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  short asStack_140 [126];
  undefined auStack_44 [4];
  short asStack_40 [8];
  short local_30 [4];
  undefined2 local_28;
  undefined2 local_26;
  ushort local_24;
  ushort local_22;
  
  sub_080C8D70(auStack_44,&DAT_080c9400,2);
  local_30[0] = 0x2c0;
  local_30[1] = 0x2c0;
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  local_30[2] = -((ushort)(uVar2 * 2 >> 0x11) & 0x1ff);
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  local_30[3] = -((ushort)(uVar2 * 2 >> 0x11) & 0x1ff);
  local_28 = 0xfd40;
  local_26 = 0xfd40;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  local_24 = (ushort)(uVar2 * 2 >> 0x11) & 0x1ff;
  uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  local_22 = (ushort)(uVar2 * 2 >> 0x11) & 0x1ff;
  sub_080C8D70(asStack_40,local_30,0x10);
  sub_080C8D70(local_30,&DAT_080c9402,4);
  sub_08088120(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,auStack_44[*(byte *)(param_1 + 0x78) & 1]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0x11) == '\0') {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(int *)(param_1 + 0x54) =
       (int)asStack_40[(uint)*(byte *)(param_1 + 0x11) * 4 + (int)*(char *)(param_1 + 0x78)];
  uVar2 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar2 & 0x7fffffff;
  *(uint *)(param_1 + 0x58) =
       ((uint)*(byte *)((int)local_30 + (int)*(char *)(param_1 + 0x78)) + (uVar2 * 2 >> 0x11 & 0xf))
       * -0x40;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808D910(param_1);
  return in_lr;
}

