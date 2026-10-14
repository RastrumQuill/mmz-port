// sub_080D59AC at 0x080D59AC (thumb)

ulonglong sub_080D59AC(int param_1,int param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = 0;
  if ((param_2 - 1U < 0x51) && (iVar5 = (int)(char)(&DAT_0834a1d4)[param_2 * 0xc], iVar5 != -1)) {
    uVar1 = *(ushort *)(param_1 + 0x24a + iVar5 * 2);
    cVar4 = *(char *)(param_1 + 0x270 + iVar5);
    while ((cVar2 = sub_080D5A34(param_1,param_2), cVar2 == '\0' &&
           (uVar3 = sub_080D5ADC(param_1,param_2), uVar3 <= uVar1))) {
      cVar4 = cVar4 + '\x01';
      *(char *)(param_1 + 0x270 + iVar5) = cVar4;
      iVar6 = iVar6 + 1;
    }
  }
  return CONCAT44(in_lr,iVar6) & 0xffffffff000000ff;
}

