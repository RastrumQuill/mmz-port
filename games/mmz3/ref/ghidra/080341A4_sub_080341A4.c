// sub_080341A4 at 0x080341A4 (thumb)

undefined8 sub_080341A4(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  iVar4 = 0;
  bVar5 = 0;
  if (param_2 != (byte *)0x0) {
    bVar5 = *param_2;
  }
  if (*(byte *)(param_1 + 0xc0) == 3) {
    if ((*(uint *)(param_1 + 0x218) & 0x1000) == 0) {
      if (((*(uint *)(param_1 + 0x218) & 0x2000) != 0) && (*(char *)(param_1 + 0xdc) != '\0')) {
        if (param_2 != (byte *)0x0) {
          *param_2 = 3;
        }
        iVar4 = 2;
      }
    }
    else {
      if (param_2 != (byte *)0x0) {
        *param_2 = 3;
      }
      iVar4 = 1;
    }
LAB_0803423a:
    puVar3 = (uint *)(param_1 + 0x218);
    bVar1 = *(byte *)(param_1 + 0xc1);
    if (*(byte *)(param_1 + 0xc0) != bVar1) {
      if (bVar1 == 3) {
        if ((*puVar3 & 0x4000) != 0) {
          if (param_2 != (byte *)0x0) {
            *param_2 = 3;
          }
          cVar2 = sub_080FE2C0(param_1,*(undefined4 *)
                                        (&DAT_0835b184 + (uint)*(byte *)(param_1 + 0xc1) * 4));
          if (cVar2 != '\0') goto LAB_080342d8;
        }
        if (((*puVar3 & 0x8000) != 0) && (*(char *)(param_1 + 0xdd) != '\0')) {
          if (param_2 != (byte *)0x0) {
            *param_2 = *(byte *)(param_1 + 0xc1);
          }
          cVar2 = sub_080FE2C0(param_1,*(undefined4 *)
                                        (&DAT_0835b184 + (uint)*(byte *)(param_1 + 0xc1) * 4));
          if (cVar2 != '\0') {
            iVar4 = 2;
            goto LAB_08034314;
          }
        }
      }
      else if ((*puVar3 & 0x4000) != 0) {
        if (param_2 != (byte *)0x0) {
          *param_2 = bVar1;
        }
        cVar2 = sub_080FE2C0(param_1,*(undefined4 *)
                                      (&DAT_0835b184 + (uint)*(byte *)(param_1 + 0xc1) * 4));
        if (cVar2 != '\0') goto LAB_080342d8;
      }
    }
    if (iVar4 != 0) {
      if (param_2 != (byte *)0x0) {
        cVar2 = sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0835b184 + (uint)*param_2 * 4));
        if (cVar2 != '\0') goto LAB_08034314;
        iVar4 = 0;
      }
      if (iVar4 != 0) goto LAB_08034314;
    }
    if (param_2 != (byte *)0x0) {
      *param_2 = bVar5;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x218) & 0x1000) == 0) goto LAB_0803423a;
    if (param_2 != (byte *)0x0) {
      *param_2 = *(byte *)(param_1 + 0xc0);
    }
    cVar2 = sub_080FE2C0(param_1,*(undefined4 *)
                                  (&DAT_0835b184 + (uint)*(byte *)(param_1 + 0xc0) * 4));
    if (cVar2 == '\0') goto LAB_0803423a;
LAB_080342d8:
    iVar4 = 1;
  }
LAB_08034314:
  return CONCAT44(in_lr,iVar4);
}

