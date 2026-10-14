// sub_080004B8 at 0x080004B8 (thumb)

void sub_080004B8(undefined4 param_1)

{
  ushort uVar1;
  short sVar2;
  
  do {
    FUN_080bbee4();
    FUN_080018f4();
    sub_08000EA0();
    DAT_02004c72 = (ushort)(DAT_02004c72 == 0);
    DAT_02004c70 = 0;
    FUN_08000ff8();
    do {
      do {
      } while (DAT_030004e4 < DAT_030004e5);
      sVar2 = DAT_04000006;
    } while (sVar2 != 0xa1);
    DAT_030004e4 = 0;
    sub_08000EA4();
    PollKeyInput();
    FUN_080bbf70();
    uVar1 = DAT_04000000;
    DAT_04000000 = uVar1 & 0xff7f;
    FUN_08001680();
    FUN_08001b68();
    FUN_08001c14();
    FUN_08001c98();
    FUN_08001cc8();
    FUN_08001d28();
    FUN_0800146c();
    sub_08000840();
    if ((((DAT_02004ce0 == '\0') && ((DAT_02004ca4 & 0xc) == 0xc)) && ((DAT_02004ca4 & 1) != 0)) &&
       ((DAT_02004ca4 & 2) != 0)) {
      sub_08000DE0(0);
      sub_08000DE0(1);
      FUN_080bd390(&DAT_02023680,1);
      FUN_08000d10(0,0x8000415);
    }
    sub_08000D80(param_1,1);
  } while( true );
}

