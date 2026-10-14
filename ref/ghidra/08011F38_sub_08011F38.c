// sub_08011F38 at 0x08011F38 (thumb)

undefined4 sub_08011F38(int param_1)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x1c);
  bVar1 = *(byte *)(param_1 + 0x174);
  if (bVar1 == 0) {
    DAT_02022b64 = DAT_02022b64 | 1;
    DAT_02022ada = DAT_02022ada & 0x7f;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a4fc8);
      *(byte *)(param_1 + 0x174) = 1;
      return in_lr;
    }
    if (DAT_02022aec != '\x01') {
      if (DAT_02022aec != '\x02') {
        return in_lr;
      }
      puVar2 = &DAT_082a54d8;
LAB_080122b2:
      sub_08014444(&DAT_02022b6c,puVar2);
      *(undefined *)(param_1 + 0x174) = 5;
      return in_lr;
    }
    sub_08014444(&DAT_02022b6c,&DAT_082a5478);
  }
  else {
    if ((DAT_0200520c & 0x7f) != 5) {
      if ((DAT_0200520c & 0x7f) != 4) {
        return in_lr;
      }
      if (((*(char *)(param_1 + 0x175) == '\x01') && (bVar1 < 3)) &&
         ((*(ushort *)(param_1 + 6) & 1) != 0)) {
        sub_08014444(&DAT_02022b6c,&DAT_082a5048);
        *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) ^ 1;
        return in_lr;
      }
      *(undefined *)(param_1 + 0x175) = 1;
      return in_lr;
    }
    if ((DAT_02022adb & 1) != 0) {
      if ((DAT_02022ada & 0x80) == 0) {
        sub_080BC818(0xd13,0x3c);
      }
      sub_08001EAC(0xbc);
      DAT_02022ada = DAT_02022ada | 0x80;
      DAT_02022adb = DAT_02022adb & 0xfe;
      *(ushort *)(param_1 + 0x176) = (*(ushort *)(param_1 + 0x176) & 0x3f) + 0x200;
    }
    bVar1 = DAT_02022ada;
    if ((DAT_02022ada & 0x80) != 0) {
      uVar4 = (uint)*(ushort *)(param_1 + 0x176);
      iVar3 = 8 - ((int)((uint)(ushort)(&DAT_080c8ea4)[(uVar4 & 0x3f) * 4] << 0x10) >> 0x15);
      DAT_03001ba0 = (char)(iVar3 >> 1) + ' ';
      DAT_03001ba1 = ' ' - (char)iVar3;
      uVar4 = uVar4 - 1;
      DAT_03001ba2 = DAT_03001ba1;
      *(ushort *)(param_1 + 0x176) = (ushort)uVar4;
      if ((uVar4 & 0xffff) == 0xffff) {
        DAT_03001ba2 = ' ';
        DAT_03001ba1 = ' ';
        DAT_03001ba0 = ' ';
        DAT_02022ada = bVar1 & 0x7f;
      }
    }
    if (((*(char *)(param_1 + 0x175) == '\0') && (*(byte *)(param_1 + 0x174) < 3)) &&
       ((*(ushort *)(param_1 + 6) & 1) == 0)) {
      sub_08014444(&DAT_02022b6c,&DAT_082a5068);
      *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) | 1;
      return in_lr;
    }
    *(undefined *)(param_1 + 0x175) = 0;
    if ((*(char *)(param_1 + 0x174) == '\x01') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x159)) {
      *(undefined4 *)(iVar5 + 0x4c) = 0x159000;
      sub_08014444(&DAT_02022b6c,&DAT_082a5088);
      *(char *)(param_1 + 0x174) = '\x02';
      return in_lr;
    }
    if (((*(char *)(param_1 + 0x174) != '\x02') || (*(int *)(iVar5 + 0x4c) >> 0xc != 0xee)) ||
       (*(int *)(iVar5 + 0x50) >> 0xc != 0x6b)) {
      if ((byte)(*(char *)(param_1 + 0x174) - 3U) < 2) {
        iVar3 = *(int *)(iVar5 + 0x4c) >> 0xc;
        if ((iVar3 == 0xf1) && (*(int *)(iVar5 + 0x50) >> 0xc == 0x6b)) {
          *(undefined4 *)(iVar5 + 0x4c) = 0xf2000;
          sub_08014444(&DAT_02022b6c,&DAT_082a5158);
          return in_lr;
        }
        if ((iVar3 == 0xfd) && (*(int *)(iVar5 + 0x50) >> 0xc == 0x57)) {
          *(undefined4 *)(iVar5 + 0x4c) = 0xfcfff;
          sub_08014444(&DAT_02022b6c,&DAT_082a5190);
          return in_lr;
        }
      }
      if (((*(char *)(param_1 + 0x174) == '\x03') && (*(int *)(iVar5 + 0x4c) >> 0xc == 0x8d)) &&
         (iVar3 = sub_080C8AD0(*(int *)(iVar5 + 0x50) >> 0xc,10), iVar3 == 8)) {
        if (DAT_02022af1 == '\0') {
          *(undefined4 *)(iVar5 + 0x4c) = 0x8e000;
          sub_08014444(&DAT_02022b6c,&DAT_082a51c8);
          return in_lr;
        }
        if (DAT_02022af1 == '\a') {
          sub_08014444(&DAT_02022b6c,&DAT_082a5270);
          *(char *)(param_1 + 0x174) = '\x04';
          return in_lr;
        }
        *(undefined4 *)(iVar5 + 0x4c) = 0x8e000;
        if ((DAT_02022ada & 0x40) == 0) {
          sub_08014444(&DAT_02022b6c,&DAT_082a5200);
          return in_lr;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a5238);
        return in_lr;
      }
      if (((*(char *)(param_1 + 0x174) != '\x04') || (0x86 < *(int *)(iVar5 + 0x4c) >> 0xc)) ||
         (0x59 < *(int *)(iVar5 + 0x50) >> 0xc)) {
        if (((*(char *)(param_1 + 0x174) == '\x05') && (*(int *)(iVar5 + 0x4c) >> 0xc < 0x78)) &&
           (*(int *)(iVar5 + 0x50) >> 0xc < 0x5a)) {
          DAT_02004fa1 = 0;
          sub_08014444(&DAT_02022b6c,&DAT_082a5308);
          sub_0800FBF4(2);
          *(char *)(param_1 + 0x174) = '\x06';
          return in_lr;
        }
        if ((*(char *)(param_1 + 0x174) == '\x06') && ((DAT_02022b64 & 0x20) != 0)) {
          DAT_02004fa0 = DAT_02004fa0 | 0x80;
          DAT_02004fa1 = DAT_02004fa1 | 2;
          sub_08014444(&DAT_02022b6c,&DAT_082a5388);
          DAT_02022b6e = DAT_02022b6e & 0xfffd;
          DAT_02022b64 = DAT_02022b64 & 0xfffd | 5;
          *(char *)(param_1 + 0x174) = '\a';
          return in_lr;
        }
        pcVar6 = (char *)(param_1 + 0x174);
        if (*pcVar6 == '\a') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          *pcVar6 = '\b';
        }
        if (*pcVar6 != '\b') {
          return in_lr;
        }
        if ((DAT_02022adf & 0x20) == 0) {
          return in_lr;
        }
        sub_08014444(&DAT_02022b6c,&DAT_082a5450);
        DAT_02022b64 = DAT_02022b64 & 0xfffe;
        *pcVar6 = '\t';
        return in_lr;
      }
      DAT_02004fa1 = DAT_02004fa1 | 2;
      puVar2 = &DAT_082a52a8;
      goto LAB_080122b2;
    }
    *(undefined4 *)(iVar5 + 0x4c) = 0xee000;
    sub_08014444(&DAT_02022b6c,&DAT_082a50d0);
    sub_0800FBF4(1);
  }
  *(undefined *)(param_1 + 0x174) = 3;
  return in_lr;
}

