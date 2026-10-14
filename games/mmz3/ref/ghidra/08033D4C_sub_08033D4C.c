// sub_08033D4C at 0x08033D4C (thumb)

undefined8 sub_08033D4C(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x228)) {
  case 0:
  case 3:
    pcVar4 = (char *)(param_1 + 0x227);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *(undefined *)(param_1 + 0x228) = 0;
    }
    if (((*(ushort *)(param_1 + 0x216) & 0x30) == 0) && ((*(ushort *)(param_1 + 0x216) & 0x80) != 0)
       ) {
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x228) + '\x01';
      break;
    }
    goto LAB_08033ef8;
  case 1:
  case 4:
    pcVar4 = (char *)(param_1 + 0x227);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *(undefined *)(param_1 + 0x228) = 0;
    }
    uVar1 = *(ushort *)(param_1 + 0x216);
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 0x20) == 0) goto LAB_08033ef8;
        *pcVar4 = '\n';
        cVar2 = *(char *)(param_1 + 0x228) + '\x01';
      }
      else {
        *pcVar4 = '\n';
        cVar2 = *(char *)(param_1 + 0x228) + '\x01';
      }
    }
    else {
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x228) + '\x01';
    }
    break;
  case 2:
  case 5:
    pcVar4 = (char *)(param_1 + 0x227);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *(undefined *)(param_1 + 0x228) = 0;
    }
    uVar1 = *(ushort *)(param_1 + 0x216);
    if ((uVar1 & 0x80) != 0) goto LAB_08033ef8;
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) goto LAB_08033ef8;
      *(byte *)(param_1 + 0x229) = (byte)uVar1 & 0x10;
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x228) + '\x01';
    }
    else {
      *(undefined *)(param_1 + 0x229) = 1;
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x228) + '\x01';
    }
    break;
  case 6:
    cVar2 = *(char *)(param_1 + 0x227) + -1;
    *(char *)(param_1 + 0x227) = cVar2;
    if (cVar2 == -1) {
      uVar3 = 0;
      *(undefined *)(param_1 + 0x228) = 0;
    }
    else {
      uVar3 = 1;
    }
    goto LAB_08033efa;
  default:
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x228) = cVar2;
LAB_08033ef8:
  uVar3 = 0;
LAB_08033efa:
  return CONCAT44(in_lr,uVar3);
}

