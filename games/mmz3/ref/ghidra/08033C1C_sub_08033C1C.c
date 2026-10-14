// sub_08033C1C at 0x08033C1C (thumb)

undefined8 sub_08033C1C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  pbVar5 = (byte *)(param_1 + 0x225);
  bVar1 = *pbVar5;
  if (bVar1 == 1) {
    pcVar6 = (char *)(param_1 + 0x224);
    cVar3 = *pcVar6;
    *pcVar6 = cVar3 + -1;
    if ((char)(cVar3 + -1) == -1) {
      *pbVar5 = 0;
    }
    uVar2 = *(ushort *)(param_1 + 0x216);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 0x10) == 0) {
        if ((uVar2 & 0x20) == 0) goto LAB_08033d3e;
        *pcVar6 = '\n';
      }
      else {
        *pcVar6 = '\n';
      }
    }
    else {
      *pcVar6 = '\n';
    }
LAB_08033d0a:
    *pbVar5 = *pbVar5 + 1;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (((*(ushort *)(param_1 + 0x216) & 0x30) != 0) ||
           ((*(ushort *)(param_1 + 0x216) & 0x80) == 0)) goto LAB_08033d3e;
        *(undefined *)(param_1 + 0x224) = 10;
        goto LAB_08033d0a;
      }
    }
    else {
      if (bVar1 == 2) {
        pcVar6 = (char *)(param_1 + 0x224);
        cVar3 = *pcVar6;
        *pcVar6 = cVar3 + -1;
        if ((char)(cVar3 + -1) == -1) {
          *pbVar5 = 0;
        }
        uVar2 = *(ushort *)(param_1 + 0x216);
        if ((uVar2 & 0x80) == 0) {
          if ((uVar2 & 0x10) == 0) {
            if ((uVar2 & 0x20) == 0) goto LAB_08033d3e;
            *(byte *)(param_1 + 0x226) = (byte)uVar2 & 0x10;
          }
          else {
            *(undefined *)(param_1 + 0x226) = 1;
          }
          *pcVar6 = '\n';
          goto LAB_08033d0a;
        }
        goto LAB_08033d3e;
      }
      if (bVar1 == 3) {
        cVar3 = *(char *)(param_1 + 0x224) + -1;
        *(char *)(param_1 + 0x224) = cVar3;
        if (cVar3 == -1) {
          uVar4 = 0;
          *pbVar5 = 0;
        }
        else {
          uVar4 = 1;
        }
        goto LAB_08033d40;
      }
    }
    *(undefined *)(param_1 + 0x225) = 0;
  }
LAB_08033d3e:
  uVar4 = 0;
LAB_08033d40:
  return CONCAT44(in_lr,uVar4);
}

