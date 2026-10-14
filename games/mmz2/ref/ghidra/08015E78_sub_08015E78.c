// sub_08015E78 at 0x08015E78 (thumb)

longlong sub_08015E78(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  short sVar7;
  ushort *puVar9;
  char *pcVar10;
  uint in_lr;
  uint uVar8;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pcVar10 = (char *)(param_1 + 0x17c);
  cVar1 = *pcVar10;
  if (cVar1 == '\0') {
    DAT_0202ec38 = DAT_0202ec38 | 1;
    if (DAT_0202ec32 == 0) {
      sub_0801B454(&DAT_0202ec40,&DAT_0832732c);
      *(undefined2 *)(param_1 + 0x17e) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *(undefined *)(param_1 + 0x17d) = 0;
      *pcVar10 = '\x01';
    }
    else if (DAT_0202ec32 == 1) {
      sub_0801B454(&DAT_0202ec40,&DAT_08327544);
      *(undefined2 *)(param_1 + 0x17e) = 0;
      *(undefined4 *)(param_1 + 0x180) = 0;
      *pcVar10 = '\x01';
    }
    else {
      if (DAT_0202ec32 == 2) {
        sub_0801B454(&DAT_0202ec40,&DAT_083277b4);
        cVar1 = '\t';
      }
      else {
        if (DAT_0202ec32 != 3) goto LAB_0801641c;
        sub_0801B454(&DAT_0202ec40,&DAT_0832780c);
        cVar1 = '\v';
      }
      *pcVar10 = cVar1;
    }
  }
  else if (cVar1 == '\x01') {
    pcVar10 = (char *)(param_1 + 0x17d);
    if (*pcVar10 == '\0') {
      sub_08014D0C(1);
      *pcVar10 = *pcVar10 + '\x01';
    }
    if (*(int *)(iVar2 + 0x54) < 0x62001) {
      uVar8 = 0;
      sVar7 = 0;
      uVar5 = 0;
      if (*(ushort *)(param_1 + 0x17e) != 0) {
        do {
          piVar6 = (int *)((int)&DAT_0202edb8 + ((int)(uVar5 * 0x10000) >> 0xe));
          iVar3 = *piVar6;
          if (iVar3 == 0) {
LAB_08015fb0:
            uVar8 = uVar8 * 0x10000 + 0x10000 >> 0x10;
          }
          else if (1 < *(byte *)(iVar3 + 0xc)) {
            *piVar6 = 0;
            goto LAB_08015fb0;
          }
          sVar7 = (short)uVar8;
          uVar4 = uVar5 * 0x10000 + 0x10000;
          uVar5 = uVar4 >> 0x10;
        } while ((int)uVar4 >> 0x10 < (int)(uint)*(ushort *)(param_1 + 0x17e));
      }
      puVar9 = (ushort *)(param_1 + 0x17e);
      if (*puVar9 < 0x20) {
        piVar6 = (int *)(param_1 + 0x180);
        if (*piVar6 == 0) {
          if ((int)((uint)*puVar9 - (int)sVar7) < 5) {
            iVar3 = sub_08066834(&DAT_083262b0,1,0);
            (&DAT_0202edb8)[*puVar9] = iVar3;
            if (iVar3 != 0) {
              *piVar6 = 0x1e;
              *puVar9 = *puVar9 + 1;
            }
          }
        }
        else {
          *piVar6 = *piVar6 + -1;
        }
      }
      if (sVar7 == 0x20) {
        sub_0801B454(&DAT_0202ec40,&DAT_083275ac);
        *(undefined2 *)(param_1 + 0x17e) = 0;
        *(undefined4 *)(param_1 + 0x180) = 0;
      }
    }
    if (0xc5fff < *(int *)(iVar2 + 0x54)) {
      uVar5 = 0;
      if (*(ushort *)(param_1 + 0x17e) != 0) {
        do {
          iVar2 = (&DAT_0202edb8)[(short)uVar5];
          if (iVar2 != 0) {
            *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
            *(undefined4 *)(iVar2 + 0x8c) = 0;
            *(undefined4 *)(iVar2 + 0x90) = 0;
            *(undefined *)(iVar2 + 0x94) = 0;
            *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
            *(undefined4 *)(iVar2 + 0xc) = 3;
            *(undefined4 *)(iVar2 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
          }
          uVar8 = (int)(short)uVar5 + 1;
          uVar5 = uVar8 & 0xffff;
        } while ((int)(uVar8 * 0x10000) >> 0x10 < (int)(uint)*(ushort *)(param_1 + 0x17e));
      }
      DAT_030032e1 = DAT_030032e1 | 2;
      *(undefined *)(param_1 + 0x17c) = 2;
    }
  }
  else if (cVar1 == '\x02') {
    DAT_030032e1 = 0;
    sub_0801B454(&DAT_0202ec40,&DAT_083275e4);
    *pcVar10 = '\x03';
  }
  else if ((cVar1 == '\x03') && ((DAT_0202ec38 & 0x20) != 0)) {
    DAT_030032e0 = DAT_030032e0 | 0x80;
    DAT_030032e1 = DAT_030032e1 | 2;
    sub_0801B454(&DAT_0202ec40,&DAT_08327644);
    DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
    DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
    *pcVar10 = '\x04';
  }
  else {
    pcVar10 = (char *)(param_1 + 0x17c);
    if (*pcVar10 == '\x04') {
      DAT_030032e0 = DAT_030032e0 & 0x7f;
      DAT_030032e1 = 0;
      *pcVar10 = '\x05';
    }
    else if ((*pcVar10 == '\x05') && (0x101fff < *(int *)(iVar2 + 0x54))) {
      DAT_030032e1 = DAT_030032e1 | 2;
      *pcVar10 = '\x06';
    }
    else {
      pcVar10 = (char *)(param_1 + 0x17c);
      if (*pcVar10 == '\x06') {
        DAT_030032e1 = 0;
        sub_0801B454(&DAT_0202ec40,&DAT_083276b4);
        *pcVar10 = '\a';
      }
      else if ((*pcVar10 == '\a') && ((DAT_0202ec38 & 0x20) != 0)) {
        DAT_030032e0 = DAT_030032e0 | 0x80;
        DAT_030032e1 = DAT_030032e1 | 2;
        sub_0801B454(&DAT_0202ec40,&DAT_08327714);
        DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
        DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 1;
        *pcVar10 = '\b';
      }
      else {
        pcVar10 = (char *)(param_1 + 0x17c);
        if (*pcVar10 == '\b') {
          sub_08014D0C(2);
          DAT_030032e0 = DAT_030032e0 & 0x7f;
          DAT_030032e1 = 0;
          *pcVar10 = '\t';
        }
        else if ((*pcVar10 == '\t') && (0x1c3fff < *(int *)(iVar2 + 0x54))) {
          sub_08014D0C(3);
          DAT_030032e1 = DAT_030032e1 | 2;
          *pcVar10 = '\n';
        }
        else {
          pcVar10 = (char *)(param_1 + 0x17c);
          if (*pcVar10 == '\n') {
            DAT_030032e1 = 0;
            sub_0801B454(&DAT_0202ec40,&DAT_08327864);
            *pcVar10 = '\r';
          }
          else if ((*pcVar10 == '\v') && (0x1c1fff < *(int *)(iVar2 + 0x54))) {
            sub_08014D0C(3);
            DAT_030032e1 = DAT_030032e1 | 2;
            *pcVar10 = '\f';
          }
          else {
            pcVar10 = (char *)(param_1 + 0x17c);
            if (*pcVar10 == '\f') {
              DAT_030032e1 = 0;
              sub_0801B454(&DAT_0202ec40,&DAT_08328554);
              *pcVar10 = '\r';
            }
            else {
              if (*pcVar10 == '\r') {
                DAT_0202ed74 = *(int *)(*(int *)(param_1 + 0x30) + 0x54) + -0x4400;
                DAT_0202ed78 = *(int *)(*(int *)(param_1 + 0x30) + 0x54) + 0xb800;
                if ((DAT_0202ec38 & 0x20) != 0) {
                  DAT_030032e0 = DAT_030032e0 | 0x80;
                  DAT_030032e1 = DAT_030032e1 | 2;
                  sub_0801B454(&DAT_0202ec40,&DAT_08327a74);
                  DAT_0202ec42 = DAT_0202ec42 & 0xfffd;
                  DAT_0202ec38 = DAT_0202ec38 & 0xffdf | 0x85;
                  *pcVar10 = '\x0e';
                  goto LAB_0801641c;
                }
              }
              pcVar10 = (char *)(param_1 + 0x17c);
              cVar1 = *pcVar10;
              if (cVar1 == '\x0e') {
                DAT_030032e0 = DAT_030032e0 & 0x7f;
                DAT_030032e1 = 0;
                *pcVar10 = '\x0f';
              }
              else if (cVar1 == '\x0f') {
                sub_0801B454(&DAT_0202ec40,&DAT_08327c9c);
                *pcVar10 = '\x10';
              }
              else if (cVar1 == '\x10') {
                sub_0801B454(&DAT_0202ec40,&DAT_0832815c);
                DAT_0202ec38 = DAT_0202ec38 & 0xff7e;
              }
            }
          }
        }
      }
    }
  }
LAB_0801641c:
  return (ulonglong)in_lr << 0x20;
}

