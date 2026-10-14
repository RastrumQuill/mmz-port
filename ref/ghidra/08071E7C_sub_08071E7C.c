// sub_08071E7C at 0x08071E7C (thumb)

undefined4 sub_08071E7C(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  undefined4 local_28;
  int local_24;
  
  iVar7 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0;
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar7 + 0x4c);
      }
      else {
        iVar3 = *(int *)(iVar7 + 0x4c) + -0x800;
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      iVar3 = *(int *)(iVar7 + 0x50) + -0x3000;
    }
    else {
      if (*(char *)(param_1 + 0x12) != '\n') goto LAB_080722da;
      if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar7 + 0x4c) + 0x1000;
      }
      else {
        iVar3 = *(int *)(iVar7 + 0x4c) + -0x1800;
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      iVar3 = *(int *)(iVar7 + 0x50) + -0x2c00;
    }
    goto LAB_080722d8;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080722da;
    if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
      iVar3 = *(int *)(iVar7 + 0x4c);
    }
    else {
      iVar3 = *(int *)(iVar7 + 0x4c) + -0x800;
    }
    *(int *)(param_1 + 0x4c) = iVar3;
    iVar3 = *(int *)(iVar7 + 0x50);
    iVar4 = -0x2c00;
LAB_080722d6:
    iVar3 = iVar3 + iVar4;
  }
  else {
    if (bVar1 == 2) {
      cVar2 = *(char *)(param_1 + 0x12);
      if (cVar2 == '\x02') {
        if ((*(byte *)(iVar7 + 10) & 0x10) != 0) {
          iVar3 = *(int *)(iVar7 + 0x4c);
          iVar4 = -0x800;
          goto LAB_080722ce;
        }
        iVar3 = *(int *)(iVar7 + 0x4c);
        goto LAB_080722d0;
      }
      if (cVar2 == '\x04') {
        if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(iVar7 + 0x4c) + -0x2000;
        }
        else {
          iVar3 = *(int *)(iVar7 + 0x4c) + 0x1800;
        }
        *(int *)(param_1 + 0x4c) = iVar3;
        iVar3 = *(int *)(iVar7 + 0x50);
        iVar4 = -0x1800;
      }
      else {
        if (cVar2 != '\b') {
          if (cVar2 == '\x0e') {
            sub_08001EAC(0x7e);
            if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
              local_28 = *(undefined4 *)(param_1 + 0x4c);
              local_24 = *(int *)(param_1 + 0x50) + 0x800;
              uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
              DAT_02022890 = uVar6 & 0x7fffffff;
              sub_0808D840(&local_28,1,-(uVar5 * 2 >> 0x11 & 0x1ff),
                           (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
              uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
              DAT_02022890 = uVar6 & 0x7fffffff;
              sub_0808D840(&local_28,1,-(uVar5 * 2 >> 0x11 & 0x1ff),
                           (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
              uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
              DAT_02022890 = uVar6 & 0x7fffffff;
              sub_0808D840(&local_28,0,-(uVar5 * 2 >> 0x11 & 0x1ff),
                           (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
              uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar5 = -(uVar6 * 2 >> 0x11 & 0x1ff);
            }
            else {
              local_28 = *(undefined4 *)(param_1 + 0x4c);
              local_24 = *(int *)(param_1 + 0x50) + 0x800;
              uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
              DAT_02022890 = uVar6 & 0x7fffffff;
              sub_0808D840(&local_28,1,uVar5 * 2 >> 0x11 & 0x1ff,
                           (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
              uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
              DAT_02022890 = uVar6 & 0x7fffffff;
              sub_0808D840(&local_28,1,uVar5 * 2 >> 0x11 & 0x1ff,
                           (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
              uVar5 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
              DAT_02022890 = uVar6 & 0x7fffffff;
              sub_0808D840(&local_28,0,uVar5 * 2 >> 0x11 & 0x1ff,
                           (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
              uVar6 = DAT_02022890 * 0x343fd + 0x269ec3;
              uVar5 = uVar6 * 2 >> 0x11 & 0x1ff;
            }
            uVar6 = (uVar6 & 0x7fffffff) * 0x343fd + 0x269ec3;
            DAT_02022890 = uVar6 & 0x7fffffff;
            sub_0808D840(&local_28,0,uVar5,
                         (int)(((uVar6 * 2 >> 0x11 & 7) + 0xc) * -0x400000) >> 0x10);
          }
          goto LAB_080722da;
        }
        if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
          iVar3 = *(int *)(iVar7 + 0x4c) + -0x4000;
        }
        else {
          iVar3 = *(int *)(iVar7 + 0x4c) + 0x3800;
        }
        *(int *)(param_1 + 0x4c) = iVar3;
        iVar3 = *(int *)(iVar7 + 0x50);
        iVar4 = -0xc00;
      }
      goto LAB_080722d6;
    }
    if (bVar1 != 5) goto LAB_080722da;
    cVar2 = *(char *)(param_1 + 0x12);
    if (cVar2 == '\0') {
      if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar7 + 0x4c) + -0x4000;
      }
      else {
        iVar3 = *(int *)(iVar7 + 0x4c) + 0x3800;
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      iVar3 = *(int *)(iVar7 + 0x50) + -0xc00;
    }
    else if (cVar2 == '\a') {
      if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar7 + 0x4c) + -0x3800;
      }
      else {
        iVar3 = *(int *)(iVar7 + 0x4c) + 0x3000;
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      iVar3 = *(int *)(iVar7 + 0x50) + -0x1400;
    }
    else {
      if (cVar2 != '\r') {
        if (cVar2 == '\x10') {
          if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
            iVar3 = *(int *)(iVar7 + 0x4c);
          }
          else {
            iVar3 = *(int *)(iVar7 + 0x4c);
            iVar4 = -0x800;
LAB_080722ce:
            iVar3 = iVar3 + iVar4;
          }
        }
        else {
          if (cVar2 != '\x14') goto LAB_080722da;
          if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
            iVar3 = *(int *)(iVar7 + 0x4c);
            iVar4 = 0x1000;
            goto LAB_080722ce;
          }
          iVar3 = *(int *)(iVar7 + 0x4c) + -0x1800;
        }
LAB_080722d0:
        *(int *)(param_1 + 0x4c) = iVar3;
        iVar3 = *(int *)(iVar7 + 0x50);
        iVar4 = -0x3000;
        goto LAB_080722d6;
      }
      if ((*(byte *)(iVar7 + 10) & 0x10) == 0) {
        iVar3 = *(int *)(iVar7 + 0x4c) + -0x2800;
      }
      else {
        iVar3 = *(int *)(iVar7 + 0x4c) + 0x2000;
      }
      *(int *)(param_1 + 0x4c) = iVar3;
      iVar3 = *(int *)(iVar7 + 0x50) + -0x3000;
    }
  }
LAB_080722d8:
  *(int *)(param_1 + 0x50) = iVar3;
LAB_080722da:
  if (*(byte *)(param_1 + 0x12) < 0xfe) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) + 1;
  }
  if (1 < *(byte *)(iVar7 + 0xc)) {
    if (*(char *)(iVar7 + 0xc6) != '\0') {
      sub_0808827C(1,param_1 + 0x4c);
      sub_08001EAC(2);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
  }
  return in_lr;
}

