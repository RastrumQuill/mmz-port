// sub_08010888 at 0x08010888 (thumb)

undefined4 sub_08010888(int param_1)

{
  undefined uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  pcVar3 = (char *)(param_1 + 0x174);
  if (*pcVar3 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a29b0);
      *pcVar3 = '\x01';
    }
    else if (DAT_02022aec == '\x01') {
      sub_08014444(&DAT_02022b6c,&DAT_082a2e38);
      *pcVar3 = '\x03';
    }
  }
  else if ((DAT_0200520c & 0x7f) == 1) {
    if (*pcVar3 == '\x01') {
      if ((*(char *)(param_1 + 0x175) == '\0') && (*(int *)(iVar2 + 0x50) >> 0xc == 0x32)) {
        sub_080BC818(0x50b,0x3c);
        *(char *)(param_1 + 0x175) = '\x01';
        return in_lr;
      }
      if (0x415 < *(int *)(iVar2 + 0x4c) >> 0xc) {
        sub_08014444(&DAT_02022b6c,&DAT_082a2a18);
        *(undefined *)(param_1 + 0x174) = 2;
        return in_lr;
      }
    }
    if ((*(char *)(param_1 + 0x174) == '\x02') && (0x419 < *(int *)(iVar2 + 0x4c) >> 0xc)) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a2a58);
      sub_0800FBF4(1);
      uVar1 = 3;
    }
    else if ((*(char *)(param_1 + 0x174) == '\x03') && (0x427 < *(int *)(iVar2 + 0x4c) >> 0xc)) {
      DAT_02004fa1 = 0;
      sub_08014444(&DAT_02022b6c,&DAT_082a2a78);
      *(undefined4 *)(param_1 + 0x17c) = 0x1194;
      uVar1 = 4;
    }
    else {
      if (*(char *)(param_1 + 0x174) == '\x04') {
        iVar2 = *(int *)(param_1 + 0x17c);
        if ((iVar2 != 0) && (((DAT_02022ae0 & 4) == 0 || ((*(uint *)(param_1 + 8) & 1) != 0)))) {
          *(int *)(param_1 + 0x17c) = iVar2 + -1;
        }
        if ((DAT_02022b64 & 0x20) != 0) {
          sub_08014444(&DAT_02022b6c,&DAT_082a2be8);
          DAT_02004fa0 = DAT_02004fa0 | 0x80;
          DAT_02004fa1 = DAT_02004fa1 | 2;
          DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
          *(undefined *)(param_1 + 0x174) = 5;
          *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
          return in_lr;
        }
        piVar4 = (int *)(param_1 + 0x17c);
        if (*piVar4 == 0x4b0) {
          sub_08014444(&DAT_02022b6c,&DAT_082a2d38);
        }
        if (*piVar4 == 600) {
          sub_08014444(&DAT_02022b6c,&DAT_082a2d60);
        }
        if (*piVar4 == 0) {
          DAT_02004fa0 = DAT_02004fa0 | 0x80;
          DAT_02022b64 = DAT_02022b64 & 0xfffe | 8;
          sub_08014444(&DAT_02022b6c,&DAT_082a2d88);
          *(undefined *)(param_1 + 0x174) = 6;
          return in_lr;
        }
      }
      if (*(char *)(param_1 + 0x174) != '\x05') {
        return in_lr;
      }
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      DAT_02004fa1 = 0;
      if ((DAT_02022adf & 8) == 0) {
        DAT_02004fa1 = 0;
        return in_lr;
      }
      sub_08014444(&DAT_02022b6c,&DAT_082a2d20);
      uVar1 = 6;
    }
    *(undefined *)(param_1 + 0x174) = uVar1;
  }
  return in_lr;
}

