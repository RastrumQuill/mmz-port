// sub_080CFA04 at 0x080CFA04 (thumb)

undefined4 sub_080CFA04(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  ushort *puVar4;
  int *piVar5;
  undefined4 in_lr;
  
  piVar5 = (int *)(param_1 + 0xb4);
  iVar3 = *piVar5 * -10;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = *piVar5 + (iVar3 >> 8);
  *piVar5 = iVar3;
  iVar3 = *(short *)((int)&DAT_08128c10 + ((*(byte *)(param_1 + 0x10) + 0x40) * 0x1000000 >> 0x17))
          * iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar3 >> 8);
  iVar3 = (int)(short)(&DAT_08128c10)[*(byte *)(param_1 + 0x10)] * *piVar5;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar3 >> 8);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(param_1 + 9)] + 8);
    sub_080CFAEC(param_1);
  }
  else {
    puVar4 = (ushort *)(param_1 + 0xb8);
    iVar3 = (0x1c0 - (uint)*puVar4) * 0x14;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    uVar1 = *puVar4 + (short)((uint)iVar3 >> 8);
    *puVar4 = uVar1;
    *(ushort *)(param_1 + 0x50) = uVar1;
    *(ushort *)(param_1 + 0x52) = *puVar4;
    if ((*(char *)(param_1 + 0xd) == '\0') && (0x1a0 < *puVar4)) {
      sub_08005784(param_1 + 0x74,&DAT_088638b0);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

