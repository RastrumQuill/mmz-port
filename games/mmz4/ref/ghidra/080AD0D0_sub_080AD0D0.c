// sub_080AD0D0 at 0x080AD0D0 (thumb)

undefined4 sub_080AD0D0(int param_1)

{
  sbyte sVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0x11);
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar3 != 0) {
    *(undefined *)(iVar3 + 0xb4) = 1;
    *(int *)(param_1 + 0xb8) = 0;
    pcVar4 = (char *)(iVar6 + 0xbc);
    cVar2 = *pcVar4;
    if (cVar2 != '\0') {
      *pcVar4 = cVar2 + -1;
    }
  }
  pbVar5 = (byte *)(iVar6 + 0xb4);
  *pbVar5 = *pbVar5 & ~(byte)(1 << sVar1);
  sub_0807F804(param_1);
  return in_lr;
}

