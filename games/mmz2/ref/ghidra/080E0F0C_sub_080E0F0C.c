// sub_080E0F0C at 0x080E0F0C (thumb)

undefined4
sub_080E0F0C(int param_1,uint param_2,undefined4 param_3,byte param_4,char param_5,undefined param_6
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_080DE510(&DAT_0834c9e4 + *(ushort *)((int)&DAT_0834c4ba + ((uint)(param_1 << 0x18) >> 0x17)),7
               ,param_6);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[(param_2 & 0xff) + 0x28],9,param_6);
  iVar1 = sub_080EF2B8(param_3,0x20f580);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1 + 0x1e],0xe,param_6);
  uVar2 = sub_080EF2B8(param_3,0x34bc0);
  iVar1 = sub_080EF330(uVar2,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1 + 0x1e],0xf,param_6);
  sub_080DE510(&DAT_0834c9fd,0x10,param_6);
  uVar2 = sub_080EF2B8(param_3,36000);
  iVar1 = sub_080EF330(uVar2,6);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1 + 0x1e],0x11,param_6);
  uVar2 = sub_080EF2B8(param_3,0xe10);
  iVar1 = sub_080EF330(uVar2,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1 + 0x1e],0x12,param_6);
  sub_080DE510(&DAT_0834c9ff,0x13,param_6);
  uVar2 = sub_080EF2B8(param_3,600);
  iVar1 = sub_080EF330(uVar2,6);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1 + 0x1e],0x14,param_6);
  uVar2 = sub_080EF2B8(param_3,0x3c);
  iVar1 = sub_080EF330(uVar2,10);
  sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar1 + 0x1e],0x15,param_6);
  if (param_4 != 0) {
    if (9 < param_4) {
      iVar1 = sub_080EF2B8(param_4,10);
      sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar1 << 0x18) >> 0x17)),0x17
                   ,param_6);
    }
    iVar1 = sub_080EF330(param_4,10);
    sub_080DE510(&DAT_0834c9e4 + *(ushort *)(&DAT_0834c4b8 + ((uint)(iVar1 << 0x18) >> 0x17)),0x18,
                 param_6);
  }
  if (param_5 == '\x01') {
    sub_080DE510(&DAT_0834c9f5,0x19,param_6);
  }
  return in_lr;
}

