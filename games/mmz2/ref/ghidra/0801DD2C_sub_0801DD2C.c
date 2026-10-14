// sub_0801DD2C at 0x0801DD2C (thumb)

undefined8 sub_0801DD2C(uint param_1,undefined4 *param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 in_lr;
  
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar3 & 0x7fffffff;
  if (param_1 < 8) {
    if ((DAT_0202ebbd & 0x40) != 0) {
      param_1 = 4;
    }
    if ((DAT_0202ebbb & 0x10) != 0) {
      param_1 = 5;
    }
    uVar5 = 0;
    uVar1 = *(ushort *)(&DAT_0833340c + param_1 * 0xe);
    while (((uint)uVar1 <= (uVar3 * 2 >> 0x11 & 0xff) && (uVar5 = uVar5 + 1 & 0xffff, uVar5 < 6))) {
      uVar1 = *(ushort *)(&DAT_0833340c + uVar5 * 2 + param_1 * 0xe);
    }
    if (uVar5 != 0) {
      sub_080D4938(uVar5 - 1 & 0xff,param_2,0);
    }
  }
  else {
    pcVar7 = &DAT_0833347c + (param_1 - 8 & 0xffff);
    iVar6 = (int)*pcVar7;
    iVar4 = iVar6;
    if (iVar6 < 0) {
      iVar4 = iVar6 + 7;
    }
    if ((((int)(uint)*(byte *)(DAT_02036e98 + 0x228 + (iVar4 >> 3)) >>
          ((iVar6 + (iVar4 >> 3) * -8) * 0x1000000 >> 0x18 & 0xffU) & 1U) == 0) &&
       (cVar2 = sub_080D6B74(*pcVar7), cVar2 == '\0')) {
      sub_080D6B54(*pcVar7,*param_2,param_2[1]);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return CONCAT44(in_lr,uVar5);
}

