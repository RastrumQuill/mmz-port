// sub_08002B18 at 0x08002B18 (thumb)

undefined8 sub_08002B18(void)

{
  ushort uVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 in_lr;
  
  uVar6 = 0xffff;
  if ((DAT_02001780 == '\0') || (DAT_02001780 == '\x02')) {
    if (DAT_020017a0 == '\x01') {
      DAT_0400012a = 0x8fff;
    }
    else {
      DAT_0400012a = DAT_02001774;
    }
    DAT_020017a0 = 0;
    uVar5 = 0;
    do {
      (&DAT_020017ba)[uVar5] = 0xff;
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    DAT_02001798 = DAT_04000124;
    DAT_02001794 = DAT_04000120;
    uVar5 = 0;
    DAT_02001793 = 0;
    do {
      iVar4 = uVar5 * 2;
      uVar1 = *(ushort *)((int)&DAT_02001794 + iVar4);
      if ((((DAT_02001774 & 0xfffc) == (uVar1 & 0xfffc)) || (uVar1 == 0x8fff)) || (uVar1 == 0xffc6))
      {
        if (*(short *)((int)&DAT_02001794 + iVar4) == -0x3a) {
          uVar2 = 2;
        }
        else {
          uVar2 = 1;
        }
        (&DAT_020017ba)[uVar5] = uVar2;
        DAT_02001793 = DAT_02001793 + 1;
        uVar1 = *(ushort *)((int)&DAT_02001794 + iVar4);
        if ((uVar1 < uVar6) && (uVar1 != 0)) {
          uVar6 = uVar1;
        }
      }
      else {
        if (uVar1 != 0xffff) {
          (&DAT_020017ba)[uVar5] = 0xff;
          DAT_02001793 = 0;
          break;
        }
        if (uVar5 == DAT_02001792) {
          DAT_02001793 = 0;
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 4);
    if (1 < DAT_02001793) {
      if ((DAT_02001793 == DAT_02000008) && ((short)DAT_02001794 == -0x7001)) {
        uVar3 = 1;
        goto LAB_08002ce4;
      }
      if (1 < DAT_02001793) {
        DAT_020017a1 = ((byte)uVar6 & 3) + 1;
        DAT_02000008 = DAT_02001793;
        goto LAB_08002ce2;
      }
    }
    DAT_020017a1 = '\0';
    DAT_02000008 = DAT_02001793;
  }
  else {
    if (DAT_020017a0 == '\x01') {
      DAT_0400012a = 0x8fff;
    }
    else {
      DAT_0400012a = DAT_02001774;
    }
    DAT_020017a0 = 0;
    DAT_02001798 = DAT_04000124;
    DAT_02001794 = DAT_04000120;
  }
LAB_08002ce2:
  uVar3 = 0;
LAB_08002ce4:
  return CONCAT44(in_lr,uVar3);
}

