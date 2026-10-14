// sub_08009864 at 0x08009864 (thumb)

undefined8 sub_08009864(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (((uint)((int)param_1 >> 0xc) < 0x771) && ((uint)((int)param_2 >> 0xc) < 0x4f6)) {
    uVar1 = *(ushort *)
             ((uint)(&DAT_020017e0)
                    [((int)param_2 >> 0xc) * (uint)DAT_020017e0 + ((int)param_1 >> 0xc) + 2] * 2 +
             DAT_020011b8);
    iVar2 = sub_080EF11C(param_1 & 0xfff,param_2 & 0xfff,
                         *(undefined4 *)(&DAT_08312b8c + (uVar1 & 0xf) * 4));
    if (iVar2 != 0) {
      if ((uVar1 & 0x2000) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(&DAT_0831408c + (DAT_020011d0 & 0x7f) * 4) + 0x7c);
        goto LAB_08009910;
      }
      if ((uVar1 & 0x4000) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(&DAT_0831408c + (DAT_020011d0 & 0x7f) * 4) + 0x78);
        goto LAB_08009910;
      }
    }
    uVar3 = sub_08009FE4(param_1,param_2);
    uVar4 = DAT_02000020;
    if ((uVar3 & 0x2000) != 0) goto LAB_08009910;
  }
  uVar4 = 0;
LAB_08009910:
  return CONCAT44(in_lr,uVar4);
}

