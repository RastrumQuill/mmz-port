// sub_0801A6B4 at 0x0801A6B4 (thumb)

void sub_0801A6B4(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  
  iVar10 = *(int *)(param_1 + 0x20);
  pcVar8 = (char *)(param_1 + 0x17c);
  if (*pcVar8 == '\0') {
    puVar6 = &DAT_0202ec30;
    DAT_0202ec38 = DAT_0202ec38 | 1;
    uVar3 = (uint)DAT_0202ec32;
    if (uVar3 == 0) {
      uVar3 = 0;
      do {
        pcVar8 = (char *)0x1;
        (&DAT_0202ebb4)[(ushort)(&DAT_08326358)[(short)uVar3] >> 3] =
             (&DAT_0202ebb4)[(ushort)(&DAT_08326358)[(short)uVar3] >> 3] &
             ~(byte)(1 << ((ushort)(&DAT_08326358)[(short)uVar3] & 7));
        uVar7 = (int)(short)uVar3 + 1;
        uVar3 = uVar7 & 0xffff;
      } while ((int)(uVar7 * 0x10000) >> 0x10 < 6);
      sub_0801B454(&DAT_0202ec40,&DAT_0832fbd4);
      iVar10 = 0x17c;
      *(undefined *)(param_1 + 0x17c) = 1;
      uVar3 = 0x801a731;
      FUN_0801af1c();
      uVar7 = 0x801a733;
      uVar11 = (*(code *)((uVar3 & 0xfffffffc) + 0x860))();
      uVar4 = (undefined4)uVar11;
      DAT_08326394 = uVar4;
      *(undefined4 *)(iVar10 + 0x34) = uVar4;
      uVar3 = (*(code *)((uVar7 & 0xfffffffc) + 0x768))(uVar4,(int)((ulonglong)uVar11 >> 0x20),0);
      puVar6 = (undefined2 *)(uVar3 << 8);
    }
    if (uVar3 == 1) {
      sub_0801B454(puVar6 + 8,&DAT_0832fc5c);
      cVar1 = '\x02';
    }
    else if (uVar3 == 2) {
      sub_0801B454(puVar6 + 8,&DAT_08330204);
      cVar1 = '\x06';
    }
    else if (uVar3 == 3) {
      sub_0801B454(puVar6 + 8,&DAT_08330274);
      cVar1 = '\a';
    }
    else if (uVar3 == 4) {
      sub_0801B454(puVar6 + 8,&DAT_08330844);
      cVar1 = '\v';
    }
    else {
      if (uVar3 != 5) goto code_r0x0801af1c;
      sub_0801B454(puVar6 + 8,&DAT_083308ac);
      DAT_0202e01c = 2;
      cVar1 = '\r';
    }
    *pcVar8 = cVar1;
    goto code_r0x0801af1c;
  }
  if (((*pcVar8 == '\x01') && (*(int *)(iVar10 + 0x58) < 0xd2000)) &&
     (0x2cfff < *(int *)(iVar10 + 0x54))) {
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_08014D0C(1);
    *pcVar8 = '\x02';
    goto code_r0x0801af1c;
  }
  if (((*(char *)(param_1 + 0x17c) == '\x02') && (*(int *)(iVar10 + 0x58) < 0xc8000)) &&
     ((*(int *)(iVar10 + 0x54) < 0x2d001 &&
      (bVar2 = (byte)DAT_0202ec44 & 1, (DAT_0202ec44 & 1) == 0)))) {
    DAT_0202ed80 = 0xcb000;
    DAT_030032e1 = bVar2;
    *(byte *)(param_1 + 0x17d) = bVar2;
    *(char *)(param_1 + 0x17c) = '\x03';
  }
  if (*(char *)(param_1 + 0x17c) == '\x03') {
    bVar2 = (byte)DAT_0202ec38 & 0x20;
    if ((DAT_0202ec38 & 0x20) != 0) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdd | 1;
      (&DAT_0202ebb4)[(ushort)(&DAT_08326358)[*(byte *)(param_1 + 0x17d) - 1] >> 3] =
           (byte)(1 << ((ushort)(&DAT_08326358)[*(byte *)(param_1 + 0x17d) - 1] & 7)) |
           (&DAT_0202ebb4)[(ushort)(&DAT_08326358)[*(byte *)(param_1 + 0x17d) - 1] >> 3];
      *(byte *)(param_1 + 0x17d) = 10;
      if ((DAT_0202ebba & 0xe) == 0xe) {
        sub_0801B454(&DAT_0202ec40,&DAT_083300a4);
        *(char *)(param_1 + 0x17c) = '\x04';
      }
      else {
        sub_0801B454(&DAT_0202ec40,&DAT_0832ff5c);
      }
      goto code_r0x0801af1c;
    }
    pbVar9 = (byte *)(param_1 + 0x17d);
    if (*pbVar9 == 10) {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = bVar2;
      sub_08014D0C(1);
      *pbVar9 = bVar2;
    }
    if (*pbVar9 != 0) goto code_r0x0801af1c;
    if (*(int *)(iVar10 + 0x54) < 0x69001) goto LAB_0801a9dc;
    iVar5 = *(int *)(iVar10 + 0x58);
    if (iVar5 - 0x6e000U < 0xa000) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832fcc4);
      bVar2 = 1;
    }
    else if (iVar5 - 0xbe000U < 0xa000) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832fd8c);
      bVar2 = 2;
    }
    else {
      if (0x9fff < iVar5 - 0x96000U) goto LAB_0801a9dc;
      sub_0801B454(&DAT_0202ec40,&DAT_0832fe5c);
      bVar2 = 3;
    }
  }
  else {
LAB_0801a9dc:
    pcVar8 = (char *)(param_1 + 0x17c);
    if (*pcVar8 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_08014D0C(1);
      *pcVar8 = '\x05';
    }
    if ((*pcVar8 == '\x05') && (*(int *)(iVar10 + 0x58) < 0xbe000)) {
      sub_08014D0C(2);
      *pcVar8 = '\x06';
    }
    if (((*(char *)(param_1 + 0x17c) == '\x06') && (*(int *)(iVar10 + 0x58) < 0x78000)) &&
       (0x2cfff < *(int *)(iVar10 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_08014D0C(3);
      *(char *)(param_1 + 0x17c) = '\a';
      goto code_r0x0801af1c;
    }
    if (((*(char *)(param_1 + 0x17c) == '\a') && (*(int *)(iVar10 + 0x58) < 0x6e000)) &&
       ((*(int *)(iVar10 + 0x54) < 0x2d001 &&
        (bVar2 = (byte)DAT_0202ec44 & 1, (DAT_0202ec44 & 1) == 0)))) {
      DAT_0202ed80 = 0x71000;
      DAT_030032e1 = bVar2;
      *(byte *)(param_1 + 0x17d) = bVar2;
      *(char *)(param_1 + 0x17c) = '\b';
    }
    if (*(char *)(param_1 + 0x17c) == '\b') {
      bVar2 = (byte)DAT_0202ec38 & 0x20;
      if ((DAT_0202ec38 & 0x20) != 0) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdd | 1;
        (&DAT_0202ebb4)[(ushort)(&DAT_08326358)[*(byte *)(param_1 + 0x17d) - 1] >> 3] =
             (byte)(1 << ((ushort)(&DAT_08326358)[*(byte *)(param_1 + 0x17d) - 1] & 7)) |
             (&DAT_0202ebb4)[(ushort)(&DAT_08326358)[*(byte *)(param_1 + 0x17d) - 1] >> 3];
        *(byte *)(param_1 + 0x17d) = 10;
        if ((DAT_0202ebba & 0x70) == 0x70) {
          sub_0801B454(&DAT_0202ec40,&DAT_083306dc);
          *(char *)(param_1 + 0x17c) = '\t';
        }
        else {
          sub_0801B454(&DAT_0202ec40,&DAT_08330584);
        }
        goto code_r0x0801af1c;
      }
      pbVar9 = (byte *)(param_1 + 0x17d);
      if (*pbVar9 == 10) {
        DAT_030032e0 = DAT_030032e0 & 0x7f;
        DAT_030032e1 = bVar2;
        sub_08014D0C(3);
        *pbVar9 = bVar2;
      }
      if (*pbVar9 != 0) goto code_r0x0801af1c;
      if ((0x96000 < *(int *)(iVar10 + 0x54)) && (*(int *)(iVar10 + 0x58) - 0x14000U < 0xa000)) {
        sub_0801B454(&DAT_0202ec40,&DAT_083303cc);
        bVar2 = 5;
        goto LAB_0801af1a;
      }
      if (0x69000 < *(int *)(iVar10 + 0x54)) {
        if (*(int *)(iVar10 + 0x58) - 0x14000U < 0xa000) {
          sub_0801B454(&DAT_0202ec40,&DAT_083302dc);
          *(undefined *)(param_1 + 0x17d) = 4;
          goto code_r0x0801af1c;
        }
        if (*(int *)(iVar10 + 0x58) - 0x3c000U < 0xa000) {
          sub_0801B454(&DAT_0202ec40,&DAT_083304ac);
          *(undefined *)(param_1 + 0x17d) = 6;
          goto code_r0x0801af1c;
        }
      }
    }
    pcVar8 = (char *)(param_1 + 0x17c);
    if (*pcVar8 == '\t') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      sub_08014D0C(3);
      *pcVar8 = '\n';
    }
    if ((*pcVar8 == '\n') && (*(int *)(iVar10 + 0x58) < 0xbe000)) {
      sub_08014D0C(4);
      *pcVar8 = '\v';
    }
    if (((*(char *)(param_1 + 0x17c) == '\v') && (*(int *)(iVar10 + 0x58) < 0x28000)) &&
       (*(int *)(iVar10 + 0x54) < 0x2d001)) {
      DAT_030032e1 = DAT_030032e1 | 2;
      if (DAT_0202ed98 != 0xba) {
        if (DAT_0202ed98 != 0xffffffff) {
          sub_08003274(DAT_0202ed98 & 0xffff);
          DAT_0202ed98 = 0xffffffff;
        }
        sub_08003264(0xba);
        DAT_0202ed98 = 0xba;
      }
      DAT_0202e01c = 0;
      sub_08014D0C(5);
      *(undefined *)(param_1 + 0x17c) = 0xc;
      goto code_r0x0801af1c;
    }
    if (((*(char *)(param_1 + 0x17c) == '\f') && (*(int *)(iVar10 + 0x58) < 0x1d000)) &&
       (bVar2 = (byte)DAT_0202ec44 & 1, (DAT_0202ec44 & 1) == 0)) {
      DAT_030032e1 = bVar2;
      sub_0801B454(&DAT_0202ec40,&DAT_08330904);
      *(byte *)(param_1 + 0x17d) = bVar2;
      *(char *)(param_1 + 0x17c) = '\x0e';
    }
    if (((*(char *)(param_1 + 0x17c) == '\r') && (*(int *)(iVar10 + 0x58) < 0x1d000)) &&
       (bVar2 = (byte)DAT_0202ec44 & 1, (DAT_0202ec44 & 1) == 0)) {
      DAT_030032e1 = bVar2;
      sub_0801B454(&DAT_0202ec40,&DAT_08330fe4);
      *(byte *)(param_1 + 0x17d) = bVar2;
      *(char *)(param_1 + 0x17c) = '\x0e';
    }
    pbVar9 = (byte *)(param_1 + 0x17c);
    if (*pbVar9 == 0xe) {
      DAT_0202ebbb = DAT_0202ebbb & 0xdf;
      if (*(char *)(param_1 + 0x17d) == '\0') {
        DAT_0202e5a2 = 0x200;
        DAT_0202e3a2 = 8;
        *(char *)(param_1 + 0x17d) = '\x01';
      }
      if ((DAT_0202ec38 & 0x20) != 0) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_0833109c);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
        bVar2 = 0xf;
        goto LAB_0801af1a;
      }
    }
    pcVar8 = (char *)(param_1 + 0x17c);
    if (*pcVar8 == '\x0f') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      *pcVar8 = '\x10';
    }
    if ((*pcVar8 == '\x10') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_083311ec);
      DAT_0202ec38 = DAT_0202ec38 | 0x85;
      *pcVar8 = '\x11';
      goto code_r0x0801af1c;
    }
    pbVar9 = (byte *)(param_1 + 0x17c);
    if (*pbVar9 == 0x11) {
      DAT_030016f5 = 3;
      sub_080DE1BC();
      DAT_02000f90 = DAT_02000f90 & 0xf0ff | 0x100;
      sub_0801B454(&DAT_0202ec40,&DAT_08331674);
      bVar2 = 0x12;
    }
    else {
      if (*pbVar9 != 0x12) goto code_r0x0801af1c;
      DAT_030016f5 = 1;
      sub_0801B454(&DAT_0202ec40,&DAT_083316c4);
      DAT_0202ec38 = DAT_0202ec38 & 0xff7e;
      bVar2 = 0x13;
    }
  }
LAB_0801af1a:
  *pbVar9 = bVar2;
code_r0x0801af1c:
                    /* WARNING: Could not recover jumptable at 0x0801af2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

