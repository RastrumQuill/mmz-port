// sub_080132A4 at 0x080132A4 (thumb)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sub_080132A4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined uVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  pcVar5 = (char *)(param_1 + 0x174);
  if (*pcVar5 == '\0') {
    DAT_02022b64 = DAT_02022b64 | 1;
    if (DAT_02022aec == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a6af8);
      *pcVar5 = '\x01';
                    /* WARNING: Subroutine does not return */
      FUN_08013b4a();
    }
    if (DAT_02022aec == '\x01') {
      sub_08014444(&DAT_02022b6c,&DAT_082a6e88);
      *pcVar5 = '\x03';
                    /* WARNING: Subroutine does not return */
      FUN_08013b4a();
    }
    if (DAT_02022aec == '\x02') {
      puVar3 = &DAT_082a6e88;
LAB_0801372a:
      sub_08014444(&DAT_02022b6c,puVar3);
      *pcVar5 = '\x05';
      goto code_r0x08013b4a;
    }
    if (DAT_02022aec == '\x03') {
      sub_08014444(&DAT_02022b6c,&DAT_082a71f8);
      *pcVar5 = '\a';
                    /* WARNING: Subroutine does not return */
      FUN_08013b4a();
    }
    if (DAT_02022aec == '\x04') {
      sub_08014444(&DAT_02022b6c,&DAT_082a71f8);
      *pcVar5 = '\t';
                    /* WARNING: Subroutine does not return */
      FUN_08013b4a();
    }
    if (DAT_02022aec != '\x05') {
                    /* WARNING: Subroutine does not return */
      FUN_08013b4a();
    }
    puVar3 = &DAT_082a7958;
