// sub_0805BC00 at 0x0805BC00 (thumb)

undefined4 sub_0805BC00(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  byte bVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_24 = 0xc2;
  local_20 = 0xc3;
  uVar6 = *(byte *)(param_1 + 10) >> 4 & 1;
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    iVar2 = 0;
    if (DAT_0202e910 == 0x10) {
      iVar2 = 4;
    }
    sub_08002B10(*(undefined2 *)((int)&local_24 + iVar2));
    sub_08002B10(0x2f);
    piVar4 = (int *)(param_1 + 200);
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      pcVar1 = (char *)(param_1 + 0xbf);
      if (*pcVar1 == '\0') {
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
        *(undefined4 *)(iVar2 + 0x8c) = 0;
        *(undefined4 *)(iVar2 + 0x90) = 0;
        *(undefined *)(iVar2 + 0x94) = 0;
        *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
        *(undefined4 *)(iVar2 + 0xc) = 3;
        *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)((&DAT_088614b8)[*(byte *)(iVar2 + 9)] + 0xc)
        ;
        *piVar4 = 0;
        *pcVar1 = -1;
      }
      iVar2 = *piVar4;
      if (iVar2 != 0) {
        if (*pcVar1 == '\x01') {
          *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
          *(undefined4 *)(iVar2 + 0x8c) = 0;
          *(undefined4 *)(iVar2 + 0x90) = 0;
          *(undefined *)(iVar2 + 0x94) = 0;
          *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
          *(undefined4 *)(iVar2 + 0xc) = 3;
          *(undefined4 *)(iVar2 + 0x14) =
               *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
          *piVar4 = 0;
          *pcVar1 = -1;
        }
        iVar2 = *piVar4;
        if (iVar2 != 0) {
          if (*pcVar1 == '\x02') {
            *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
            *(undefined4 *)(iVar2 + 0x8c) = 0;
            *(undefined4 *)(iVar2 + 0x90) = 0;
            *(undefined *)(iVar2 + 0x94) = 0;
            *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
            *(undefined4 *)(iVar2 + 0xc) = 3;
            *(undefined4 *)(iVar2 + 0x14) =
                 *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
            *piVar4 = 0;
            *pcVar1 = -1;
          }
          iVar2 = *piVar4;
          if (iVar2 != 0) {
            if (*pcVar1 == '\x03') {
              *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
              *(undefined4 *)(iVar2 + 0x8c) = 0;
              *(undefined4 *)(iVar2 + 0x90) = 0;
              *(undefined *)(iVar2 + 0x94) = 0;
              *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
              *(undefined4 *)(iVar2 + 0xc) = 3;
              *(undefined4 *)(iVar2 + 0x14) =
                   *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(iVar2 + 9) * 4) + 0xc);
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
    sub_08094D58(param_1,param_1 + 0x54,0,uVar6);
    sub_0801CF00(param_1,0xa306);
    *(undefined *)(param_1 + 0xbd) = 1;
    *(uint *)(param_1 + 0x5c) = (uVar6 * 2 + -1) * 0x80;
    *(undefined *)(param_1 + 0x12) = 0x38;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 1:
    sub_0801CFF0(param_1);
    bVar5 = *(char *)(param_1 + 0x12) - 1;
    *(byte *)(param_1 + 0x12) = bVar5;
    iVar2 = FUN_081288bc((uint)*(byte *)(param_1 + 0x12) * *(int *)(param_1 + 0x5c),0x38);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    break;
  case 2:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 3:
    sub_0801CFF0(param_1);
    bVar5 = *(byte *)(*(int *)(param_1 + 0x18) + 9) & 0x80;
    break;
  case 4:
    local_1c = 0x1000;
    local_18 = 0xffffe000;
    uVar3 = sub_080D2578(param_1);
    *(undefined4 *)(param_1 + 0xd0) = uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 5:
    sub_0801CFF0(param_1);
    piVar4 = (int *)(param_1 + 0xd0);
    if (*piVar4 != 0) {
      if (1 < *(byte *)(*piVar4 + 0xc)) {
        *piVar4 = 0;
      }
      if (*piVar4 != 0) {
        return in_lr;
      }
    }
    goto LAB_0805bee0;
  case 6:
    DAT_0202e922 = DAT_0202e922 | 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  case 7:
    sub_0801CFF0(param_1);
  default:
    goto switchD_0805bc28_caseD_8;
  }
  if (bVar5 != 0) {
LAB_0805bee0:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
switchD_0805bc28_caseD_8:
  return in_lr;
}

