// sub_080005FC at 0x080005FC (thumb)

void sub_080005FC(undefined4 param_1)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  
  do {
    sub_080DE28C();
    sub_08002C34();
    DAT_03001582 = (ushort)(DAT_03001582 == 0);
    DAT_03001580 = 0;
    sub_080020D0();
    if (DAT_030016f4 < DAT_030016f5) goto LAB_08000652;
    sVar1 = DAT_04000006;
    while (sVar1 != 0xa1) {
LAB_08000652:
      do {
      } while (DAT_030016f4 < DAT_030016f5);
      sVar1 = DAT_04000006;
    }
    DAT_030016f4 = 0;
    sub_0800132C();
    if ((DAT_02000ca2 & 4) != 0) {
      if (DAT_02000cd6 == 0) {
        DAT_02000000 = 1;
      }
      else {
        DAT_02000000 = DAT_02000000 + 1;
      }
    }
    if (0x78 < DAT_02000cd8) {
      DAT_02000ca2 = DAT_02000ca2 & 0xfffb;
    }
    if (((DAT_02000ca2 & 4) != 0) &&
       ((((DAT_02000ca8 & 0x10) == 0 || ((DAT_02000ca8 & 0x20) == 0)) ||
        (DAT_02000000 != DAT_02000cd6)))) {
      sub_08001194(0);
      sub_08001194(1);
      while( true ) {
        sub_080010DC(param_1,1);
        do {
          do {
          } while (DAT_030016f4 < DAT_030016f5);
          sVar1 = DAT_04000006;
        } while (sVar1 != 0xa1);
        DAT_030016f4 = 0;
        sub_0800132C();
        if (DAT_02000cd6 == 1) {
          DAT_02000000 = DAT_02000cd6;
        }
        uVar3 = DAT_02000ca2;
        if (0x78 < DAT_02000cd8) break;
        uVar2 = DAT_02000ca2;
        if (((DAT_02000ca2 & 4) == 0) ||
           ((((DAT_02000ca8 & 0x10) != 0 &&
             (uVar3 = (ushort)DAT_02000ca8, (DAT_02000ca8 & 0x20) != 0)) &&
            (DAT_02000000 == DAT_02000cd6)))) goto LAB_0800077c;
      }
      uVar2 = DAT_02000ca2 & 0xfffb;
LAB_0800077c:
      DAT_02000ca2 = uVar2;
      sub_080011B4(0,uVar3);
      sub_080011B4(1);
    }
    sub_08001FC4();
    sub_080DE318();
    uVar3 = DAT_04000000;
    DAT_04000000 = uVar3 & 0xff7f;
    sub_08002994();
    sub_08002F98();
    sub_08003044();
    sub_080030C8();
    sub_080030F8();
    sub_08003158();
    sub_08002544();
    sub_08000AF0();
    if ((((DAT_02000d40 == '\0') && ((DAT_02000ca2 & 1) == 0)) &&
        (((DAT_02000d10 & 0xc) == 0xc && (((DAT_02000d10 & 1) != 0 && ((DAT_02000d10 & 2) != 0))))))
       && (((DAT_02000d14 & 0xc) != 0 || (((DAT_02000d14 & 1) != 0 || ((DAT_02000d14 & 2) != 0))))))
    {
      sub_0800113C(0);
      sub_0800113C(1);
      sub_080DFBC0(&DAT_0202f680,1);
      sub_08001064(0,0x800051d);
    }
    sub_080010DC(param_1,1);
  } while( true );
}

