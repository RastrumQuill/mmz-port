// sub_0801706C at 0x0801706C (thumb)

longlong sub_0801706C(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  uint in_lr;
  
  iVar9 = *(int *)(param_1 + 0x20);
  pcVar7 = (char *)(param_1 + 0x17c);
  if (*pcVar7 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    *(undefined2 *)(param_1 + 0x16e) = 0x601;
    DAT_0202ebb4 = DAT_0202ebb4 & 0xfb;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_083297ec);
      sub_08014D0C(1);
      *(undefined2 *)(param_1 + 10) = 0;
      *pcVar7 = '\x01';
      goto LAB_08017758;
    }
    if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832991c);
      *pcVar7 = '\x01';
      goto LAB_08017758;
    }
    if (DAT_0202ec32 == 2) {
      sub_0801B454(&DAT_0202ec40,&DAT_08329a64);
LAB_0801725a:
      uVar2 = 5;
    }
    else if (DAT_0202ec32 == 3) {
      sub_0801B454(&DAT_0202ec40,&DAT_08329b4c);
      uVar2 = 6;
    }
    else {
      if (DAT_0202ec32 == 4) {
        sub_0801B454(&DAT_0202ec40,&DAT_08329e14);
        goto LAB_080175bc;
      }
      if (DAT_0202ec32 != 5) goto LAB_08017758;
      sub_0801B454(&DAT_0202ec40,&DAT_08329f14);
      uVar2 = 0xc;
    }
  }
  else {
    if (*pcVar7 == '\x01') {
      if ((0xa5000 < *(int *)(iVar9 + 0x54)) && (DAT_0202ed64 != 0)) {
        sub_08014FBC(&DAT_0202ed18,6);
        DAT_0202ed31 = 4;
        DAT_0202ed3a = 0;
        DAT_0202ed64 = 0;
      }
      if (0xc9fff < *(int *)(iVar9 + 0x54)) {
        DAT_030032e1 = DAT_030032e1 | 2;
        *(undefined *)(param_1 + 0x17c) = 2;
        goto LAB_08017758;
      }
    }
    pcVar7 = (char *)(param_1 + 0x17c);
    if (*pcVar7 == '\x02') {
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_08329984);
      *pcVar7 = '\x03';
      goto LAB_08017758;
    }
    if ((*pcVar7 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
      DAT_030032e0 = DAT_030032e0 | 0x80;
      DAT_030032e1 = DAT_030032e1 | 2;
      sub_0801B454(&DAT_0202ec40,&DAT_083299fc);
      DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
      DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
      sub_08014D0C(2);
      *pcVar7 = '\x04';
      goto LAB_08017758;
    }
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      goto LAB_0801725a;
    }
    if (cVar1 == '\n') {
LAB_080172b0:
      if ((DAT_0202ec38 & 0x20) != 0) {
        sub_0801B454(&DAT_0202ec40,&DAT_08329aec);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
        *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) | 1;
        *(undefined *)(param_1 + 0x17c) = 5;
        goto LAB_08017758;
      }
    }
    else {
      if (((((*(ushort *)(param_1 + 10) & 1) == 0) && (0xb4000 < *(int *)(iVar9 + 0x54))) &&
          (*(int *)(iVar9 + 0x54) < 0xc4001)) &&
         ((0x6e000 < *(int *)(iVar9 + 0x58) && (*(int *)(iVar9 + 0x58) < 0x78000)))) {
        sub_0801B454(&DAT_0202ec40,&DAT_08329abc);
        *(char *)(param_1 + 0x17c) = '\n';
      }
      if (*(char *)(param_1 + 0x17c) == '\n') goto LAB_080172b0;
    }
    if ((*(char *)(param_1 + 0x17c) == '\x05') && (0x45fff < *(int *)(iVar9 + 0x58))) {
      sub_0801B51C(3,&DAT_083262c8);
      sub_0801B51C(4,&DAT_083262d8);
      *(char *)(param_1 + 0x17c) = '\x06';
    }
    if ((*(char *)(param_1 + 0x17c) == '\x06') && (0x12bfff < *(int *)(iVar9 + 0x54))) {
      sub_0801B454(&DAT_0202ec40,&DAT_08329bb4);
      sub_08014D0C(3);
      uVar2 = 7;
      goto LAB_0801725c;
    }
    if (*(char *)(param_1 + 0x17c) == '\a') {
      uVar3 = 0;
      do {
        (&DAT_0202edb8)[(short)uVar3] = 0;
        uVar5 = (int)(short)uVar3 + 1;
        uVar3 = uVar5 & 0xffff;
      } while ((int)(uVar5 * 0x10000) >> 0x10 < 6);
      *(undefined4 *)(param_1 + 0x184) = 0x1518;
      DAT_0202edb8 = *(undefined4 *)(param_1 + 0x80);
      DAT_0202e01c = 1;
      *(undefined *)(param_1 + 0x17d) = 0;
      *(undefined *)(param_1 + 0x17c) = 8;
    }
    if (*(char *)(param_1 + 0x17c) == '\b') {
      if ((DAT_0202ebbb & 0x20) != 0) {
        *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) | 1;
      }
      DAT_0202ebbb = DAT_0202ebbb & 0xdf;
      uVar3 = *(uint *)(param_1 + 0x184);
      if (uVar3 == 0) {
        if (*(short *)(DAT_0202f078 + 10) == *(short *)(DAT_0202f078 + 8)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          sub_0801B454(&DAT_0202ec40,&DAT_08329d0c);
          *(uint *)(param_1 + 0x184) = 0xffffffff;
          *(char *)(param_1 + 0x17c) = '\t';
          goto LAB_08017758;
        }
      }
      else {
        if ((uVar3 & 0x3f) == 0) {
          uVar3 = 0;
          do {
            uVar5 = (uint)(short)uVar3;
            piVar6 = &DAT_0202edb8 + uVar5;
            if (*piVar6 == 0) {
              if ((uVar5 & 1) == 0) {
                uVar8 = *(undefined4 *)(param_1 + 0x30);
                uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
                DAT_0202e188 = uVar3 & 0x7fffffff;
                iVar4 = sub_080EF330(uVar3 * 2 >> 0x11,5);
                iVar4 = sub_08077468(uVar8,&UNK_083262f0 + iVar4 * 8,0,0);
                *piVar6 = iVar4;
              }
              else {
                iVar4 = sub_08075EC0(*(undefined4 *)(param_1 + 0x30),&DAT_083262e8,0,0);
                *piVar6 = iVar4;
              }
              break;
            }
            uVar3 = uVar5 + 1 & 0xffff;
          } while ((int)((uVar5 + 1) * 0x10000) >> 0x10 < 6);
        }
        uVar3 = 0;
        do {
          piVar6 = (int *)((int)&DAT_0202edb8 + ((int)(uVar3 * 0x10000) >> 0xe));
          iVar4 = *piVar6;
          if ((iVar4 != 0) && (1 < *(byte *)(iVar4 + 0xc))) {
            *piVar6 = 0;
          }
          uVar5 = uVar3 * 0x10000 + 0x10000;
          uVar3 = uVar5 >> 0x10;
        } while ((int)uVar5 >> 0x10 < 6);
        iVar4 = *(int *)(param_1 + 0x184) + -1;
        *(int *)(param_1 + 0x184) = iVar4;
        if (iVar4 == 0xa8c) {
          uVar8 = 0x60c;
        }
        else {
          if (iVar4 != 600) {
            if (iVar4 == 0) {
              sub_080DEF5C(0x606,0x3c);
              DAT_0202e01c = 2;
            }
            goto LAB_08017588;
          }
          uVar8 = 0x60d;
        }
        sub_080DEF5C(uVar8,0x3c);
      }
    }
