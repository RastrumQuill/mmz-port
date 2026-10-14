// sub_0807B9A4 at 0x0807B9A4 (thumb)

undefined4 sub_0807B9A4(int param_1)

{
  undefined uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  uVar3 = sub_080C88E8((int)(short)*(undefined4 *)(param_1 + 0x54),
                       (int)(short)*(undefined4 *)(param_1 + 0x58));
  uVar1 = (undefined)((uVar3 & 0xffff) + 0x4000 >> 8);
  *(undefined *)(param_1 + 0x13) = uVar1;
  *(undefined *)(param_1 + 0x1f) = uVar1;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  cVar2 = sub_080079CC();
  if (cVar2 != '\0') {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0807BB3C(param_1 + 0x4c,1,uVar3 * 2 >> 0x11 & 0xff | 0x100,
                 (int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0x3ff) + 0x100));
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    uVar4 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar4 & 0x7fffffff;
    sub_0807BB3C(param_1 + 0x4c,3,(int)(short)-(((ushort)(uVar3 * 2 >> 0x11) & 0xff) + 0x100),
                 (int)(short)-(((ushort)(uVar4 * 2 >> 0x11) & 0x3ff) + 0x100));
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
  }
  return in_lr;
}

