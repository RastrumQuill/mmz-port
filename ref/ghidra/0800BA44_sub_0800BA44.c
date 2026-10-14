// sub_0800BA44 at 0x0800BA44 (thumb)

undefined4 sub_0800BA44(void)

{
  uint uVar1;
  short *psVar2;
  undefined4 in_lr;
  
  if ((((DAT_02022ae2 & 1) == 0) && (0xda000 < DAT_02005200)) && (DAT_02005200 < 0x10e000)) {
    if ((short)DAT_02022670 == -1) {
      DAT_02022670._0_2_ = sub_08001EAC(0x52);
    }
  }
  else if ((((DAT_02022ae2 & 2) == 0) && (0x116000 < DAT_02005200)) && (DAT_02005200 < 0x14a000)) {
    if ((short)DAT_02022670 == -1) {
      DAT_02022670._0_2_ = sub_08001EAC(0x52);
    }
  }
  else if ((((DAT_02022ae2 & 4) == 0) && (0x143000 < DAT_02005200)) && (DAT_02005200 < 0x168000)) {
    if ((short)DAT_02022670 == -1) {
      DAT_02022670._0_2_ = sub_08001EAC(0x52);
    }
  }
  else if ((short)DAT_02022670 != -1) {
    sub_08001EE8((int)(short)DAT_02022670);
    DAT_02022670._0_2_ = -1;
  }
  if ((((DAT_02022ae4 & 8) == 0) && (0x53000 < DAT_02005200)) && (DAT_02005200 < 0x71000)) {
    if (DAT_02022670._2_2_ == -1) {
      DAT_02022670._2_2_ = sub_08001EAC(0x54);
    }
  }
  else if ((((DAT_02022ae4 & 0x10) == 0) && (0x71000 < DAT_02005200)) && (DAT_02005200 < 0x96000)) {
    if (DAT_02022670._2_2_ == -1) {
      DAT_02022670._2_2_ = sub_08001EAC(0x54);
    }
  }
  else if (DAT_02022670._2_2_ != -1) {
    sub_08001EE8((int)DAT_02022670._2_2_);
    DAT_02022670._2_2_ = -1;
  }
  uVar1 = 0;
  psVar2 = &DAT_0829827c;
  do {
    if (((DAT_0202266c >> (uVar1 & 0xff) & 1) != 0) &&
       (((int)(uint)(byte)(&DAT_02022ad4)[(int)(&DAT_08298668)[uVar1] >> 3] >>
         ((&DAT_08298668)[uVar1] & 7) & 1U) != 0)) {
      sub_080067C4((int)*psVar2,(int)psVar2[1],(&DAT_0829823c)[uVar1]);
      DAT_0202266c = DAT_0202266c & ~(1 << (uVar1 & 0xff));
    }
    psVar2 = psVar2 + 2;
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x10);
  if ((DAT_0202265c != 0) && ((DAT_02022ae2 & 1) != 0)) {
    sub_080067C4(0xd9,0x18,&DAT_0829809c);
    sub_080067C4(0xdc,0x19,&DAT_082980ac);
    sub_080067C4(0xde,0x1a,&DAT_082980ac);
    sub_080067C4(0xe0,0x1b,&DAT_082980b8);
    sub_080067C4(0xe4,0x1c,&DAT_082980ac);
    sub_080067C4(0xe6,0x1d,&DAT_082980ac);
    sub_080067C4(0xe8,0x1e,&DAT_082980fc);
    sub_080067C4(0xeb,0x1d,&DAT_082980cc);
    sub_080067C4(0xed,0x1c,&DAT_082980cc);
    sub_080067C4(0xef,0x1b,&DAT_082980d8);
    sub_080067C4(0xf3,0x1a,&DAT_082980cc);
    sub_080067C4(0xf5,0x19,&DAT_082980cc);
    sub_080067C4(0xf7,0x18,&DAT_082980ec);
    DAT_0202265c = 0;
  }
  if ((DAT_02022660 != 0) && ((DAT_02022ae2 & 2) != 0)) {
    sub_080067C4(0x117,0x16,&DAT_08298106);
    sub_080067C4(0x119,0x17,&DAT_08298112);
    sub_080067C4(0x11b,0x18,&DAT_0829811e);
    sub_080067C4(0x11f,0x19,&DAT_08298112);
    sub_080067C4(0x121,0x1a,&DAT_08298112);
    sub_080067C4(0x123,0x1b,&DAT_0829815e);
    sub_080067C4(0x126,0x1a,&DAT_08298132);
    sub_080067C4(0x128,0x19,&DAT_08298132);
    sub_080067C4(0x12a,0x18,&DAT_0829813e);
    sub_080067C4(0x12e,0x17,&DAT_08298132);
    sub_080067C4(0x130,0x16,&DAT_08298152);
    DAT_02022660 = 0;
  }
  if ((DAT_02022664 != 0) && ((DAT_02022ae2 & 4) != 0)) {
    sub_080067C4(0x13e,0x15,&DAT_08298168);
    sub_080067C4(0x142,0x16,&DAT_0829817c);
    sub_080067C4(0x144,0x17,&DAT_0829817c);
    sub_080067C4(0x146,0x18,&DAT_082981a8);
    sub_080067C4(0x149,0x17,&DAT_08298188);
    sub_080067C4(0x14b,0x16,&DAT_082981b2);
    sub_080067C4(0x14d,0x15,&DAT_08298194);
    DAT_02022664 = 0;
    if ((DAT_02022ae1 & 0x80) != 0) {
      sub_080067C4(0x144,0x17,&DAT_082981be);
      sub_080067C4(0x144,0x18,&DAT_082981d0);
    }
  }
  if ((DAT_02022aee != 0) &&
     (sub_080067C4(0x144,DAT_02022aee + 0x16,&DAT_082981ac + (uint)DAT_02022aee * 0x12),
     6 < DAT_02022aee)) {
    DAT_02022aee = 0;
  }
  return in_lr;
}