LAB_080137da:
    sub_08014444(&DAT_02022b6c,puVar3);
    *(undefined *)(param_1 + 0x174) = 10;
    goto code_r0x08013b4a;
  }
  if ((DAT_0200520c & 0x7f) == 8) {
    if ((*pcVar5 == '\x01') && (0x1fe < *(int *)(iVar6 + 0x4c) >> 0xc)) {
      DAT_02004fa1 = DAT_02004fa1 | 2;
    }
    else {
      if ((*(char *)(param_1 + 0x174) == '\x02') &&
         ((0x20d < *(int *)(iVar6 + 0x4c) >> 0xc && (*(short *)(param_1 + 0x10) == 0)))) {
        _DAT_02022adc = _DAT_02022adc | 0x1400000;
        DAT_02004fa1 = 0;
        sub_0800FBF4(1);
        *(undefined *)(param_1 + 0x175) = 0;
        *(char *)(param_1 + 0x174) = '\x03';
      }
      if (*(char *)(param_1 + 0x174) != '\x03') {
LAB_08013564:
        pcVar5 = (char *)(param_1 + 0x174);
        if (*pcVar5 == '\x04') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          *pcVar5 = '\x05';
        }
        if ((*pcVar5 == '\x05') && (0x276 < *(int *)(iVar6 + 0x4c) >> 0xc)) {
          *pcVar5 = '\x06';
          goto code_r0x08013b4a;
        }
        if (((*(char *)(param_1 + 0x174) == '\x06') && (0x285 < *(int *)(iVar6 + 0x4c) >> 0xc)) &&
           (*(short *)(param_1 + 0x10) == 0)) {
          _DAT_02022adc = _DAT_02022adc | 0x1800000;
          sub_0800FBF4(3);
          *(undefined *)(param_1 + 0x175) = 0;
          *(char *)(param_1 + 0x174) = '\a';
        }
        if (*(char *)(param_1 + 0x174) == '\a') {
          bVar1 = (byte)DAT_02022b64 & 0x20;
          if ((DAT_02022b64 & 0x20) != 0) {
            DAT_02004fa0 = DAT_02004fa0 | 0x80;
            DAT_02004fa1 = DAT_02004fa1 | 2;
            if (*(char *)(param_1 + 0x175) == '\x06') {
              sub_08014444(&DAT_02022b6c,&DAT_082a7240);
            }
            else if (*(char *)(param_1 + 0x175) == '\b') {
              sub_08014444(&DAT_02022b6c,&DAT_082a7388);
            }
            else {
              sub_08014444(&DAT_02022b6c,&DAT_082a7108);
            }
            DAT_02022b6e = DAT_02022b6e & 0xfffd;
            DAT_02022b64 = DAT_02022b64 & 0xffdd | 1;
            (&DAT_02022ad4)[*(ushort *)(&DAT_0829ff7c + (*(byte *)(param_1 + 0x175) - 1) * 2) >> 3]
                 = (byte)(1 << (*(ushort *)(&DAT_0829ff7c + (*(byte *)(param_1 + 0x175) - 1) * 2) &
                               7)) |
                   (&DAT_02022ad4)
                   [*(ushort *)(&DAT_0829ff7c + (*(byte *)(param_1 + 0x175) - 1) * 2) >> 3];
            sub_0800FBF4(3);
            *(byte *)(param_1 + 0x175) = 0;
            if ((DAT_02022ade & 0x3c) == 0x3c) {
              _DAT_02022adc = _DAT_02022adc & 0xfe7fffff;
              sub_0800FBF4(4);
              *(undefined *)(param_1 + 0x174) = 8;
            }
            goto code_r0x08013b4a;
          }
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          pcVar5 = (char *)(param_1 + 0x175);
          DAT_02004fa1 = bVar1;
          if (*pcVar5 != '\0') goto code_r0x08013b4a;
          iVar4 = *(int *)(iVar6 + 0x4c) >> 0xc;
          if (iVar4 == 0x368) {
            puVar3 = &DAT_082a6ed0;
            goto LAB_0801372a;
          }
          if (iVar4 == 0x369) {
            sub_08014444(&DAT_02022b6c,&DAT_082a6f60);
            *pcVar5 = '\x06';
            goto code_r0x08013b4a;
          }
          iVar4 = sub_080C8AD0(iVar4,0xf);
          if (iVar4 == 0x32) {
            puVar3 = &DAT_082a6fe8;
            uVar7 = 7;
            goto LAB_0801377a;
          }
          if (iVar4 == 0x39) {
            sub_08014444(&DAT_02022b6c,&DAT_082a7078);
            *pcVar5 = '\b';
            goto code_r0x08013b4a;
          }
        }
        pcVar5 = (char *)(param_1 + 0x174);
        if (*pcVar5 == '\b') {
          DAT_02004fa0 = DAT_02004fa0 & 0x7f;
          DAT_02004fa1 = 0;
          *pcVar5 = '\t';
        }
        if ((*pcVar5 == '\t') && (0x31b < *(int *)(iVar6 + 0x4c) >> 0xc)) {
          puVar3 = &DAT_082a7478;
          goto LAB_080137da;
        }
        if ((*(char *)(param_1 + 0x174) == '\n') && (0x32a < *(int *)(iVar6 + 0x4c) >> 0xc)) {
          sub_08014444(&DAT_02022b6c,&DAT_082a7488);
          sub_0800FBF4(5);
          *(char *)(param_1 + 0x174) = '\v';
          goto code_r0x08013b4a;
        }
        pcVar5 = (char *)(param_1 + 0x174);
        if ((*pcVar5 != '\v') || ((DAT_02022b64 & 0x20) == 0)) {
          if ((*(char *)(param_1 + 0x174) == '\f') && ((DAT_02022b64 & 0x20) != 0)) {
            DAT_02004fa0 = DAT_02004fa0 | 0x80;
            DAT_02022b6e = DAT_02022b6e & 0xfffd;
            DAT_02022b64 = DAT_02022b64 & 0xffdf | 0x85;
            *(undefined *)(param_1 + 0x175) = 0;
            *(char *)(param_1 + 0x174) = '\r';
            goto code_r0x08013b4a;
          }
          goto LAB_080138ec;
        }
        DAT_02004fa0 = DAT_02004fa0 | 0x80;
        sub_08014444(&DAT_02022b6c,&DAT_082a7690);
        DAT_02022b6e = DAT_02022b6e & 0xfffd;
        DAT_02022b64 = DAT_02022b64 & 0xffdf | 1;
        cVar2 = '\f';
        goto LAB_08013b48;
      }
      bVar1 = (byte)DAT_02022b64 & 0x20;
      if ((DAT_02022b64 & 0x20) != 0) {
        DAT_02004fa0 = DAT_02004fa0 | 0x80;
        DAT_02004fa1 = DAT_02004fa1 | 2;
        sub_08014444(&DAT_02022b6c,&DAT_082a6da0);
        DAT_02022b6e = DAT_02022b6e & 0xfffd;
        DAT_02022b64 = DAT_02022b64 & 0xffdd | 1;
        (&DAT_02022ad4)[*(ushort *)(&DAT_0829ff7c + (*(byte *)(param_1 + 0x175) - 1) * 2) >> 3] =
             (byte)(1 << (*(ushort *)(&DAT_0829ff7c + (*(byte *)(param_1 + 0x175) - 1) * 2) & 7)) |
             (&DAT_02022ad4)[*(ushort *)(&DAT_0829ff7c + (*(byte *)(param_1 + 0x175) - 1) * 2) >> 3]
        ;
        sub_0800FBF4(1);
        *(byte *)(param_1 + 0x175) = 0;
        if ((_DAT_02022adc & 0x3c000) == 0x3c000) {
          _DAT_02022adc = _DAT_02022adc & 0xfebfffff;
          sub_0800FBF4(2);
          *(char *)(param_1 + 0x174) = '\x04';
        }
        goto code_r0x08013b4a;
      }
      DAT_02004fa0 = DAT_02004fa0 & 0x7f;
      pcVar5 = (char *)(param_1 + 0x175);
      DAT_02004fa1 = bVar1;
      if (*pcVar5 != '\0') goto code_r0x08013b4a;
      iVar4 = sub_080C8AD0(*(int *)(iVar6 + 0x4c) >> 0xc,0xf);
      if (iVar4 == 0x1d) {
        sub_08014444(&DAT_02022b6c,&DAT_082a6b60);
        *pcVar5 = '\x01';
        goto code_r0x08013b4a;
      }
      if (iVar4 != 0x1f) {
        if (iVar4 != 0x21) {
          if (iVar4 == 0x2f) {
            sub_08014444(&DAT_02022b6c,&DAT_082a6d10);
            *pcVar5 = '\x04';
            goto code_r0x08013b4a;
          }
          goto LAB_08013564;
        }
        puVar3 = &DAT_082a6c80;
        uVar7 = 3;
LAB_0801377a:
        sub_08014444(&DAT_02022b6c,puVar3);
        *(undefined *)(param_1 + 0x175) = uVar7;
        goto code_r0x08013b4a;
      }
      sub_08014444(&DAT_02022b6c,&DAT_082a6bf0);
    }
    *pcVar5 = '\x02';
  }
  else {
LAB_080138ec:
    if (*(char *)(param_1 + 0x174) != '\r') goto code_r0x08013b4a;
    pcVar5 = (char *)(param_1 + 0x175);
    cVar2 = *pcVar5;
    if (cVar2 == '\0') {
      sub_08014444(&DAT_02022b6c,&DAT_082a7798);
      sub_080053F0(DAT_0202320c);
      cVar2 = '\x01';
    }
    else if (cVar2 == '\x01') {
      sub_08014444(&DAT_02022b6c,&DAT_082a79b0);
      cVar2 = '\x02';
    }
    else if (cVar2 == '\x02') {
      DAT_02023644 = 0;
      sub_080053F0(DAT_02022e90);
      sub_080053F0(DAT_0202320c);
      cVar2 = '\x03';
    }
    else if (cVar2 == '\x03') {
      DAT_03001ba2 = 0x20;
      DAT_03001ba1 = 0x20;
      DAT_03001ba0 = 0x20;
      DAT_02004f70 = 0;
      DAT_02004f80 = 0;
      DAT_02004f8e = 0xff;
      DAT_02004f90 = 0;
      DAT_030017a0 = 0;
      DAT_02023680 = DAT_02023680 | 1;
      DAT_02022cb0 = 1;
      cVar2 = '\x04';
    }
    else if ((cVar2 == '\x04') && ((DAT_02023680 & 1) == 0)) {
      DAT_03001ba2 = 0x20;
      DAT_03001ba1 = 0x20;
      DAT_03001ba0 = 0x20;
      DAT_02004f70 = 0;
      DAT_02004f80 = 0;
      DAT_02004f8e = 0xff;
      DAT_02004f90 = 0;
      DAT_030017a0 = 0;
      FUN_080bbe2c();
      sub_080060B4(&DAT_02022c7c,0x10000);
      sub_08014444(&DAT_02022b6c,&DAT_082a7b40);
      cVar2 = '\x05';
    }
    else {
      pcVar5 = (char *)(param_1 + 0x175);
      if (*pcVar5 == '\x05') {
        DAT_03001ba2 = 0x20;
        DAT_03001ba1 = 0x20;
        DAT_03001ba0 = 0x20;
        DAT_02004f70 = 0;
        DAT_02004f80 = 0;
        DAT_02004f8e = 0xff;
        DAT_02004f90 = 0;
        DAT_030017a0 = 0;
        DAT_02023680 = DAT_02023680 | 2;
        *pcVar5 = '\x06';
        goto code_r0x08013b4a;
      }
      if ((*pcVar5 != '\x06') || (DAT_02022b6e = DAT_02022b6e | 1, (DAT_02023680 & 2) != 0))
      goto code_r0x08013b4a;
      DAT_02004f70 = 0;
      DAT_02004f80 = 0;
      DAT_02004f8e = 0xff;
      DAT_02004f90 = 0;
      DAT_030017a0 = 0;
      DAT_03001ba2 = 0x40;
      DAT_03001ba1 = 0x40;
      DAT_03001ba0 = 0x40;
      DAT_02004f30 = DAT_02004f30 & 0xc1ff;
      FUN_080bbe2c();
      sub_08014444(&DAT_02022b6c,&DAT_082a7c18);
      DAT_02022b64 = DAT_02022b64 & 0xff7e | 4;
      cVar2 = '\a';
    }
LAB_08013b48:
    *pcVar5 = cVar2;
  }
code_r0x08013b4a:
                    /* WARNING: Could not recover jumptable at 0x08013b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

