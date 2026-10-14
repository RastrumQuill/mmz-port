// sub_080128E0 at 0x080128E0 (thumb)

undefined4 sub_080128E0(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  char *pcVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_02002028;
  iVar7 = *(int *)(param_1 + 0x1c);
  if (*(char *)(param_1 + 0x174) == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a5cb8);
      *(char *)(param_1 + 0x174) = '\x01';
      return in_lr;
    }
    if (DAT_02022aec != '\x01') {
      return in_lr;
    }
    puVar4 = &DAT_082a5f70;
    goto LAB_08012adc;
  }
  if ((DAT_0200520c & 0x7f) != 9) {
    return in_lr;
  }
  if ((*(int *)(iVar7 + 0x4c) >> 0xc) - 0x268U < 0x3b) {
    if ((*(ushort *)(param_1 + 6) & 1) == 0) {
      iVar3 = *(int *)(iVar7 + 0x50) >> 0xc;
      DAT_02022af2 = 1;
      if ((((0x52 < iVar3) && (DAT_02022af2 = 2, 0x5a < iVar3)) && (DAT_02022af2 = 3, 0x6b < iVar3))
         && (DAT_02022af2 = 5, iVar3 < 0x74)) {
        DAT_02022af2 = 4;
      }
      DAT_02002028 = sub_080A0B10(&DAT_0829ff5c,0);
      if (DAT_02002028 != 0) {
        uVar2 = *(ushort *)(param_1 + 6) | 1;
        goto LAB_080129fe;
      }
    }
  }
  else if ((*(ushort *)(param_1 + 6) & 1) != 0) {
    *(byte *)(DAT_02002028 + 10) = *(byte *)(DAT_02002028 + 10) & 0xfc;
    *(undefined4 *)(iVar3 + 0x90) = 0;
    *(undefined *)(iVar3 + 0x94) = 0;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
    *(undefined4 *)(iVar3 + 0xc) = 3;
    *(undefined4 *)(iVar3 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
    uVar2 = *(ushort *)(param_1 + 6) ^ 1;
LAB_080129fe:
    *(ushort *)(param_1 + 6) = uVar2;
  }
  if ((DAT_0200520c & 0x7f) != 9) {
    return in_lr;
  }
  sub_08008FD0(0x41,&DAT_0829ff6c,&DAT_0829ff64,0);
  sub_08008FD0(0x41,&DAT_0829ff74,&DAT_0829ff64,0);
  pbVar5 = (byte *)(param_1 + 0x175);
  if ((((*pbVar5 & 1) == 0) && (*(int *)(iVar7 + 0x50) >> 0xc == 0x46)) &&
     (*(int *)(iVar7 + 0x4c) >> 0xc < 600)) {
    sub_080BC818(0xf07,0x3c);
    *pbVar5 = *pbVar5 | 1;
    return in_lr;
  }
  pbVar5 = (byte *)(param_1 + 0x175);
  if ((((*pbVar5 & 2) == 0) && (*(int *)(iVar7 + 0x50) >> 0xc == 0x46)) &&
     (600 < *(int *)(iVar7 + 0x4c) >> 0xc)) {
    sub_080BC818(0xf07,0x3c);
    *pbVar5 = *pbVar5 | 2;
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x174) != '\x01') || ((DAT_02022adc & 0xe0) != 0xe0)) {
    if ((*(char *)(param_1 + 0x174) == '\x02') &&
       (((*(int *)(iVar7 + 0x4c) >> 0xc == 0x244 &&
         (iVar3 = *(int *)(iVar7 + 0x50) >> 0xc, 0x78 < iVar3)) && (iVar3 < 0x82)))) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
      DAT_02022aae = DAT_02022aae | 1;
      *(char *)(param_1 + 0x174) = '\x03';
      return in_lr;
    }
    if (*(char *)(param_1 + 0x174) == '\x03') {
      DAT_02004fa1 = 0;
      sub_08014444(&DAT_02022b6c,&DAT_082a5dd8);
      sub_0800FBF4(1);
      uVar1 = 4;
    }
    else if ((*(char *)(param_1 + 0x174) == '\x04') && ((DAT_02022b64 & 0x20) != 0)) {
      DAT_02004fa0 = DAT_02004fa0 | 0x80;
      DAT_02004fa1 = DAT_02004fa1 | 2;
      sub_08014444(&DAT_02022b6c,&DAT_082a5ed0);
      DAT_02022b6e = DAT_02022b6e & 0xfffd;
      DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
      uVar1 = 5;
    }
    else {
      pcVar6 = (char *)(param_1 + 0x174);
      if (*pcVar6 == '\x05') {
        DAT_02004fa0 = DAT_02004fa0 & 0x7f;
        DAT_02004fa1 = 0;
        DAT_02022aae = DAT_02022aae & 0xfffe;
        *pcVar6 = '\x06';
      }
      if (*pcVar6 != '\x06') {
        return in_lr;
      }
      if ((*(byte *)(iVar7 + 0x1aa) & 0x40) == 0) {
        return in_lr;
      }
      sub_08014444(&DAT_02022b6c,&DAT_082a5fb8);
      DAT_02022b64 = DAT_02022b64 & 0xfffe;
      uVar1 = 7;
    }
    *(undefined *)(param_1 + 0x174) = uVar1;
    return in_lr;
  }
  puVar4 = &DAT_082a5d58;
LAB_08012adc:
  sub_08014444(&DAT_02022b6c,puVar4);
  *(undefined *)(param_1 + 0x174) = 2;
  return in_lr;
}

