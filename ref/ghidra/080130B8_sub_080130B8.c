// sub_080130B8 at 0x080130B8 (thumb)

undefined4 sub_080130B8(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  pcVar1 = (char *)(param_1 + 0x174);
  if (*pcVar1 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a66cc);
      *pcVar1 = '\x01';
    }
    else if (DAT_02022aec == '\x01') {
      sub_08014444(&DAT_02022b6c,&DAT_082a681c);
      *pcVar1 = '\x02';
    }
  }
  else if ((DAT_0200520c & 0x7f) == 7) {
    if ((*pcVar1 == '\x01') && (0x159 < *(int *)(iVar2 + 0x4c) >> 0xc)) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a6724);
      *pcVar1 = '\x02';
    }
    if ((*(char *)(param_1 + 0x174) == '\x02') && (0x168 < *(int *)(iVar2 + 0x4c) >> 0xc)) {
      DAT_02004fa1 = 0;
      sub_08014444(&DAT_02022b6c,&DAT_082a6734);
      sub_0800FBF4(1);
      *(char *)(param_1 + 0x174) = '\x03';
    }
    else if ((*(char *)(param_1 + 0x174) == '\x03') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a67bc);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
      *(char *)(param_1 + 0x174) = '\x04';
    }
    else {
      pcVar1 = (char *)(param_1 + 0x174);
      if (*pcVar1 == '\x04') {
        DAT_02004fa0 = DAT_02004fa0 & 0x7f;
        DAT_02004fa1 = 0;
        *pcVar1 = '\x05';
      }
      if ((*pcVar1 == '\x05') && ((*(byte *)(iVar2 + 0x1ad) & 0x20) != 0)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a6864);
        *pcVar1 = '\x06';
      }
      else if ((*(char *)(param_1 + 0x174) == '\x06') && (0x177 < *(int *)(iVar2 + 0x4c) >> 0xc)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a6884);
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        *(char *)(param_1 + 0x174) = '\a';
      }
    }
  }
  return in_lr;
}

