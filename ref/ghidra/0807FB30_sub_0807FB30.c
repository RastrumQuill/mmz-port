// sub_0807FB30 at 0x0807FB30 (thumb)

undefined4 sub_0807FB30(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar2 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar2 + 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  iVar1 = DAT_0202286c;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(DAT_0202286c + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
  if (1 < *(byte *)(*(int *)(param_1 + 0x20) + 0xc)) {
    local_28 = *(undefined4 *)(param_1 + 0x4c);
    local_24 = *(int *)(param_1 + 0x50) + -0x2000;
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    sub_0807F684(&local_28,0,0,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0807F684(&local_28,1,(uVar3 * 2 >> 0x11 & 0x7f) + 0x80,
                 (int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0807F684(&local_28,2,uVar3 * 2 >> 0x11 & 0xff | 0x100,
                 (int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0807F684(&local_28,0,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0x7f) + 0x80),
                 (int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0807F684(&local_28,1,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0xff) + 0x100),
                 (int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0x3ff) + 0x100));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_08001EAC(0x95);
    sub_0807F71C(param_1);
  }
  return in_lr;
}

