// sub_080C26C0 at 0x080C26C0 (thumb)

undefined4
sub_080C26C0(int param_1,undefined4 param_2,byte param_3,char param_4,uint param_5,undefined param_6
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  param_5 = param_5 & 0xff;
  sub_080BC0AC(&UNK_082b932a + *(ushort *)(&DAT_082b8f8c + ((uint)(param_1 << 0x18) >> 0x17)),
               param_5,param_6);
  iVar1 = sub_080C8C38(param_2,0x20f580);
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1 + 0x1e],param_5 + 6,param_6);
  uVar2 = sub_080C8C38(param_2,0x34bc0);
  iVar1 = sub_080C8CB0(uVar2,10);
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1 + 0x1e],param_5 + 7,param_6);
  sub_080BC0AC(&DAT_082b9344,param_5 + 8,param_6);
  uVar2 = sub_080C8C38(param_2,36000);
  iVar1 = sub_080C8CB0(uVar2,6);
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1 + 0x1e],param_5 + 9,param_6);
  uVar2 = sub_080C8C38(param_2,0xe10);
  iVar1 = sub_080C8CB0(uVar2,10);
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1 + 0x1e],param_5 + 10,param_6);
  sub_080BC0AC(&DAT_082b9347,param_5 + 0xb,param_6);
  uVar2 = sub_080C8C38(param_2,600);
  iVar1 = sub_080C8CB0(uVar2,6);
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1 + 0x1e],param_5 + 0xc,param_6);
  uVar2 = sub_080C8C38(param_2,0x3c);
  iVar1 = sub_080C8CB0(uVar2,10);
  sub_080BC0AC(&UNK_082b932a + (ushort)(&DAT_082b8f3c)[iVar1 + 0x1e],param_5 + 0xd,param_6);
  if (param_3 != 0) {
    if (9 < param_3) {
      iVar1 = sub_080C8C38(param_3,10);
      sub_080BC0AC(&UNK_082b932a + *(ushort *)(&DAT_082b8f78 + ((uint)(iVar1 << 0x18) >> 0x17)),
                   param_5 + 0xf,param_6);
    }
    iVar1 = sub_080C8CB0(param_3,10);
    sub_080BC0AC(&UNK_082b932a + *(ushort *)(&DAT_082b8f78 + ((uint)(iVar1 << 0x18) >> 0x17)),
                 param_5 + 0x10,param_6);
  }
  if (param_4 == '\x01') {
    sub_080BC0AC(&DAT_082b933b,param_5 + 0x11,param_6);
  }
  if (param_4 == '\x02') {
    sub_080BC0AC(&DAT_082b933e,param_5 + 0x11,param_6);
  }
  return in_lr;
}

