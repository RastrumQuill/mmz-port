// sub_0802242C at 0x0802242C (thumb)

undefined4 sub_0802242C(int param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  puVar3 = (ushort *)(param_1 + 0x14c);
  uVar1 = *puVar3;
  if ((uVar1 & 0xbfff) != 0) {
    iVar2 = 8 - ((int)((uint)*(ushort *)
                              ((int)&DAT_080fe64c + ((uint)uVar1 * 0x4000000 + 0x40000000 >> 0x17))
                      << 0x10) >> 0x15);
    *puVar3 = uVar1 & 0xff00 | uVar1 + 1 & 0xff;
    DAT_03002ec0 = (char)(iVar2 >> 1) + ' ';
    DAT_03002ec1 = ' ' - (char)iVar2;
    DAT_03002ec2 = DAT_03002ec1;
    if (((uVar1 & 0x4000) != 0) && (iVar2 == 0)) {
      *puVar3 = 0;
    }
  }
  return in_lr;
}

