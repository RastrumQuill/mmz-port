// sub_080E4390 at 0x080E4390 (thumb)

undefined4 sub_080E4390(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_2c [2];
  int local_24;
  
  cVar1 = DAT_0202e144;
  if (*(int *)(param_1 + 0x7254) == 0) {
    uVar3 = (uint)*(ushort *)(param_1 + 0x1ee4);
LAB_080e43d8:
    local_24 = 0;
    if ((uVar3 == 0) && (DAT_0202e134 == '\0')) goto LAB_080e43e6;
  }
  else {
    uVar3 = DAT_0202e180;
    if (*(short *)(param_1 + 0x1ee4) == 0) goto LAB_080e43d8;
  }
  local_24 = 1;
LAB_080e43e6:
  *(int *)(param_1 + 0x1ee0) = *(int *)(param_1 + 0x1ee0) + 1;
  sub_08004AF4(param_1 + 0x9a8);
  DAT_0202e148 = 0;
  local_2c[0] = 0;
  sub_080EEF68(local_2c,&DAT_0202e160,0x1000008);
  if ((((DAT_0202ebbb & 4) != 0) && (local_24 == 0)) && (cVar1 == '\0')) {
    if (DAT_0202e12c == 0) {
      sub_0800322C();
      DAT_0202ebbb = DAT_0202ebbb & 0xfb;
      iVar5 = sub_08003390(0x26);
      if (iVar5 != 0) {
        sub_08003338(0x26);
      }
    }
    else {
      if ((DAT_0202e12c & 0x8000) == 0) {
        if (DAT_0202e12c < 0xb4) {
          iVar5 = sub_08003390(0x25);
          if (iVar5 != 0) {
            sub_08003338(0x25);
          }
          iVar5 = sub_08003390(0x26);
          if (iVar5 == 0) {
            sub_080032EC(0x26);
          }
        }
      }
      else {
        sub_080031F8();
        sub_080032EC(0x25);
        DAT_0202e12c = DAT_0202e12c & 0x7fff;
      }
      DAT_0202e12c = DAT_0202e12c - 1;
    }
  }
  uVar4 = 0;
  if ((local_24 != 0) || (cVar1 != '\0')) {
    uVar4 = 1;
  }
  iVar5 = sub_080149F4(uVar4);
  if (iVar5 == 0) {
    if (local_24 == 0) {
      if ((((DAT_0202ec38 & 1) != 0) && ((DAT_0202ec42 & 1) == 0)) && ((DAT_0202ec38 & 4) == 0)) {
        if (DAT_0202ebf8 < 359999) {
          DAT_0202ebf8 = DAT_0202ebf8 + 1;
        }
        if (*(uint *)(DAT_0202ebf0 + 0xc) < 21599999) {
          *(uint *)(DAT_0202ebf0 + 0xc) = *(uint *)(DAT_0202ebf0 + 0xc) + 1;
        }
      }
      sub_0801DFD4();
      if (cVar1 == '\0') {
        sub_08012034(DAT_0202f088);
        sub_08012034(DAT_0202f074);
        sub_08012034(DAT_0202f078);
        sub_08012004(DAT_0202f06c);
        sub_08098344();
        sub_08012004(DAT_0202f070);
        sub_08012004(DAT_0202f08c);
      }
      sub_08012034(DAT_0202f090);
      sub_080AC59C();
      sub_08006C90();
      if (cVar1 == '\0') {
        sub_08012074(DAT_0202f088);
        sub_08012074(DAT_0202f074);
        sub_08012074(DAT_0202f078);
        sub_08012074(DAT_0202f06c);
        sub_08012074(DAT_0202f07c);
        sub_08012074(DAT_0202f070);
        sub_08012074(DAT_0202f08c);
        sub_08012074(DAT_0202f090);
      }
    }
    else {
      sub_08006C90();
    }
    sub_080E5AF4(param_1);
    sub_08006CD4();
    if (((((((DAT_02000d14 & 8) != 0) &&
           ((*(uint *)(*(int *)(param_1 + 0x75b8) + 0x8c) & 0x200) == 0)) &&
          (*(short *)(*(int *)(param_1 + 0x75b8) + 0xa4) != 0)) &&
         (((DAT_0202ec38 & 0x80) == 0 && ((DAT_0202ec38 & 1) != 0)))) &&
        (((DAT_0202ec42 & 1) == 0 && (((DAT_0202ec38 & 8) == 0 && (DAT_0202ed84 == 0)))))) &&
       ((*(char *)(param_1 + 2) == '\0' &&
        ((((cVar1 == '\0' && (DAT_02000ff0 == 0)) && (DAT_0202e180 == 0)) &&
         (*(int *)(param_1 + 0x7254) != 0)))))) {
      if ((DAT_0202ebbb & 4) == 0) {
        sub_080031F8();
      }
      *(undefined2 *)(param_1 + 0x1ee4) = 1;
      sub_080E0E64(param_1,0x500);
    }
    sub_080120DC(DAT_0202f088);
    sub_080120DC(DAT_0202f074);
    sub_080120DC(DAT_0202f078);
    sub_080120DC(DAT_0202f06c);
    sub_080120DC(DAT_0202f08c);
    iVar5 = param_1 + 0x9a8;
    sub_08012274(DAT_0202f088,iVar5);
    sub_08012274(DAT_0202f074,iVar5);
    sub_08012274(DAT_0202f078,iVar5);
    sub_08012274(DAT_0202f06c,iVar5);
    sub_0801218C(DAT_0202f090,iVar5);
    sub_08039020(iVar5);
    sub_0801218C(DAT_0202f07c,iVar5);
    sub_0801218C(DAT_0202f084,iVar5);
    sub_08012274(DAT_0202f08c,iVar5);
    sub_080E5BE4(param_1);
    sub_080DEF00();
    sub_080E5C5C(param_1);
    uVar4 = 0;
    if ((local_24 != 0) || (cVar1 != '\0')) {
      uVar4 = 1;
    }
    sub_08014AD8(uVar4);
    if ((local_24 == 0) && (cVar1 == '\0')) {
      if ((DAT_0202e120 != '\0') && ((DAT_030032e1 & 2) == 0)) {
        sub_080032EC(0x29);
      }
      DAT_0202e120 = '\0';
    }
    DAT_0202e134 = DAT_030032e2;
    if (*(int *)(param_1 + 0x7254) == 0) {
      if ((DAT_02000ca2 & 4) == 0) {
        sub_080E0E64(param_1,0x104);
      }
      if (*(short *)(param_1 + 0xc) == 1) {
        uVar2 = sub_080EF2B8(DAT_0202ebfc,100);
        iVar5 = sub_080EF330(uVar2,10);
        sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar5 << 0x10) >> 0xf)),3,0
                    );
        uVar2 = sub_080EF2B8(DAT_0202ebfc,10);
        iVar5 = sub_080EF330(uVar2,10);
        sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar5 << 0x10) >> 0xf)),4,0
                    );
        iVar5 = sub_080EF330(DAT_0202ebfc,10);
        sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar5 << 0x10) >> 0xf)),5,0
                    );
      }
      else if (*(short *)(param_1 + 0xc) == 2) {
        uVar2 = sub_080EF2B8(DAT_0202f8f0,100);
        iVar5 = sub_080EF330(uVar2,10);
        sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar5 << 0x10) >> 0xf)),3,0
                    );
        uVar2 = sub_080EF2B8(DAT_0202f8f0,10);
        iVar5 = sub_080EF330(uVar2,10);
        sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar5 << 0x10) >> 0xf)),4,0
                    );
        iVar5 = sub_080EF330(DAT_0202f8f0,10);
        sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar5 << 0x10) >> 0xf)),5,0
                    );
      }
    }
  }
  else {
    DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x100;
    sub_080E0E64(param_1,0x700);
  }
  return in_lr;
}

