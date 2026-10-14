// sub_08017FD8 at 0x08017FD8 (thumb)

undefined8 sub_08017FD8(int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  bVar1 = sub_0801B390();
  if ((char)bVar1 < '\0') {
LAB_0801807c:
    uVar4 = 1;
  }
  else {
    if (bVar1 != 1) {
      pcVar2 = (char *)(param_1 + 0xbe);
      if (*pcVar2 == '\x03') {
        pbVar5 = (byte *)(param_1 + 0xc0);
        if (*pbVar5 < 3) goto LAB_0801807c;
        *(undefined *)(param_1 + 0xc1) = 3;
        *pcVar2 = '\x03';
        *(undefined *)(param_1 + 0xc2) = *(undefined *)(param_1 + 0xbf);
        *(undefined *)(param_1 + 0xbf) = 0;
        *(byte *)(param_1 + 0xc3) = *pbVar5;
        *pbVar5 = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      else if ((*pcVar2 == '\x02') && (pbVar5 = (byte *)(param_1 + 0xbf), *pbVar5 < 2)) {
        iVar3 = *(int *)(param_1 + 0x24);
        if ((iVar3 != 0) && ((*(char *)(iVar3 + 9) == '\x01' && (*(char *)(iVar3 + 0xd) == '\0'))))
        goto LAB_0801807c;
        *(char *)(param_1 + 0xc1) = *pcVar2;
        *pcVar2 = '\x03';
        *(byte *)(param_1 + 0xc2) = *pbVar5;
        *pbVar5 = 0;
        *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
        *(undefined *)(param_1 + 0xc0) = 0;
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
    }
    uVar4 = (uint)bVar1;
  }
  return CONCAT44(in_lr,uVar4);
}