LAB_08017588:
    cVar1 = *(char *)(param_1 + 0x17c);
    if (cVar1 == '\t') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      if (*(char *)(param_1 + 0x17d) != '\0') {
        DAT_0202ebbb = DAT_0202ebbb | 0x20;
      }
      sub_08014D0C(4);
LAB_080175bc:
      uVar2 = 10;
    }
    else {
      if (((cVar1 == '\n') && (0xb3fff < *(int *)(iVar9 + 0x58))) &&
         (*(int *)(iVar9 + 0x54) < 0xe9001)) {
        sub_0801B454(&DAT_0202ec40,&DAT_08329e84);
        *(char *)(param_1 + 0x17c) = '\v';
      }
      if (*(char *)(param_1 + 0x17c) == '\v') {
        if (0xc2fff < *(int *)(iVar9 + 0x58)) {
          if (DAT_0202ed98 != 0xffffffff) {
            sub_08003274(DAT_0202ed98 & 0xffff);
            DAT_0202ed98 = 0xffffffff;
          }
          DAT_0202d00c = 0xe1000;
          DAT_0202d014 = 0xe9000;
          *(undefined2 *)(param_1 + 0x15e) = 0;
        }
        if (0xf9fff < *(int *)(iVar9 + 0x58)) {
          DAT_0202d00c = 0;
          DAT_0202d014 = 0x3c0000;
          DAT_030032e1 = DAT_030032e1 | 2;
          if (DAT_0202ed98 != 0xba) {
            if (DAT_0202ed98 != 0xffffffff) {
              sub_08003274(DAT_0202ed98 & 0xffff);
              DAT_0202ed98 = 0xffffffff;
            }
            sub_08003264(0xba);
            DAT_0202ed98 = 0xba;
          }
          *(undefined *)(param_1 + 0x17c) = 0xc;
        }
        goto LAB_08017758;
      }
      if (((*(char *)(param_1 + 0x17c) != '\f') || (*(int *)(iVar9 + 0x58) < 0xfa000)) ||
         (*(int *)(iVar9 + 0x54) < 0xee000)) {
        if ((*(char *)(param_1 + 0x17c) == '\r') && ((DAT_0202ec38 & 0x20) != 0)) {
          DAT_030032e0 = DAT_030032e0 | 0x80;
          DAT_030032e1 = DAT_030032e1 | 2;
          sub_0801B454(&DAT_0202ec40,&DAT_0832a05c);
          DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
          DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 4;
        }
        goto LAB_08017758;
      }
      DAT_030032e1 = 0;
      sub_0801B454(&DAT_0202ec40,&DAT_08329f74);
      sub_08014D0C(5);
      uVar2 = 0xd;
    }
  }
LAB_0801725c:
  *(undefined *)(param_1 + 0x17c) = uVar2;
LAB_08017758:
  return (ulonglong)in_lr << 0x20;
}

