// sub_08002880 at 0x08002880 (thumb)

undefined8 sub_08002880(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_02000d60;
  if (DAT_02000d60 < 0x10) {
    iVar3 = DAT_02000d60 * 0xc;
    (&DAT_02000d64)[iVar3] = (&DAT_02000d64)[iVar3] & 0xfc | 2;
    *(uint *)(&DAT_02000d64 + iVar3) = *(uint *)(&DAT_02000d64 + iVar3) & 3 | param_3 << 2;
    (&DAT_02000d68)[iVar1 * 3] = param_2;
    (&DAT_02000d6c)[iVar1 * 3] = param_1;
    DAT_02000d60 = DAT_02000d60 + 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}

