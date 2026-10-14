// sub_08010B54 at 0x08010B54 (thumb)

undefined4 sub_08010B54(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(param_1 + 0x3c);
  pcVar4 = (char *)(param_1 + 0x174);
  if (*pcVar4 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    sub_08014444(&DAT_02022b6c,&DAT_082a2f34);
    *pcVar4 = '\x01';
    return in_lr;
  }
  if ((DAT_0200520c & 0x7f) != 1) {
    return in_lr;
  }
  if (*(int *)(iVar2 + 0x4c) >> 0xc < 0x2f0) {
    sub_08008FD0(0x41,&DAT_0829ff3c,&DAT_0829ff34,0);
  }
  if ((*pcVar4 == '\x01') && (*(int *)(iVar2 + 0x4c) >> 0xc == 0x40d)) {
    sub_08014444(&DAT_02022b6c,&DAT_082a2fb4);
    *pcVar4 = '\x02';
    return in_lr;
  }
  if (*(char *)(param_1 + 0x174) == '\x02') {
    if ((DAT_02022b64 & 0x20) != 0) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a30e4);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
      iVar2 = *(int *)(iVar2 + 0x4c);
      if (*(int *)(iVar5 + 0x4c) < iVar2) {
        DAT_02022ca4 = iVar2 + 0x7800;
        iVar2 = 0x140;
        iVar5 = *(int *)(iVar5 + 0x4c);
        iVar3 = -0x7800;
      }
      else {
        DAT_02022ca0 = iVar2 + -0x7800;
        iVar2 = 0x144;
        iVar5 = *(int *)(iVar5 + 0x4c);
        iVar3 = 0x7800;
      }
      *(int *)((int)&DAT_02022b60 + iVar2) = iVar5 + iVar3;
      *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
      *(undefined *)(param_1 + 0x174) = 3;
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x175) == '\0') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x3c0)) {
      sub_080BC818(0x602,0x3c);
      *(char *)(param_1 + 0x175) = '\x01';
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x175) == '\x01') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x37a)) {
      sub_080BC818(0x603,0x3c);
      *(char *)(param_1 + 0x175) = '\x02';
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x175) == '\x02') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x334)) {
      sub_080BC818(0x604,0x3c);
      *(char *)(param_1 + 0x175) = '\x03';
      return in_lr;
    }
    if ((*(char *)(param_1 + 0x175) == '\x03') && ((DAT_02022ad5 & 8) != 0)) {
      sub_080BC818(0x605,0x3c);
      *(undefined4 *)(param_1 + 0x17c) = 600;
      *(char *)(param_1 + 0x175) = '\x04';
    }
    if (*(char *)(param_1 + 0x175) == '\x04') {
      iVar5 = *(int *)(param_1 + 0x17c);
      if (iVar5 != 0) {
        if (((DAT_02022ae0 & 4) == 0) || ((*(uint *)(param_1 + 8) & 1) != 0)) {
          *(int *)(param_1 + 0x17c) = iVar5 + -1;
        }
        if (*(int *)(param_1 + 0x17c) != 0) goto LAB_08010df8;
      }
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
      sub_08014444(&DAT_02022b6c,&DAT_082a31dc);
      *(undefined *)(param_1 + 0x174) = 8;
      return in_lr;
    }
  }
LAB_08010df8:
  cVar1 = *(char *)(param_1 + 0x174);
  if (cVar1 == '\x03') {
    DAT_02004fa0 = DAT_02004fa0 & 0x7f;
    DAT_02004fa1 = 0;
    cVar1 = '\x04';
  }
  else {
    if (cVar1 != '\x04') {
      return in_lr;
    }
    if ((*(byte *)(iVar2 + 0x1ab) & 0x10) == 0) {
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a326c);
    DAT_02022b64 = DAT_02022b64 & 0xfffe;
    cVar1 = '\x05';
  }
  *(char *)(param_1 + 0x174) = cVar1;
  return in_lr;
}

