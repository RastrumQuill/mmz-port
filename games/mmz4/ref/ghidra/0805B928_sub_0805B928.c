// sub_0805B928 at 0x0805B928 (thumb)

undefined4 sub_0805B928(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0xc2;
  local_1c = 0xc3;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar3 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar3 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_20 + iVar3));
    piVar4 = (int *)(param_1 + 200);
    iVar3 = *piVar4;
    if (iVar3 != 0) {
      pcVar1 = (char *)(param_1 + 0xbf);
      if (*pcVar1 == '\0') {
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        *(undefined4 *)(iVar3 + 0x90) = 0;
        *(undefined *)(iVar3 + 0x94) = 0;
        *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
        *(undefined4 *)(iVar3 + 0xc) = 3;
        *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar3 + 9)] + 0xc)
        ;
        *piVar4 = 0;
        *pcVar1 = -1;
      }
      iVar3 = *piVar4;
      if (iVar3 != 0) {
        if (*pcVar1 == '\x01') {
          *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
          *(undefined4 *)(iVar3 + 0x8c) = 0;
          *(undefined4 *)(iVar3 + 0x90) = 0;
          *(undefined *)(iVar3 + 0x94) = 0;
          *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
          *(undefined4 *)(iVar3 + 0xc) = 3;
          *(undefined4 *)(iVar3 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
          *piVar4 = 0;
          *pcVar1 = -1;
        }
        iVar3 = *piVar4;
        if (iVar3 != 0) {
          if (*pcVar1 == '\x02') {
            *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
            *(undefined4 *)(iVar3 + 0x8c) = 0;
            *(undefined4 *)(iVar3 + 0x90) = 0;
            *(undefined *)(iVar3 + 0x94) = 0;
            *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
            *(undefined4 *)(iVar3 + 0xc) = 3;
            *(undefined4 *)(iVar3 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
            *piVar4 = 0;
            *pcVar1 = -1;
          }
          iVar3 = *piVar4;
          if (iVar3 != 0) {
            if (*pcVar1 == '\x03') {
              *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfc;
              *(undefined4 *)(iVar3 + 0x8c) = 0;
              *(undefined4 *)(iVar3 + 0x90) = 0;
              *(undefined *)(iVar3 + 0x94) = 0;
              *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfb;
              *(undefined4 *)(iVar3 + 0xc) = 3;
              *(undefined4 *)(iVar3 + 0x14) =
                   *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar3 + 9) * 4) + 0xc);
              *piVar4 = 0;
              *pcVar1 = -1;
            }
            if (*piVar4 != 0) {
              if (*pcVar1 == '\x04') {
                *(undefined *)(*piVar4 + 0xb6) = 1;
                *piVar4 = 0;
                *pcVar1 = -1;
              }
              if ((*piVar4 != 0) && (*pcVar1 == '\x05')) {
                *(undefined *)(*piVar4 + 0xb6) = 1;
                *piVar4 = 0;
                *pcVar1 = -1;
              }
            }
          }
        }
      }
    }
    if (((DAT_0202e918 & 1) != 0) && ((DAT_0202e922 & 1) == 0)) {
      DAT_0202e918 = DAT_0202e918 & 0xfffe | 0x10;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0801CF00(param_1,0xa304);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80) == 0) {
      return in_lr;
    }
    goto LAB_0805bbce;
  case 4:
    local_18 = 0;
    local_14 = 0xffffe000;
    uVar2 = sub_080D2578(param_1);
    *(undefined4 *)(param_1 + 0xd0) = uVar2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar4 = (int *)(param_1 + 0xd0);
    if (*piVar4 != 0) {
      if (1 < *(byte *)(*piVar4 + 0xc)) {
        *piVar4 = 0;
      }
      iVar3 = *piVar4;
      goto LAB_0805bbca;
    }
    goto LAB_0805bbce;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_0805b948_caseD_8;
  }
  sub_0801CFF0(param_1);
  iVar3 = *(byte *)(param_1 + 0x12) - 1;
  *(char *)(param_1 + 0x12) = (char)iVar3;
  iVar3 = iVar3 * 0x1000000;
LAB_0805bbca:
  if (iVar3 == 0) {
LAB_0805bbce:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_0805b948_caseD_8:
  return in_lr;
}

