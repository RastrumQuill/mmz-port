// sub_080E7BC8 at 0x080E7BC8 (thumb)

undefined4
sub_080E7BC8(uint param_1,uint param_2,undefined4 param_3,byte param_4,char param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = 0;
  if ((DAT_0202f65e != '\0') || (DAT_0202f65c == '\x01')) {
    iVar2 = 1;
  }
  uVar3 = iVar2 * -6 + 9U & 0xff;
  param_6 = param_6 + DAT_0202f65d;
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(param_1 & 0xff) + 0x1f],uVar3,param_6);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(param_2 & 0xff) + 0x28],uVar3 + 2,param_6);
  iVar2 = sub_080EF2B8(param_3,0x20f580);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar2 + 0x1e],uVar3 + 7,param_6);
  uVar1 = sub_080EF2B8(param_3,0x34bc0);
  iVar2 = sub_080EF330(uVar1,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar2 + 0x1e],uVar3 + 8,param_6);
  sub_080DE510(&DAT_0834c9fd,uVar3 + 9,param_6);
  uVar1 = sub_080EF2B8(param_3,36000);
  iVar2 = sub_080EF330(uVar1,6);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar2 + 0x1e],uVar3 + 10,param_6);
  uVar1 = sub_080EF2B8(param_3,0xe10);
  iVar2 = sub_080EF330(uVar1,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar2 + 0x1e],uVar3 + 0xb,param_6);
  sub_080DE510(&DAT_0834c9ff,uVar3 + 0xc,param_6);
  uVar1 = sub_080EF2B8(param_3,600);
  iVar2 = sub_080EF330(uVar1,6);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar2 + 0x1e],uVar3 + 0xd,param_6);
  uVar1 = sub_080EF2B8(param_3,0x3c);
  iVar2 = sub_080EF330(uVar1,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar2 + 0x1e],uVar3 + 0xe,param_6);
  if (param_4 != 0) {
    if (9 < param_4) {
      iVar2 = sub_080EF2B8(param_4,10);
      sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar2 << 0x18) >> 0x17)),
                   uVar3 + 0x10,param_6);
    }
    iVar2 = sub_080EF330(param_4,10);
    sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar2 << 0x18) >> 0x17)),
                 uVar3 + 0x11,param_6);
  }
  if (param_5 == '\x01') {
    sub_080DE510(&DAT_0834c9f5,uVar3 + 0x12,param_6);
  }
  return in_lr;
}

