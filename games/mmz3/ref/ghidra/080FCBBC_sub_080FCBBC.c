// sub_080FCBBC at 0x080FCBBC (thumb)

void sub_080FCBBC(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  param_2 = param_2 & 0xff;
  param_3 = param_3 << 0x18;
  if (0xb2 < param_2) {
    param_2 = 0xb2;
    param_3 = -0x1000000;
  }
  uVar3 = *(uint *)(&DAT_0810abe8 + ((byte)(&DAT_0810ab34)[param_2] & 0xf) * 4) >>
          (uint)((byte)(&DAT_0810ab34)[param_2] >> 4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = sub_080FC024((*(uint *)(&DAT_0810abe8 + ((byte)(&DAT_0810ab35)[param_2] & 0xf) * 4) >>
                       (uint)((byte)(&DAT_0810ab35)[param_2] >> 4)) - uVar3,param_3);
  sub_080FC024(uVar2,uVar3 + iVar1);
  return;
}

