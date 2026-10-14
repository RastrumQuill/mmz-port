// sub_0810AF34 at 0x0810AF34 (thumb)

undefined4 sub_0810AF34(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  cVar2 = *(char *)(iVar4 + 2);
  if (cVar2 != '\0') {
    bVar1 = *(byte *)(iVar4 + 3);
    if (2 < bVar1) {
      cVar2 = *(char *)(iVar4 + 0xdf7);
      if (cVar2 == '\0') goto LAB_0810af82;
      if (bVar1 == 3) {
        sVar3 = 0x4108;
LAB_0810af96:
        sVar3 = sVar3 + (ushort)*(byte *)(iVar4 + 0xdd3);
        if (*(char *)(param_1 + 0xd) == '\0') {
          sub_0801CF00(param_1,sVar3);
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
        }
        else if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != sVar3) {
          sub_0801CF00(param_1,sVar3);
        }
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
        sub_0801CFF0(param_1);
        return in_lr;
      }
      if (bVar1 == 4) {
        sVar3 = 0x410e;
        goto LAB_0810af96;
      }
      if (bVar1 == 5) {
        sVar3 = 0x4114;
        goto LAB_0810af96;
      }
    }
    cVar2 = '\0';
  }
LAB_0810af82:
  *(char *)(param_1 + 0xd) = cVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  return in_lr;
}

