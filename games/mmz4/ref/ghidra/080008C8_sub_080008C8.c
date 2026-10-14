// sub_080008C8 at 0x080008C8 (thumb)

void sub_080008C8(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  
  do {
    sub_0810CF94();
    sub_08002364();
    DAT_03001582 = (ushort)(DAT_03001582 == 0);
    DAT_03001580 = 0;
    sub_08001574();
    do {
      do {
      } while (DAT_030016f4 < DAT_030016f5);
      sVar2 = DAT_04000006;
    } while (sVar2 != 0xa1);
    DAT_030016f4 = 0;
    sub_08001490();
    uVar1 = DAT_04000000;
    DAT_04000000 = uVar1 & 0xff7f;
    sub_080026D0();
    sub_08002868();
    sub_080028EC();
    sub_0800291C();
    sub_0800297C();
    sub_08000C98();
    sub_0810D01C();
    sub_08002094();
    sub_08001C3C();
    if (((((DAT_02000790 == '\0') && (DAT_0202f5e4 != 0)) && (DAT_0202f61c != 0)) &&
        (((DAT_02000760 & 0xc) == 0xc && ((DAT_02000760 & 1) != 0)))) &&
       (((DAT_02000760 & 2) != 0 &&
        ((((DAT_02000764 & 0xc) != 0 || ((DAT_02000764 & 1) != 0)) || ((DAT_02000764 & 2) != 0))))))
    {
      sub_08001390(0);
      sub_08001390(1);
      sub_0810F0B0(&DAT_0202f3b0,1);
      sub_080012B8(0,0x80007cd);
    }
    sub_08001330(param_1,1);
  } while( true );
}

