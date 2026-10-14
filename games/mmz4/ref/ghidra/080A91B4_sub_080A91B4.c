// sub_080A91B4 at 0x080A91B4 (thumb)

undefined4 sub_080A91B4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  sub_0801CFF0(param_1);
  iVar3 = param_1 + 0x54;
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  pbVar4 = (byte *)(param_1 + 0xbc);
  sub_080D4898(iVar3,&DAT_0885f3ac,0,(uVar2 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar4);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  sub_080D4898(iVar3,&DAT_0885f3c8,0,(uVar2 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar4);
  uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
  DAT_0202dc38 = uVar2 & 0x7fffffff;
  sub_080D4898(iVar3,&DAT_0885f3e4,0,(uVar2 * 2 >> 0x11 & 1) << 4 | (uint)*pbVar4);
  sub_080D0894(1,iVar3);
  if (*(byte *)(iVar1 + 0xc) < 2) {
    sub_08002B10(0x2a);
  }
  sub_0802AB70(0,0x10,iVar3);
  if (DAT_0202e8ec < 9999) {
    DAT_0202e8ec = DAT_0202e8ec + 1;
  }
  sub_0802ABC8(param_1,iVar3);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

