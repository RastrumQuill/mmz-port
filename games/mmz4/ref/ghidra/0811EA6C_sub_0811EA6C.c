// sub_0811EA6C at 0x0811EA6C (thumb)

undefined4 sub_0811EA6C(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x63a8);
  sub_08002624(0x41);
  uVar2 = *(ushort *)(iVar3 + 0xa4);
  uVar1 = sub_0802B604(iVar3);
  if ((short)(uVar1 & 0xff) < (short)uVar2) {
    uVar2 = sub_0802B604(iVar3);
    *(ushort *)(iVar3 + 0xa4) = uVar2 & 0xff;
  }
  DAT_02000a50 = DAT_02000a50 & 0xdfff;
  DAT_03002ac0 = 0;
  *(undefined *)(param_1 + 0xdd0) = 1;
  if ((uint)*(byte *)(iVar3 + 0xf1) + (uint)*(byte *)(iVar3 + 0xf2) + (uint)*(byte *)(iVar3 + 0xf3)
      == 0) {
    sub_08108B80(0x811f0f5);
  }
  else if (*(char *)(param_1 + 0xdd1) == '\0') {
    sub_08108CD8(iVar3);
  }
  sub_08112080(param_1,0x5030400);
  return in_lr;
}

