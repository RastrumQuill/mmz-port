// sub_080111FC at 0x080111FC (thumb)

undefined4 sub_080111FC(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 in_lr;
  
  pcVar4 = (char *)(param_1 + 0x174);
  if (*pcVar4 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      puVar3 = &DAT_082a38d0;
    }
    else {
      if (DAT_02022aec != '\x01') {
        return in_lr;
      }
      puVar3 = &DAT_082a3ae0;
    }
    sub_08014444(&DAT_02022b6c,puVar3);
    *pcVar4 = '\x01';
  }
  else if ((DAT_0200520c & 0x7f) == 2) {
    if ((*pcVar4 == '\x01') && (0x550 < *(int *)(*(int *)(param_1 + 0x1c) + 0x4c) >> 0xc)) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
      DAT_02022aae = DAT_02022aae | 1;
      sub_0800FBF4(1);
      *pcVar4 = '\x02';
    }
    else {
      cVar1 = *(char *)(param_1 + 0x174);
      if (cVar1 == '\x02') {
        DAT_02004fa1 = 0;
        sub_08014444(&DAT_02022b6c,&DAT_082a3938);
        uVar2 = 3;
      }
      else {
        if ((cVar1 == '\x03') && ((DAT_02022b64 & 0x20) != 0)) {
          DAT_02004fa0 = DAT_02004fa0 | 0x80;
          DAT_02004fa1 = DAT_02004fa1 | 2;
          sub_08014444(&DAT_02022b6c,&DAT_082a3a80);
          DAT_02022b6e = DAT_02022b6e & 0xfffd;
          DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
          *(char *)(param_1 + 0x174) = '\x04';
          return in_lr;
        }
        pcVar4 = (char *)(param_1 + 0x174);
        if (*pcVar4 == '\x04') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          DAT_02022aae = DAT_02022aae & 0xfffe;
          *pcVar4 = '\x05';
        }
        if (*pcVar4 != '\x05') {
          return in_lr;
        }
        if ((*(byte *)(*(int *)(param_1 + 0x1c) + 0x1a9) & 1) == 0) {
          return in_lr;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a3b28);
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        uVar2 = 6;
      }
      *(undefined *)(param_1 + 0x174) = uVar2;
    }
  }
  return in_lr;
}

