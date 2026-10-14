// sub_080113B0 at 0x080113B0 (thumb)

undefined4 sub_080113B0(int param_1)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  pcVar5 = (char *)(param_1 + 0x174);
  if (*pcVar5 == '\0') {
    cVar3 = '\x01';
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec != '\0') {
      if (DAT_02022aec != '\x01') {
        return in_lr;
      }
      sub_08014444(&DAT_02022b6c,&DAT_082a3f28);
      *pcVar5 = '\x04';
      return in_lr;
    }
    puVar1 = &DAT_082a3bd0;
LAB_0801146c:
    sub_08014444(&DAT_02022b6c,puVar1);
    *pcVar5 = cVar3;
  }
  else {
    if ((DAT_0200520c & 0x7f) != 3) {
      return in_lr;
    }
    if ((DAT_02022ad6 & 0x10) != 0) {
      if (*(char *)(param_1 + 0x175) == '\0') {
        sub_080BC818(0x903,0x3c);
        *(char *)(param_1 + 0x175) = '\x01';
      }
      cVar3 = '\b';
      if ((DAT_02022b64 & 8) != 0) {
        DAT_02004fa0 = DAT_02004fa0 | 0x80;
        DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
        puVar1 = &DAT_082a3e80;
        goto LAB_0801146c;
      }
    }
    if ((*(char *)(param_1 + 0x174) == '\x01') && (*(int *)(iVar4 + 0x4c) >> 0xc == 0x4c4)) {
      if (0x1e < *(int *)(iVar4 + 0x50) >> 0xc) {
        sub_08014444(&DAT_02022b6c,&DAT_082a3c28);
      }
      *(char *)(param_1 + 0x174) = '\x02';
    }
    else {
      if ((*(char *)(param_1 + 0x174) == '\x02') && (*(int *)(iVar4 + 0x4c) >> 0xc == 0x515)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a3d38);
        *(char *)(param_1 + 0x174) = '\x03';
      }
      if ((((*(char *)(param_1 + 0x174) == '\x03') &&
           (iVar2 = *(int *)(iVar4 + 0x4c) >> 0xc, 0x528 < iVar2)) && (iVar2 < 0x537)) &&
         (*(int *)(iVar4 + 0x50) >> 0xc < 0x14)) {
        DAT_02004fa1 = DAT_02004fa1 | 2;
        sub_08014444(&DAT_02022b6c,&DAT_082a3d40);
        *(char *)(param_1 + 0x174) = '\x04';
      }
      else if (((*(char *)(param_1 + 0x174) == '\x04') &&
               (iVar2 = *(int *)(iVar4 + 0x4c) >> 0xc, 0x537 < iVar2)) &&
              ((iVar2 < 0x546 && (*(int *)(iVar4 + 0x50) >> 0xc < 0x14)))) {
        DAT_02004fa1 = 0;
        DAT_02022aae = DAT_02022aae | 1;
        sub_0800FBF4(1);
        sub_08014444(&DAT_02022b6c,&DAT_082a3d58);
        *(char *)(param_1 + 0x174) = '\x05';
      }
      else if ((*(char *)(param_1 + 0x174) == '\x05') && ((DAT_02022b64 & 0x20) != 0)) {
        DAT_02004fa0 = DAT_02004fa0 | 0x80;
        DAT_02004fa1 = DAT_02004fa1 | 2;
        sub_08014444(&DAT_02022b6c,&DAT_082a3dd0);
        DAT_02022b6e = DAT_02022b6e & 0xfffd;
        DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
        *(char *)(param_1 + 0x174) = '\x06';
      }
      else {
        pcVar5 = (char *)(param_1 + 0x174);
        if (*pcVar5 == '\x06') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          *pcVar5 = '\a';
        }
        if ((*pcVar5 == '\a') && ((DAT_02022adf & 0x10) != 0)) {
          sub_08014444(&DAT_02022b6c,&DAT_082a3f00);
          DAT_02022b64 = DAT_02022b64 & 0xfffe;
          *pcVar5 = '\b';
        }
      }
    }
  }
  return in_lr;
}

