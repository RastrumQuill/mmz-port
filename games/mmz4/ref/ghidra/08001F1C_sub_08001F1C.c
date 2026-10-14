// sub_08001F1C at 0x08001F1C (thumb)

undefined8 sub_08001F1C(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_020007c0;
  if (DAT_020007c0 < 0x10) {
    iVar3 = DAT_020007c0 * 0xc;
    (&DAT_020007c4)[iVar3] = (&DAT_020007c4)[iVar3] & 0xfc | 1;
    *(uint *)(&DAT_020007c4 + iVar3) = *(uint *)(&DAT_020007c4 + iVar3) & 3 | param_3 << 2;
    (&DAT_020007c8)[iVar1 * 3] = param_2;
    (&DAT_020007cc)[iVar1 * 3] = param_1;
    DAT_020007c0 = DAT_020007c0 + 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

