// sub_080398C0 at 0x080398C0 (thumb)

undefined8 sub_080398C0(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  switch(*(undefined *)(param_1 + 0x26a)) {
  case 0:
  case 3:
    pcVar4 = (char *)(param_1 + 0x269);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *(undefined *)(param_1 + 0x26a) = 0;
    }
    if (((*(ushort *)(param_1 + 0x252) & 0x30) == 0) && ((*(ushort *)(param_1 + 0x252) & 0x80) != 0)
       ) {
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x26a) + '\x01';
      break;
    }
    goto LAB_08039a78;
  case 1:
  case 4:
    pcVar4 = (char *)(param_1 + 0x269);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *(undefined *)(param_1 + 0x26a) = 0;
    }
    uVar1 = *(ushort *)(param_1 + 0x252);
    if ((uVar1 & 0x80) == 0) {
      if ((uVar1 & 0x10) == 0) {
        if ((uVar1 & 0x20) == 0) goto LAB_08039a78;
        *pcVar4 = '\n';
        cVar2 = *(char *)(param_1 + 0x26a) + '\x01';
      }
      else {
        *pcVar4 = '\n';
        cVar2 = *(char *)(param_1 + 0x26a) + '\x01';
      }
    }
    else {
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x26a) + '\x01';
    }
    break;
  case 2:
  case 5:
    pcVar4 = (char *)(param_1 + 0x269);
    cVar2 = *pcVar4;
    *pcVar4 = cVar2 + -1;
    if ((char)(cVar2 + -1) == -1) {
      *(undefined *)(param_1 + 0x26a) = 0;
    }
    uVar1 = *(ushort *)(param_1 + 0x252);
    if ((uVar1 & 0x80) != 0) goto LAB_08039a78;
    if ((uVar1 & 0x10) == 0) {
      if ((uVar1 & 0x20) == 0) goto LAB_08039a78;
      *(byte *)(param_1 + 0x26b) = (byte)uVar1 & 0x10;
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x26a) + '\x01';
    }
    else {
      *(undefined *)(param_1 + 0x26b) = 1;
      *pcVar4 = '\n';
      cVar2 = *(char *)(param_1 + 0x26a) + '\x01';
    }
    break;
  case 6:
    cVar2 = *(char *)(param_1 + 0x269) + -1;
    *(char *)(param_1 + 0x269) = cVar2;
    if (cVar2 == -1) {
      uVar3 = 0;
      *(undefined *)(param_1 + 0x26a) = 0;
    }
    else {
      uVar3 = 1;
    }
    goto LAB_08039a7a;
  default:
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0x26a) = cVar2;
LAB_08039a78:
  uVar3 = 0;
LAB_08039a7a:
  return CONCAT44(in_lr,uVar3);
}

