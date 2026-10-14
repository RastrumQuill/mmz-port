// sub_08010594 at 0x08010594 (thumb)

undefined4 sub_08010594(int param_1)

{
  uint uVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  pcVar3 = (char *)(param_1 + 0x174);
  if (*pcVar3 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a2388);
      *pcVar3 = '\x01';
    }
    else if (DAT_02022aec == '\x01') {
      sub_08014444(&DAT_02022b6c,&DAT_082a27a8);
      *pcVar3 = '\x03';
    }
    else if (DAT_02022aec == '\x02') {
      sub_08014444(&DAT_02022b6c,&DAT_082a2808);
      *(undefined4 *)(param_1 + 0x178) = 0;
      *pcVar3 = '\x05';
    }
  }
  else if ((*pcVar3 == '\x01') && (*(int *)(iVar4 + 0x4c) >> 0xc < 0x1e7)) {
    sub_08014444(&DAT_02022b6c,&DAT_082a2400);
    *pcVar3 = '\x02';
  }
  else if ((*(char *)(param_1 + 0x174) == '\x02') && (*(int *)(iVar4 + 0x4c) >> 0xc < 0x1e1)) {
    DAT_02004fa1 = DAT_02004fa1 | 2;
    sub_08014444(&DAT_02022b6c,&DAT_082a2438);
    sub_0800FBF4(1);
    *(char *)(param_1 + 0x174) = '\x03';
  }
  else if ((*(char *)(param_1 + 0x174) == '\x03') && (*(int *)(iVar4 + 0x4c) >> 0xc < 0x1d2)) {
    DAT_02004fa1 = 0;
    sub_08014444(&DAT_02022b6c,&DAT_082a2458);
    *(char *)(param_1 + 0x174) = '\x04';
  }
  else if ((*(char *)(param_1 + 0x174) == '\x04') && ((DAT_02022b64 & 0x20) != 0)) {
    DAT_02004fa0 = DAT_02004fa0 | 0x80;
    DAT_02004fa1 = DAT_02004fa1 | 2;
    sub_08014444(&DAT_02022b6c,&DAT_082a2510);
    DAT_02022b64 = DAT_02022b64 & 0xfffd | 1;
    *(undefined4 *)(param_1 + 0x178) = 0;
    *(char *)(param_1 + 0x174) = '\x05';
  }
  else {
    pcVar3 = (char *)(param_1 + 0x174);
    if (*pcVar3 == '\x05') {
      local_20 = 0x1b9000;
      local_1c = 0xf9000;
      sub_08015698(9,&local_20);
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      DAT_02004fa1 = 0;
      DAT_02022aae = DAT_02022aae | 1;
      *pcVar3 = '\x06';
    }
    if ((*pcVar3 == '\x06') && ((*(byte *)(iVar4 + 0x1ac) & 0x10) != 0)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a2638);
      sub_0800FBF4(2);
      *pcVar3 = '\a';
    }
    else {
      if (*(char *)(param_1 + 0x174) == '\a') {
        puVar2 = (uint *)(param_1 + 0x178);
        uVar1 = *puVar2 + 1;
        *puVar2 = uVar1;
        if ((uVar1 & 0x1f) == 0) {
          sub_080B0034(uVar1 * 0x200 + 0x1b4000,0x104000);
        }
        if (*puVar2 == 0x7a0) {
          *(char *)(param_1 + 0x174) = '\b';
        }
      }
      if ((*(byte *)(param_1 + 0x174) < 7) || (*(int *)(iVar4 + 0x4c) >> 0xc != 0x2a9)) {
        if (*(char *)(param_1 + 0x174) == '\t') {
          DAT_02022aae = DAT_02022aae & 0xfffe;
          DAT_02022ad5 = DAT_02022ad5 | 2;
          DAT_02022b64 = DAT_02022b64 | 4;
          *(char *)(param_1 + 0x174) = '\n';
        }
      }
      else {
        sub_08014444(&DAT_02022b6c,&DAT_082a2738);
        *(byte *)(param_1 + 0x174) = 9;
      }
    }
  }
  return in_lr;
}

