// sub_080B4E14 at 0x080B4E14 (thumb)

undefined8 sub_080B4E14(undefined4 param_1,uint param_2,char param_3)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = (&DAT_082b6ea6)[(param_2 & 0xff) * 0xc];
  if ((param_3 != '\0') && ((bVar1 & 0x80) == 0)) {
    sub_080C8A9C(param_1,param_2 & 0xff,*(undefined4 *)(&DAT_082b7868 + (uint)bVar1 * 4));
  }
  return CONCAT44(in_lr,(uint)bVar1);
}

