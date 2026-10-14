// sub_080DB96C at 0x080DB96C (thumb)

undefined4 sub_080DB96C(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  sub_0801CFF0();
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar1;
  iVar3 = (uint)*(byte *)(param_1 + 0x12) * 0x40;
  pbVar6 = (byte *)(param_1 + 0x74);
  uVar5 = (uint)*pbVar6;
  iVar4 = *(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17)) * iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  iVar4 = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = iVar3 * (short)(&DAT_08128c10)[uVar5];
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  *(int *)(param_1 + 0x58) = iVar3;
  sVar2 = sub_08007C7C(iVar4,iVar3 + 0x800);
  if (sVar2 != 0) {
    *pbVar6 = ((char)((int)((uVar5 - 0x40) * 0x1000000) >> 0x1f) * '\x02' + '\x01') * '\b' + *pbVar6
    ;
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') || (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DBA38(param_1);
  }
  return in_lr;
}

