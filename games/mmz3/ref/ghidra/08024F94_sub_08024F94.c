// sub_08024F94 at 0x08024F94 (thumb)

undefined4 sub_08024F94(void)

{
  undefined4 in_lr;
  
  DAT_02031c64 = ((ushort)DAT_020023d0 & 0x1ff) * 0x100 + 0x7800;
  sub_0800507C(&DAT_02031a4c);
  sub_08016FB4(DAT_02030640);
  sub_0801713C(DAT_02030640,&DAT_02031a4c);
  sub_0800502C(&DAT_02031a4c);
  return in_lr;
}

