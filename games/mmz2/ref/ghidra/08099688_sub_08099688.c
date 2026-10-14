// sub_08099688 at 0x08099688 (thumb)

undefined4 sub_08099688(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = DAT_0202ebbb & 0x20;
  if ((DAT_0202ebbb & 0x20) == 0) {
    puVar5 = (uint *)(param_1 + 0x8c);
    if ((*puVar5 & 0x204) == 0) {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        if (1 < *(byte *)(iVar4 + 0xc)) {
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
          *puVar5 = 0;
          *(undefined4 *)(param_1 + 0x90) = 0;
          *(undefined *)(param_1 + 0x94) = 0;
          goto LAB_08099728;
        }
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
        *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + 0x800;
        sVar2 = sub_08008CFC();
        if (sVar2 == 0) {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        *(undefined *)(param_1 + 0xd) = 0;
      }
      else {
        if (*(char *)(param_1 + 0xd) == '\0') {
          *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
          *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + 0x800;
          sub_080127E4(param_1,0xb05);
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_080997c4:
          sub_080128D4(param_1);
          if (*(char *)(param_1 + 0x73) != '\x03') {
            return in_lr;
          }
          *(undefined *)(param_1 + 0xb5) = 1;
          *(undefined *)(param_1 + 0x12) = 0x80;
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          return in_lr;
        }
        if (*(char *)(param_1 + 0xd) == '\x01') goto LAB_080997c4;
        iVar4 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        *(int *)(param_1 + 0x58) = iVar4;
        if ((((*puVar5 & 4) == 0) &&
            (sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),iVar4), sVar2 == 0)) &&
           (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0'
           )) {
          iVar4 = *(int *)(param_1 + 0x60) + 0x40;
          *(int *)(param_1 + 0x60) = iVar4;
          if (iVar4 < 0x701) {
            return in_lr;
          }
          *(undefined4 *)(param_1 + 0x60) = 0x700;
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
        *(undefined *)(param_1 + 0xd) = 0;
      }
    }
    else {
      *puVar5 = uVar3;
      *(uint *)(param_1 + 0x90) = uVar3;
      *(char *)(param_1 + 0x94) = (char)uVar3;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(char *)(param_1 + 0xd) = (char)uVar3;
    }
    sub_08099834(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
LAB_08099728:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

