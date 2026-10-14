// sub_08015698 at 0x08015698 (thumb)

undefined8 sub_08015698(uint param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
  DAT_02022890 = uVar3 & 0x7fffffff;
  if (param_1 < 8) {
    if ((DAT_02022ae0 & 8) != 0) {
      param_1 = 5;
    }
    uVar4 = 0;
    uVar2 = *(ushort *)(&DAT_082a7c9c + param_1 * 0xe);
    while (((uint)uVar2 <= (uVar3 * 2 >> 0x11 & 0xff) && (uVar4 = uVar4 + 1 & 0xffff, uVar4 < 6))) {
      uVar2 = *(ushort *)(&DAT_082a7c9c + uVar4 * 2 + param_1 * 0xe);
    }
    if (uVar4 != 0) {
      sub_080B3228(uVar4 - 1 & 0xff,param_2,0);
    }
    goto LAB_08015786;
  }
  uVar3 = (param_1 - 8) * 0x10000 >> 0xf;
  cVar1 = (&DAT_082a7d0c)[uVar3];
  if (cVar1 < '\0') {
LAB_080156d0:
    uVar4 = 0;
  }
  else {
    if (cVar1 == '\0') {
      iVar6 = (int)(char)(&DAT_082a7d0d)[uVar3];
      iVar5 = iVar6;
      if (iVar6 < 0) {
        iVar5 = iVar6 + 7;
      }
      if (((int)(uint)(byte)(&DAT_0202b744)[iVar5 >> 3] >>
           ((iVar6 + (iVar5 >> 3) * -8) * 0x1000000 >> 0x18 & 0xffU) & 1U) != 0) goto LAB_080156d0;
      sub_080B597C((&DAT_082a7d0d)[uVar3],*param_2,param_2[1]);
    }
    else if (cVar1 == '\x01') {
      sub_080B3788((&DAT_082a7d0d)[uVar3],param_2);
    }
    uVar4 = 1;
  }
LAB_08015786:
  return CONCAT44(in_lr,uVar4);
}

