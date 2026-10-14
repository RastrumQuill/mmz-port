// sub_08126F90 at 0x08126F90 (thumb)

void sub_08126F90(int param_1,uint param_2,int param_3)

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
  uVar3 = *(uint *)(&DAT_08136600 + ((byte)(&DAT_0813654c)[param_2] & 0xf) * 4) >>
          (uint)((byte)(&DAT_0813654c)[param_2] >> 4);
  uVar2 = *(undefined4 *)(param_1 + 4);
  iVar1 = sub_081263F8((*(uint *)(&DAT_08136600 + ((byte)(&DAT_0813654d)[param_2] & 0xf) * 4) >>
                       (uint)((byte)(&DAT_0813654d)[param_2] >> 4)) - uVar3,param_3);
  sub_081263F8(uVar2,uVar3 + iVar1);
  return;
}

